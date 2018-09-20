#include "SampleFunc.h"
#include <iostream>
// Function: Smp3xCAM
// スキャンパスを生成するシンプルな3xCAM
//
// Parameter:
// *S - 加工面（一つの面のみ）
// *C - 生成するスキャンパスのガイドカーブ
// R - ボールエンドミル半径
// N - スキャニングライン分割数(N < 100)
// H - 素材上面のZ座標
// D - Z方向分割数（粗加工用）
void Smp3xCAM(NURBSS *S,NURBSC *C,double R,int N,double H,int D)
{
    NURBS_Func	nf;                 // NURBS_Funcへのインスタンス
    double green[3] = {0,1,0};      // 描画するパスの色（緑）
    Coord plane_pt;                 // 分割する平面上の1点
    Coord plane_n;                  // 分割する平面の法線ベクトル
    Coord path_[2000];               // 一時格納用バッファ
    Coord ***path = NewCoord3(D+1,N+1,2000);    // 生成されたパスを格納
    int ptnum[100];                 // スキャンライン1本ごとの加工点数を格納
    int flag = 0;                   // ジグザグパス生成時の方向転換用フラグ

    // ガイドカーブに沿って垂直平面をシフトしていき，加工面との交点群を求めていく
	for(int i=0;i<=N;i++){
        double t = (double)i/(double)N;
		if(i==0) t += 0.0001;		// 特異点回避
		else if(i==N) t-= 0.0001;	// 特異点回避
        plane_pt = nf.CalcNurbsCCoord(C,t);     // 注目中の垂直平面上の1点
        plane_n = nf.CalcTanVecOnNurbsC(C,t);   // 注目中の垂直平面の法線ベクトル
        ptnum[i] = nf.CalcIntersecPtsPlaneSearch(S,plane_pt,plane_n,0.5,3,path_,2000,RUNGE_KUTTA);  // 交点群算出
        // 得られた交点群を，加工面法線方向に工具半径分オフセットさせた点を得る
		for(int j=0;j<ptnum[i];j++){
            Coord pt = nf.CalcNurbsSCoord(S,path_[j].x,path_[j].y);     // 工具コンタクト点
            Coord n = nf.CalcNormVecOnNurbsS(S,path_[j].x,path_[j].y);  // 法線ベクトル
            if(n.z < 0)	n = n*(-1);         // 法線ベクトルの向き調整
			path[D][i][j] = pt + n*R;		// 工具半径オフセット
		}
	}

	// 粗加工パス生成
	for(int i=0;i<D;i++){
		for(int j=0;j<N+1;j++){
			for(int k=0;k<ptnum[j];k++){
				double del = (H - path[D][j][k].z)/(double)D;
				double Z = H - del*(double)i;
				path[i][j][k] = SetCoord(path[D][j][k].x,path[D][j][k].y,Z);
			}
		}
	}

	// path描画
	for(int i=0;i<D+1;i++){
		for(int j=0;j<N+1;j++){
			for(int k=0;k<ptnum[j];k++){
				DrawPoint(path[i][j][k],1,1,green);
			}
		}
	}

    // NCコード生成(各条件は各自で変更ください)
	double ret = H + 10;		// リトラクトZ
	FILE *fp = fopen("demo.nc","w");
	fprintf(fp,"G92X0.0Y0.0Z0.0\n");
	fprintf(fp,"S4000M03\n");
	fprintf(fp,"F500\n");
	for(int i=0;i<D+1;i++){
		fprintf(fp,"G00X%.2lfY%.2lfZ%.2lf\n",path[i][0][0].x,path[i][0][0].y,ret);
		for(int j=0;j<N+1;j++){
			if(flag == 0){
				for(int k=0;k<ptnum[j];k++){
					fprintf(fp,"G01X%.2lfY%.2lfZ%.2lf\n",path[i][j][k].x,path[i][j][k].y,path[i][j][k].z);
				}
			}
			else{
				for(int k=ptnum[j]-1;k>=0;k--){
					fprintf(fp,"G01X%.2lfY%.2lfZ%.2lf\n",path[i][j][k].x,path[i][j][k].y,path[i][j][k].z);
				}
			}
			flag = 1 - flag;
		}
		fprintf(fp,"G01Z%.2lf\n",ret);
	}
	fprintf(fp,"G01Z%.2lf\n",ret);
	fprintf(fp,"M05\n");
	fprintf(fp,"M30\n");

	fclose(fp);
}
//Function: EqtoSurface
//入力された数式と境界条件から通過点列を作成してそれを近似するNURBS平面を生成する
int EqtoSurface(BODYList *BodyList,OBJECTList *ObjList, int PickCount, double Prop[])
{
    NURBS_Func nf;                         // NURBS_Funcへのインスタンス
    int Mu = Prop[0];          	    // ユーザーステータスのprop1をu方向の階数として読み込み
    int Mv = Prop[1];               	// ユーザーステータスのprop2をv方向の階数として読み込み
    double smpdot = Prop[2];        // ユーザーステータスのprop3を点列の間隔として読み込み
    double umin = Prop[3];          // ユーザーステータスのprop4をuの最小値として読み込み
    double umax = Prop[4];          // ユーザーステータスのprop5をuの最大値として読み込み
    double vmin = Prop[5];          // ユーザーステータスのprop6をvの最小値として読み込み
    double vmax = Prop[6];          // ユーザーステータスのprop7をvの最大値として読み込み
    int PNum_u = (umax-umin)/smpdot;
    int PNum_v = (vmax-vmin)/smpdot;

    Coord **P = NewCoord2(PNum_u,PNum_v);
    Coord *Q1 = NewCoord1(PNum_u);
    Coord *Q2 = NewCoord1(PNum_v);
    NURBSS *S = new NURBSS;
    NURBSC *C1 = new NURBSC;
    NURBSC *C2 = new NURBSC;
    /*
    P[0][0] = SetCoord(0,0,0);
    P[1][0] = SetCoord(50,0,50);
    P[2][0] = SetCoord(100,0,0);
    P[0][1] = SetCoord(0,50,50);
    P[1][1] = SetCoord(50,50,0);
    P[2][1] = SetCoord(100,50,50);
    P[0][2] = SetCoord(0,100,0);
    P[1][2] = SetCoord(50,100,50);
    P[2][2] = SetCoord(100,100,0);
    */

    P[0][0] = SetCoord(-10,10,0);
    P[0][1] = SetCoord(10,10,0);
    P[1][0] = SetCoord(-10,-10,0);
    P[1][1] = SetCoord(10,-10,0);
    Q1[0] =P[0][0]; Q1[1] =P[0][1];
    Q2[0] =P[0][0]; Q2[1] =P[1][0];
    /*NURBSC *C = new NURBSC;
    Coord *P = NewCoord1(3)
    P[0] = SetCoord(0,0,100);
    P[1] = SetCoord(100,50,50);
    P[2] = SetCoord(0,100,-50);
    */

    //for文で数式に順に代入し点列を出力して下の関数に入力
    /*for(int i = 0; i <= PNum_u; i++) {
            double Z = i*j;
            P[i] = SetCoord(, j, Z);
            xmin =+ smpdot;
            ymin =+ smpdot;
		} 
    }
    */
    nf.GenInterpolatedNurbsS1(S,P,PNum_u,PNum_v,Mu,Mv);
    nf.GenApproximationNurbsC(C1,Q1,PNum_u,Mu);
    nf.GenApproximationNurbsC(C2,Q2,PNum_v,Mv);
    //nf.GenApproximationNurbsC(C,P,PNum_u,Mu);

    Describe_BODY desc;                                 // 新たなNURBS曲面を描画するときは，Describe_BODYクラスを使う
    //desc.DrawNurbsCurve(*C1);                           // 描画
    //desc.DrawNurbsCurve(*C2);                           // 描画
    //desc.DrawNurbsSurfe(*S);
    BODY *newbody = new BODY;                           // 生成したNURBS曲面を格納するための新たなBodyを用意
    newbody->RegistNurbsStoBody(BodyList,*S,"NewBody");// 1枚のNURBS曲面を新たなBodyとして登録する
    //newbody->RegistNurbsCtoBody(BodyList,*C1,"NewBody");
    desc.Draw_NurbsCurves(newbody);
	return KOD_TRUE;  //KOD_TRUEはint型
}

