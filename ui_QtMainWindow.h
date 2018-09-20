/********************************************************************************
** Form generated from reading UI file 'QtMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTMAINWINDOW_H
#define UI_QTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "QtConsole.h"
#include "QtDescribeView.h"

QT_BEGIN_NAMESPACE

class Ui_QtMainWindow
{
public:
    QAction *actionViewOnX;
    QAction *actionViewOnY;
    QAction *actionViewOnZ;
    QAction *actionViewOnXYZ;
    QAction *actionViewFit;
    QAction *actionViewSolid;
    QAction *actionViewNoEdge;
    QAction *actionViewWireFlame;
    QAction *actionViewVoid;
    QAction *actionSelectAll;
    QAction *actionSelect_Cancel;
    QAction *actionViewErase;
    QAction *actionViewBlend;
    QAction *actionOpenBody;
    QAction *actionUserFunc1;
    QAction *actionUserFunc2;
    QAction *actionUserFunc3;
    QAction *actionUserFunc4;
    QAction *actionUserFunc5;
    QAction *actionAboutKodatuno;
    QAction *actionViewScale;
    QAction *actionTolerance;
    QAction *actionCPView;
    QAction *actionSurfaceInfo;
    QAction *actionScalingBODY;
    QAction *actionTranslation;
    QAction *actionRotationSurface;
    QAction *actionSweepSurface;
    QAction *actionNURBSCurve;
    QAction *actionNURBSSarface;
    QAction *actionNURBSRank;
    QAction *actionQuit;
    QAction *actionShowConsole;
    QAction *actionDeleteBody;
    QAction *actionShowBodyList;
    QAction *actionUserStatus;
    QAction *actionUserFunc6;
    QAction *actionUserFunc7;
    QAction *actionUserFunc8;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QtDescribeView *describeWidget;
    QMenuBar *menuBar;
    QMenu *menuFile_F;
    QMenu *menuUser_U;
    QMenu *menuHelp_H;
    QMenu *menuView_V;
    QMenu *menuEdit_E;
    QMenu *menuSurface;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *bodyListDock;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QListWidget *bodyList;
    QDockWidget *consoleDock;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_2;
    QtConsole *consoleText;

    void setupUi(QMainWindow *QtMainWindow)
    {
        if (QtMainWindow->objectName().isEmpty())
            QtMainWindow->setObjectName(QStringLiteral("QtMainWindow"));
        QtMainWindow->setWindowModality(Qt::NonModal);
        QtMainWindow->resize(830, 660);
        QtMainWindow->setMinimumSize(QSize(830, 660));
        QtMainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icons/main.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QtMainWindow->setWindowIcon(icon);
        QtMainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        QtMainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::ForceTabbedDocks|QMainWindow::VerticalTabs);
        QtMainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionViewOnX = new QAction(QtMainWindow);
        actionViewOnX->setObjectName(QStringLiteral("actionViewOnX"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/icons/ViewOnX.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewOnX->setIcon(icon1);
        actionViewOnY = new QAction(QtMainWindow);
        actionViewOnY->setObjectName(QStringLiteral("actionViewOnY"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/icons/ViewOnY.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewOnY->setIcon(icon2);
        actionViewOnZ = new QAction(QtMainWindow);
        actionViewOnZ->setObjectName(QStringLiteral("actionViewOnZ"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/icons/ViewOnZ.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewOnZ->setIcon(icon3);
        actionViewOnXYZ = new QAction(QtMainWindow);
        actionViewOnXYZ->setObjectName(QStringLiteral("actionViewOnXYZ"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/icons/ViewOnXYZ.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewOnXYZ->setIcon(icon4);
        actionViewFit = new QAction(QtMainWindow);
        actionViewFit->setObjectName(QStringLiteral("actionViewFit"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/icons/ViewFit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewFit->setIcon(icon5);
        actionViewSolid = new QAction(QtMainWindow);
        actionViewSolid->setObjectName(QStringLiteral("actionViewSolid"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/icons/ViewSolid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewSolid->setIcon(icon6);
        actionViewNoEdge = new QAction(QtMainWindow);
        actionViewNoEdge->setObjectName(QStringLiteral("actionViewNoEdge"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/icons/ViewSolid_NoEdge.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewNoEdge->setIcon(icon7);
        actionViewWireFlame = new QAction(QtMainWindow);
        actionViewWireFlame->setObjectName(QStringLiteral("actionViewWireFlame"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/icons/ViewWierFrame.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewWireFlame->setIcon(icon8);
        actionViewVoid = new QAction(QtMainWindow);
        actionViewVoid->setObjectName(QStringLiteral("actionViewVoid"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/icons/ViewVoid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewVoid->setIcon(icon9);
        actionSelectAll = new QAction(QtMainWindow);
        actionSelectAll->setObjectName(QStringLiteral("actionSelectAll"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/icons/SelectAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectAll->setIcon(icon10);
        actionSelect_Cancel = new QAction(QtMainWindow);
        actionSelect_Cancel->setObjectName(QStringLiteral("actionSelect_Cancel"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/prefix1/icons/SelectCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_Cancel->setIcon(icon11);
        actionViewErase = new QAction(QtMainWindow);
        actionViewErase->setObjectName(QStringLiteral("actionViewErase"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/prefix1/icons/ViewErase.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewErase->setIcon(icon12);
        actionViewBlend = new QAction(QtMainWindow);
        actionViewBlend->setObjectName(QStringLiteral("actionViewBlend"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/prefix1/icons/ViewBlend.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewBlend->setIcon(icon13);
        actionOpenBody = new QAction(QtMainWindow);
        actionOpenBody->setObjectName(QStringLiteral("actionOpenBody"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/new/prefix1/icons/pload.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenBody->setIcon(icon14);
        actionUserFunc1 = new QAction(QtMainWindow);
        actionUserFunc1->setObjectName(QStringLiteral("actionUserFunc1"));
        actionUserFunc2 = new QAction(QtMainWindow);
        actionUserFunc2->setObjectName(QStringLiteral("actionUserFunc2"));
        actionUserFunc3 = new QAction(QtMainWindow);
        actionUserFunc3->setObjectName(QStringLiteral("actionUserFunc3"));
        actionUserFunc4 = new QAction(QtMainWindow);
        actionUserFunc4->setObjectName(QStringLiteral("actionUserFunc4"));
        actionUserFunc5 = new QAction(QtMainWindow);
        actionUserFunc5->setObjectName(QStringLiteral("actionUserFunc5"));
        actionAboutKodatuno = new QAction(QtMainWindow);
        actionAboutKodatuno->setObjectName(QStringLiteral("actionAboutKodatuno"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/new/prefix1/icons/help.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutKodatuno->setIcon(icon15);
        actionViewScale = new QAction(QtMainWindow);
        actionViewScale->setObjectName(QStringLiteral("actionViewScale"));
        actionTolerance = new QAction(QtMainWindow);
        actionTolerance->setObjectName(QStringLiteral("actionTolerance"));
        actionCPView = new QAction(QtMainWindow);
        actionCPView->setObjectName(QStringLiteral("actionCPView"));
        actionSurfaceInfo = new QAction(QtMainWindow);
        actionSurfaceInfo->setObjectName(QStringLiteral("actionSurfaceInfo"));
        actionScalingBODY = new QAction(QtMainWindow);
        actionScalingBODY->setObjectName(QStringLiteral("actionScalingBODY"));
        actionTranslation = new QAction(QtMainWindow);
        actionTranslation->setObjectName(QStringLiteral("actionTranslation"));
        actionRotationSurface = new QAction(QtMainWindow);
        actionRotationSurface->setObjectName(QStringLiteral("actionRotationSurface"));
        actionSweepSurface = new QAction(QtMainWindow);
        actionSweepSurface->setObjectName(QStringLiteral("actionSweepSurface"));
        actionNURBSCurve = new QAction(QtMainWindow);
        actionNURBSCurve->setObjectName(QStringLiteral("actionNURBSCurve"));
        actionNURBSSarface = new QAction(QtMainWindow);
        actionNURBSSarface->setObjectName(QStringLiteral("actionNURBSSarface"));
        actionNURBSRank = new QAction(QtMainWindow);
        actionNURBSRank->setObjectName(QStringLiteral("actionNURBSRank"));
        actionQuit = new QAction(QtMainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionShowConsole = new QAction(QtMainWindow);
        actionShowConsole->setObjectName(QStringLiteral("actionShowConsole"));
        actionDeleteBody = new QAction(QtMainWindow);
        actionDeleteBody->setObjectName(QStringLiteral("actionDeleteBody"));
        actionShowBodyList = new QAction(QtMainWindow);
        actionShowBodyList->setObjectName(QStringLiteral("actionShowBodyList"));
        actionUserStatus = new QAction(QtMainWindow);
        actionUserStatus->setObjectName(QStringLiteral("actionUserStatus"));
        actionUserFunc6 = new QAction(QtMainWindow);
        actionUserFunc6->setObjectName(QStringLiteral("actionUserFunc6"));
        actionUserFunc7 = new QAction(QtMainWindow);
        actionUserFunc7->setObjectName(QStringLiteral("actionUserFunc7"));
        actionUserFunc7->setEnabled(true);
        actionUserFunc7->setVisible(true);
        actionUserFunc8 = new QAction(QtMainWindow);
        actionUserFunc8->setObjectName(QStringLiteral("actionUserFunc8"));
        centralWidget = new QWidget(QtMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(2, 2, 2, 2);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        describeWidget = new QtDescribeView(frame);
        describeWidget->setObjectName(QStringLiteral("describeWidget"));

        gridLayout_4->addWidget(describeWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        QtMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 830, 24));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(true);
        menuFile_F = new QMenu(menuBar);
        menuFile_F->setObjectName(QStringLiteral("menuFile_F"));
        menuUser_U = new QMenu(menuBar);
        menuUser_U->setObjectName(QStringLiteral("menuUser_U"));
        menuHelp_H = new QMenu(menuBar);
        menuHelp_H->setObjectName(QStringLiteral("menuHelp_H"));
        menuView_V = new QMenu(menuBar);
        menuView_V->setObjectName(QStringLiteral("menuView_V"));
        menuEdit_E = new QMenu(menuBar);
        menuEdit_E->setObjectName(QStringLiteral("menuEdit_E"));
        menuSurface = new QMenu(menuBar);
        menuSurface->setObjectName(QStringLiteral("menuSurface"));
        QtMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(true);
        QtMainWindow->setStatusBar(statusBar);
        bodyListDock = new QDockWidget(QtMainWindow);
        bodyListDock->setObjectName(QStringLiteral("bodyListDock"));
        bodyListDock->setFeatures(QDockWidget::AllDockWidgetFeatures);
        bodyListDock->setAllowedAreas(Qt::AllDockWidgetAreas);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        bodyList = new QListWidget(dockWidgetContents);
        bodyList->setObjectName(QStringLiteral("bodyList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bodyList->sizePolicy().hasHeightForWidth());
        bodyList->setSizePolicy(sizePolicy);
        bodyList->setMinimumSize(QSize(0, 0));
        bodyList->setSizeIncrement(QSize(40, 0));
        bodyList->setBaseSize(QSize(40, 0));

        gridLayout->addWidget(bodyList, 2, 0, 1, 1);

        bodyListDock->setWidget(dockWidgetContents);
        QtMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), bodyListDock);
        consoleDock = new QDockWidget(QtMainWindow);
        consoleDock->setObjectName(QStringLiteral("consoleDock"));
        consoleDock->setFloating(false);
        consoleDock->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        gridLayout_2 = new QGridLayout(dockWidgetContents_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        consoleText = new QtConsole(dockWidgetContents_2);
        consoleText->setObjectName(QStringLiteral("consoleText"));
        consoleText->setFrameShape(QFrame::Panel);
        consoleText->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(consoleText, 0, 0, 1, 1);

        consoleDock->setWidget(dockWidgetContents_2);
        QtMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), consoleDock);

        menuBar->addAction(menuFile_F->menuAction());
        menuBar->addAction(menuEdit_E->menuAction());
        menuBar->addAction(menuSurface->menuAction());
        menuBar->addAction(menuView_V->menuAction());
        menuBar->addAction(menuUser_U->menuAction());
        menuBar->addAction(menuHelp_H->menuAction());
        menuFile_F->addAction(actionOpenBody);
        menuFile_F->addAction(actionQuit);
        menuUser_U->addAction(actionUserStatus);
        menuUser_U->addSeparator();
        menuUser_U->addAction(actionUserFunc1);
        menuUser_U->addAction(actionUserFunc2);
        menuUser_U->addAction(actionUserFunc3);
        menuUser_U->addAction(actionUserFunc4);
        menuUser_U->addAction(actionUserFunc5);
        menuUser_U->addAction(actionUserFunc6);
        menuUser_U->addAction(actionUserFunc7);
        menuUser_U->addAction(actionUserFunc8);
        menuHelp_H->addAction(actionAboutKodatuno);
        menuView_V->addAction(actionViewScale);
        menuView_V->addAction(actionTolerance);
        menuView_V->addAction(actionCPView);
        menuView_V->addAction(actionSurfaceInfo);
        menuView_V->addSeparator();
        menuView_V->addAction(actionShowConsole);
        menuView_V->addAction(actionShowBodyList);
        menuEdit_E->addAction(actionScalingBODY);
        menuEdit_E->addAction(actionTranslation);
        menuEdit_E->addAction(actionNURBSRank);
        menuEdit_E->addAction(actionDeleteBody);
        menuSurface->addAction(actionRotationSurface);
        menuSurface->addAction(actionSweepSurface);
        menuSurface->addAction(actionNURBSCurve);
        menuSurface->addAction(actionNURBSSarface);
        mainToolBar->addAction(actionViewOnX);
        mainToolBar->addAction(actionViewOnY);
        mainToolBar->addAction(actionViewOnZ);
        mainToolBar->addAction(actionViewOnXYZ);
        mainToolBar->addAction(actionViewFit);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionViewSolid);
        mainToolBar->addAction(actionViewNoEdge);
        mainToolBar->addAction(actionViewWireFlame);
        mainToolBar->addAction(actionViewVoid);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSelectAll);
        mainToolBar->addAction(actionSelect_Cancel);
        mainToolBar->addAction(actionViewErase);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionViewBlend);

        retranslateUi(QtMainWindow);

        QMetaObject::connectSlotsByName(QtMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QtMainWindow)
    {
        QtMainWindow->setWindowTitle(QApplication::translate("QtMainWindow", "Kodatuno Qt", Q_NULLPTR));
        actionViewOnX->setText(QApplication::translate("QtMainWindow", "View On X", Q_NULLPTR));
        actionViewOnY->setText(QApplication::translate("QtMainWindow", "View On Y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionViewOnY->setToolTip(QApplication::translate("QtMainWindow", "View On Y", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionViewOnZ->setText(QApplication::translate("QtMainWindow", "View On Z", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionViewOnZ->setToolTip(QApplication::translate("QtMainWindow", "View On Z", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionViewOnXYZ->setText(QApplication::translate("QtMainWindow", "View On XYZ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionViewOnXYZ->setToolTip(QApplication::translate("QtMainWindow", "View On XYZ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionViewFit->setText(QApplication::translate("QtMainWindow", "View Fit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionViewFit->setToolTip(QApplication::translate("QtMainWindow", "View Fit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionViewFit->setShortcut(QApplication::translate("QtMainWindow", "Ctrl+F", Q_NULLPTR));
        actionViewSolid->setText(QApplication::translate("QtMainWindow", "View Solid", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionViewSolid->setToolTip(QApplication::translate("QtMainWindow", "View Solid", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionViewNoEdge->setText(QApplication::translate("QtMainWindow", "View No Edge", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionViewNoEdge->setToolTip(QApplication::translate("QtMainWindow", "View No Edge", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionViewWireFlame->setText(QApplication::translate("QtMainWindow", "View Wire Flame", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionViewWireFlame->setToolTip(QApplication::translate("QtMainWindow", "View Wire Flame", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionViewVoid->setText(QApplication::translate("QtMainWindow", "View Void", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionViewVoid->setToolTip(QApplication::translate("QtMainWindow", "View Void", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSelectAll->setText(QApplication::translate("QtMainWindow", "Select All", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSelectAll->setToolTip(QApplication::translate("QtMainWindow", "Select All", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSelectAll->setShortcut(QApplication::translate("QtMainWindow", "Ctrl+A", Q_NULLPTR));
        actionSelect_Cancel->setText(QApplication::translate("QtMainWindow", "Select Cancel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSelect_Cancel->setToolTip(QApplication::translate("QtMainWindow", "Select Cancel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionViewErase->setText(QApplication::translate("QtMainWindow", "View Erase", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionViewErase->setToolTip(QApplication::translate("QtMainWindow", "View Erase", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionViewBlend->setText(QApplication::translate("QtMainWindow", "View Blend", Q_NULLPTR));
        actionOpenBody->setText(QApplication::translate("QtMainWindow", "Open File (&O)", Q_NULLPTR));
        actionUserFunc1->setText(QApplication::translate("QtMainWindow", "User Func 1", Q_NULLPTR));
        actionUserFunc2->setText(QApplication::translate("QtMainWindow", "User Func 2", Q_NULLPTR));
        actionUserFunc3->setText(QApplication::translate("QtMainWindow", "User Func 3", Q_NULLPTR));
        actionUserFunc4->setText(QApplication::translate("QtMainWindow", "User Func 4", Q_NULLPTR));
        actionUserFunc5->setText(QApplication::translate("QtMainWindow", "User Func 5", Q_NULLPTR));
        actionAboutKodatuno->setText(QApplication::translate("QtMainWindow", "About Kodatuno(&K)", Q_NULLPTR));
        actionViewScale->setText(QApplication::translate("QtMainWindow", "View Scale (&S)", Q_NULLPTR));
        actionTolerance->setText(QApplication::translate("QtMainWindow", "Tolerance (&T)", Q_NULLPTR));
        actionCPView->setText(QApplication::translate("QtMainWindow", "Control Point View (&C)", Q_NULLPTR));
        actionSurfaceInfo->setText(QApplication::translate("QtMainWindow", "Surface Info (&S)", Q_NULLPTR));
        actionScalingBODY->setText(QApplication::translate("QtMainWindow", "Scaling (&S)", Q_NULLPTR));
        actionTranslation->setText(QApplication::translate("QtMainWindow", "Translation (&T)", Q_NULLPTR));
        actionRotationSurface->setText(QApplication::translate("QtMainWindow", "Rotation (&R)", Q_NULLPTR));
        actionSweepSurface->setText(QApplication::translate("QtMainWindow", "Sweep (&S)", Q_NULLPTR));
        actionNURBSCurve->setText(QApplication::translate("QtMainWindow", "NURBS Curve", Q_NULLPTR));
        actionNURBSSarface->setText(QApplication::translate("QtMainWindow", "NURBS Sarface", Q_NULLPTR));
        actionNURBSRank->setText(QApplication::translate("QtMainWindow", "NURBS Rank(&R)", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("QtMainWindow", "Quit (&Q)", Q_NULLPTR));
        actionShowConsole->setText(QApplication::translate("QtMainWindow", "Show Console", Q_NULLPTR));
        actionDeleteBody->setText(QApplication::translate("QtMainWindow", "Delete Body (&D)", Q_NULLPTR));
        actionShowBodyList->setText(QApplication::translate("QtMainWindow", "Show BODY List", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowBodyList->setToolTip(QApplication::translate("QtMainWindow", "Show BODY List", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUserStatus->setText(QApplication::translate("QtMainWindow", "User Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionUserStatus->setToolTip(QApplication::translate("QtMainWindow", "User Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUserFunc6->setText(QApplication::translate("QtMainWindow", "User Func 6", Q_NULLPTR));
        actionUserFunc7->setText(QApplication::translate("QtMainWindow", "User Func 7", Q_NULLPTR));
        actionUserFunc8->setText(QApplication::translate("QtMainWindow", "User Func 8", Q_NULLPTR));
        menuFile_F->setTitle(QApplication::translate("QtMainWindow", "File (&F)", Q_NULLPTR));
        menuUser_U->setTitle(QApplication::translate("QtMainWindow", "User (&U)", Q_NULLPTR));
        menuHelp_H->setTitle(QApplication::translate("QtMainWindow", "Help (&H)", Q_NULLPTR));
        menuView_V->setTitle(QApplication::translate("QtMainWindow", "View (&V)", Q_NULLPTR));
        menuEdit_E->setTitle(QApplication::translate("QtMainWindow", "Edit (&E)", Q_NULLPTR));
        menuSurface->setTitle(QApplication::translate("QtMainWindow", "Create (&C)", Q_NULLPTR));
        bodyListDock->setWindowTitle(QApplication::translate("QtMainWindow", "BODY List", Q_NULLPTR));
        consoleDock->setWindowTitle(QApplication::translate("QtMainWindow", "Console", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtMainWindow: public Ui_QtMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTMAINWINDOW_H
