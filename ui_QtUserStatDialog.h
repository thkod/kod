/********************************************************************************
** Form generated from reading UI file 'QtUserStatDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTUSERSTATDIALOG_H
#define UI_QTUSERSTATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_QtUserStatDialog
{
public:
    QGridLayout *gridLayout_3;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *doubleSpinBox_6;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_11;
    QLabel *label_2;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_1;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_8;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_7;
    QLabel *label_13;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_12;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_12;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_13;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_9;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBox_14;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_10;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBox_15;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *modeBox;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *mode4RadBtn;
    QRadioButton *mode14RadBtn;
    QRadioButton *mode9RadBtn;
    QRadioButton *mode13RadBtn;
    QRadioButton *mode1RadBtn;
    QRadioButton *mode6RadBtn;
    QRadioButton *mode5RadBtn;
    QRadioButton *mode10RadBtn;
    QRadioButton *mode7RadBtn;
    QRadioButton *mode3RadBtn;
    QRadioButton *mode11RadBtn;
    QRadioButton *mode12RadBtn;
    QRadioButton *mode2RadBtn;
    QRadioButton *mode8RadBtn;
    QRadioButton *mode15RadBtn;
    QSpacerItem *horizontalSpacer_3;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *QtUserStatDialog)
    {
        if (QtUserStatDialog->objectName().isEmpty())
            QtUserStatDialog->setObjectName(QStringLiteral("QtUserStatDialog"));
        QtUserStatDialog->resize(432, 389);
        gridLayout_3 = new QGridLayout(QtUserStatDialog);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(9);
        buttonBox = new QDialogButtonBox(QtUserStatDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 2, 0, 1, 1);

        groupBox = new QGroupBox(QtUserStatDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(9);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        doubleSpinBox_6 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));
        doubleSpinBox_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_6->setDecimals(1);
        doubleSpinBox_6->setMinimum(-10000);
        doubleSpinBox_6->setMaximum(10000);
        doubleSpinBox_6->setSingleStep(10);
        doubleSpinBox_6->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_6, 0, 4, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        doubleSpinBox_11 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_11->setObjectName(QStringLiteral("doubleSpinBox_11"));
        doubleSpinBox_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_11->setDecimals(1);
        doubleSpinBox_11->setMinimum(-10000);
        doubleSpinBox_11->setMaximum(10000);
        doubleSpinBox_11->setSingleStep(10);
        doubleSpinBox_11->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_11, 0, 7, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 0, 6, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMinimum(-10000);
        doubleSpinBox_2->setMaximum(10000);
        doubleSpinBox_2->setSingleStep(10);
        doubleSpinBox_2->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_2, 1, 1, 1, 1);

        doubleSpinBox_1 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_1->setObjectName(QStringLiteral("doubleSpinBox_1"));
        doubleSpinBox_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_1->setDecimals(1);
        doubleSpinBox_1->setMinimum(-10000);
        doubleSpinBox_1->setMaximum(10000);
        doubleSpinBox_1->setSingleStep(10);
        doubleSpinBox_1->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_1, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 3, 1, 1);

        doubleSpinBox_8 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_8->setObjectName(QStringLiteral("doubleSpinBox_8"));
        doubleSpinBox_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_8->setDecimals(1);
        doubleSpinBox_8->setMinimum(-10000);
        doubleSpinBox_8->setMaximum(10000);
        doubleSpinBox_8->setSingleStep(10);
        doubleSpinBox_8->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_8, 2, 4, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 1, 3, 1, 1);

        doubleSpinBox_7 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_7->setObjectName(QStringLiteral("doubleSpinBox_7"));
        doubleSpinBox_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_7->setDecimals(1);
        doubleSpinBox_7->setMinimum(-10000);
        doubleSpinBox_7->setMaximum(10000);
        doubleSpinBox_7->setSingleStep(10);
        doubleSpinBox_7->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_7, 1, 4, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 2, 6, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        doubleSpinBox_12 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_12->setObjectName(QStringLiteral("doubleSpinBox_12"));
        doubleSpinBox_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_12->setDecimals(1);
        doubleSpinBox_12->setMinimum(-10000);
        doubleSpinBox_12->setMaximum(10000);
        doubleSpinBox_12->setSingleStep(10);
        doubleSpinBox_12->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_12, 1, 7, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_3->setDecimals(1);
        doubleSpinBox_3->setMinimum(-10000);
        doubleSpinBox_3->setMaximum(10000);
        doubleSpinBox_3->setSingleStep(10);
        doubleSpinBox_3->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_3, 2, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 1, 6, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 3, 1, 1);

        doubleSpinBox_13 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_13->setObjectName(QStringLiteral("doubleSpinBox_13"));
        doubleSpinBox_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_13->setDecimals(1);
        doubleSpinBox_13->setMinimum(-10000);
        doubleSpinBox_13->setMaximum(10000);
        doubleSpinBox_13->setSingleStep(10);
        doubleSpinBox_13->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_13, 2, 7, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        doubleSpinBox_4 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_4->setDecimals(1);
        doubleSpinBox_4->setMinimum(-10000);
        doubleSpinBox_4->setMaximum(10000);
        doubleSpinBox_4->setSingleStep(10);
        doubleSpinBox_4->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_4, 3, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 3, 3, 1, 1);

        doubleSpinBox_9 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_9->setObjectName(QStringLiteral("doubleSpinBox_9"));
        doubleSpinBox_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_9->setDecimals(1);
        doubleSpinBox_9->setMinimum(-10000);
        doubleSpinBox_9->setMaximum(10000);
        doubleSpinBox_9->setSingleStep(10);
        doubleSpinBox_9->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_9, 3, 4, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 3, 6, 1, 1);

        doubleSpinBox_14 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_14->setObjectName(QStringLiteral("doubleSpinBox_14"));
        doubleSpinBox_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_14->setDecimals(1);
        doubleSpinBox_14->setMinimum(-10000);
        doubleSpinBox_14->setMaximum(10000);
        doubleSpinBox_14->setSingleStep(10);
        doubleSpinBox_14->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_14, 3, 7, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        doubleSpinBox_5 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));
        doubleSpinBox_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_5->setDecimals(1);
        doubleSpinBox_5->setMinimum(-10000);
        doubleSpinBox_5->setMaximum(10000);
        doubleSpinBox_5->setSingleStep(10);
        doubleSpinBox_5->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_5, 4, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 4, 3, 1, 1);

        doubleSpinBox_10 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_10->setObjectName(QStringLiteral("doubleSpinBox_10"));
        doubleSpinBox_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_10->setDecimals(1);
        doubleSpinBox_10->setMinimum(-10000);
        doubleSpinBox_10->setMaximum(10000);
        doubleSpinBox_10->setSingleStep(10);
        doubleSpinBox_10->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_10, 4, 4, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 4, 6, 1, 1);

        doubleSpinBox_15 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_15->setObjectName(QStringLiteral("doubleSpinBox_15"));
        doubleSpinBox_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_15->setDecimals(1);
        doubleSpinBox_15->setMinimum(-10000);
        doubleSpinBox_15->setMaximum(10000);
        doubleSpinBox_15->setSingleStep(10);
        doubleSpinBox_15->setValue(0);

        gridLayout_2->addWidget(doubleSpinBox_15, 4, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 5, 1, 1);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);

        modeBox = new QGroupBox(QtUserStatDialog);
        modeBox->setObjectName(QStringLiteral("modeBox"));
        gridLayout = new QGridLayout(modeBox);
        gridLayout->setSpacing(9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 6, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 8, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        mode4RadBtn = new QRadioButton(modeBox);
        buttonGroup = new QButtonGroup(QtUserStatDialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(mode4RadBtn);
        mode4RadBtn->setObjectName(QStringLiteral("mode4RadBtn"));

        gridLayout->addWidget(mode4RadBtn, 4, 2, 1, 1);

        mode14RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode14RadBtn);
        mode14RadBtn->setObjectName(QStringLiteral("mode14RadBtn"));

        gridLayout->addWidget(mode14RadBtn, 4, 7, 1, 1);

        mode9RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode9RadBtn);
        mode9RadBtn->setObjectName(QStringLiteral("mode9RadBtn"));

        gridLayout->addWidget(mode9RadBtn, 4, 4, 1, 1);

        mode13RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode13RadBtn);
        mode13RadBtn->setObjectName(QStringLiteral("mode13RadBtn"));

        gridLayout->addWidget(mode13RadBtn, 3, 7, 1, 1);

        mode1RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode1RadBtn);
        mode1RadBtn->setObjectName(QStringLiteral("mode1RadBtn"));

        gridLayout->addWidget(mode1RadBtn, 0, 2, 1, 1);

        mode6RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode6RadBtn);
        mode6RadBtn->setObjectName(QStringLiteral("mode6RadBtn"));

        gridLayout->addWidget(mode6RadBtn, 0, 4, 1, 1);

        mode5RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode5RadBtn);
        mode5RadBtn->setObjectName(QStringLiteral("mode5RadBtn"));

        gridLayout->addWidget(mode5RadBtn, 5, 2, 1, 1);

        mode10RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode10RadBtn);
        mode10RadBtn->setObjectName(QStringLiteral("mode10RadBtn"));

        gridLayout->addWidget(mode10RadBtn, 5, 4, 1, 1);

        mode7RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode7RadBtn);
        mode7RadBtn->setObjectName(QStringLiteral("mode7RadBtn"));

        gridLayout->addWidget(mode7RadBtn, 2, 4, 1, 1);

        mode3RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode3RadBtn);
        mode3RadBtn->setObjectName(QStringLiteral("mode3RadBtn"));

        gridLayout->addWidget(mode3RadBtn, 3, 2, 1, 1);

        mode11RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode11RadBtn);
        mode11RadBtn->setObjectName(QStringLiteral("mode11RadBtn"));

        gridLayout->addWidget(mode11RadBtn, 0, 7, 1, 1);

        mode12RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode12RadBtn);
        mode12RadBtn->setObjectName(QStringLiteral("mode12RadBtn"));

        gridLayout->addWidget(mode12RadBtn, 2, 7, 1, 1);

        mode2RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode2RadBtn);
        mode2RadBtn->setObjectName(QStringLiteral("mode2RadBtn"));

        gridLayout->addWidget(mode2RadBtn, 2, 2, 1, 1);

        mode8RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode8RadBtn);
        mode8RadBtn->setObjectName(QStringLiteral("mode8RadBtn"));

        gridLayout->addWidget(mode8RadBtn, 3, 4, 1, 1);

        mode15RadBtn = new QRadioButton(modeBox);
        buttonGroup->addButton(mode15RadBtn);
        mode15RadBtn->setObjectName(QStringLiteral("mode15RadBtn"));

        gridLayout->addWidget(mode15RadBtn, 5, 7, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        gridLayout_3->addWidget(modeBox, 0, 0, 1, 1);


        retranslateUi(QtUserStatDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QtUserStatDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QtUserStatDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QtUserStatDialog);
    } // setupUi

    void retranslateUi(QDialog *QtUserStatDialog)
    {
        QtUserStatDialog->setWindowTitle(QApplication::translate("QtUserStatDialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QtUserStatDialog", "GroupBox", Q_NULLPTR));
        label->setText(QApplication::translate("QtUserStatDialog", "Prop1", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtUserStatDialog", "Prop2", Q_NULLPTR));
        label_11->setText(QApplication::translate("QtUserStatDialog", "Prop11", Q_NULLPTR));
        label_6->setText(QApplication::translate("QtUserStatDialog", "Prop6", Q_NULLPTR));
        label_7->setText(QApplication::translate("QtUserStatDialog", "Prop7", Q_NULLPTR));
        label_13->setText(QApplication::translate("QtUserStatDialog", "Prop13", Q_NULLPTR));
        label_3->setText(QApplication::translate("QtUserStatDialog", "Prop3", Q_NULLPTR));
        label_12->setText(QApplication::translate("QtUserStatDialog", "Prop12", Q_NULLPTR));
        label_8->setText(QApplication::translate("QtUserStatDialog", "Prop8", Q_NULLPTR));
        label_4->setText(QApplication::translate("QtUserStatDialog", "Prop4", Q_NULLPTR));
        label_9->setText(QApplication::translate("QtUserStatDialog", "Prop9", Q_NULLPTR));
        label_14->setText(QApplication::translate("QtUserStatDialog", "Prop14", Q_NULLPTR));
        label_5->setText(QApplication::translate("QtUserStatDialog", "Prop5", Q_NULLPTR));
        label_10->setText(QApplication::translate("QtUserStatDialog", "Prop10", Q_NULLPTR));
        label_15->setText(QApplication::translate("QtUserStatDialog", "Prop15", Q_NULLPTR));
        modeBox->setTitle(QApplication::translate("QtUserStatDialog", "Mode", Q_NULLPTR));
        mode4RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode4", Q_NULLPTR));
        mode14RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode14", Q_NULLPTR));
        mode9RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode9", Q_NULLPTR));
        mode13RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode13", Q_NULLPTR));
        mode1RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode1", Q_NULLPTR));
        mode6RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode6", Q_NULLPTR));
        mode5RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode5", Q_NULLPTR));
        mode10RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode10", Q_NULLPTR));
        mode7RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode7", Q_NULLPTR));
        mode3RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode3", Q_NULLPTR));
        mode11RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode11", Q_NULLPTR));
        mode12RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode12", Q_NULLPTR));
        mode2RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode2", Q_NULLPTR));
        mode8RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode8", Q_NULLPTR));
        mode15RadBtn->setText(QApplication::translate("QtUserStatDialog", "Mode15", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtUserStatDialog: public Ui_QtUserStatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTUSERSTATDIALOG_H