//Function: TxArr
//入力された数式と境界条件から通過点列を作成してそれを近似するNURBS平面を生成する
int TxArr(BODYList *BodyList,OBJECTList *ObjList, int PickCount, double Prop[])
{
    if(!PickCount)	return KOD_ERR;		// セレクションされていなかったら、何もしない

    NURBS_Func nf;
    NURBSS *S1;
    double blue[3] = {0,0,1};

    // 1番目にセレクションされたBODYデータを得る
    OBJECT *obj = (OBJECT *)ObjList->getData(0);
    BODY *body = (BODY *)BodyList->getData(obj->Body);

    if(obj->Type == _TRIMMED_SURFACE){
        S1 = body->TrmS[obj->Num].pts;	// トリム面の場合は，トリム前の元のNURBS曲面を取り出す
	}
    else if(obj->Type == _NURBSS){
        S1 = &body->NurbsS[obj->Num];	// ただのNURBS曲面の場合はそのままその曲面へのポインタを得る
	}
	else{
		return KOD_ERR;					// セレクションされた曲面がトリム面でもNURBS曲面でもでない場合は終了
	}
/*
    // 2番目にセレクションされたBODYデータを得る
    OBJECT *obj = (OBJECT *)ObjList->getData(1);
    BODY *body = (BODY *)BodyList->getData(obj->Body);

    if(obj->Type == _TRIMMED_SURFACE){
        NURBSS *S2 = body->TrmS[obj->Num].pts;	// トリム面の場合は，トリム前の元のNURBS曲面を取り出す
	}
    else if(obj->Type == _NURBSS){
        NURBSS *S2 = &body->NurbsS[obj->Num];	// ただのNURBS曲面の場合はそのままその曲面へのポインタを得る
	}
	else{
		return KOD_ERR;					// セレクションされた曲面がトリム面でもNURBS曲面でもでない場合は終了
	}
*/
    int udiv = Prop[7];						// ユーザーステータスのprop8をu方向分割数として読み込み
    int vdiv = Prop[8];						// ユーザーステータスのprop9をv方向分割数として読み込み

	for(int i=0;i<=udiv;i++){
		double u = S1->U[0]+(double)i*(S1->U[1] - S1->U[0])/(udiv+1);
		for(int j=0;j<=vdiv;j++){
			double v = S1->V[0]+(double)j*(S1->V[1] - S1->V[0])/(vdiv+1);
            Coord P = nf.CalcNurbsSCoord(S1,u,v);				// 現在の(u,v)上の(x,y,z)を求める
            Coord Hn = nf.CalcNormVecOnNurbsS(S1,u,v);	// 法線ベクトルを求める
            DrawVector(P,Hn,10,1,blue);						// 法線ベクトルを表示
		}
    }
    return KOD_TRUE;
}
    
    

