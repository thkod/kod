/********************************************************************************
** Form generated from reading UI file 'QtNurbsCurveDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTNURBSCURVEDIALOG_H
#define UI_QTNURBSCURVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QtNurbsCurveDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *optionBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *plygRadBtn;
    QRadioButton *intRadBtn;
    QRadioButton *appRadBtn;
    QRadioButton *nullRadBtn;
    QRadioButton *cpRadBtn;
    QHBoxLayout *horizontalLayout;
    QPushButton *fileBtn;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpinBox *rankSpin;
    QLabel *inpFileLabel;
    QDialogButtonBox *buttonBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *QtNurbsCurveDialog)
    {
        if (QtNurbsCurveDialog->objectName().isEmpty())
            QtNurbsCurveDialog->setObjectName(QStringLiteral("QtNurbsCurveDialog"));
        QtNurbsCurveDialog->resize(221, 260);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QtNurbsCurveDialog->sizePolicy().hasHeightForWidth());
        QtNurbsCurveDialog->setSizePolicy(sizePolicy);
        QtNurbsCurveDialog->setMinimumSize(QSize(200, 260));
        verticalLayout_2 = new QVBoxLayout(QtNurbsCurveDialog);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        optionBox = new QGroupBox(QtNurbsCurveDialog);
        optionBox->setObjectName(QStringLiteral("optionBox"));
        verticalLayout = new QVBoxLayout(optionBox);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 9);
        plygRadBtn = new QRadioButton(optionBox);
        buttonGroup = new QButtonGroup(QtNurbsCurveDialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(plygRadBtn);
        plygRadBtn->setObjectName(QStringLiteral("plygRadBtn"));
        plygRadBtn->setChecked(true);

        verticalLayout->addWidget(plygRadBtn);

        intRadBtn = new QRadioButton(optionBox);
        buttonGroup->addButton(intRadBtn);
        intRadBtn->setObjectName(QStringLiteral("intRadBtn"));

        verticalLayout->addWidget(intRadBtn);

        appRadBtn = new QRadioButton(optionBox);
        buttonGroup->addButton(appRadBtn);
        appRadBtn->setObjectName(QStringLiteral("appRadBtn"));

        verticalLayout->addWidget(appRadBtn);

        nullRadBtn = new QRadioButton(optionBox);
        buttonGroup->addButton(nullRadBtn);
        nullRadBtn->setObjectName(QStringLiteral("nullRadBtn"));

        verticalLayout->addWidget(nullRadBtn);

        cpRadBtn = new QRadioButton(optionBox);
        buttonGroup->addButton(cpRadBtn);
        cpRadBtn->setObjectName(QStringLiteral("cpRadBtn"));

        verticalLayout->addWidget(cpRadBtn);


        verticalLayout_2->addWidget(optionBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fileBtn = new QPushButton(QtNurbsCurveDialog);
        fileBtn->setObjectName(QStringLiteral("fileBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fileBtn->sizePolicy().hasHeightForWidth());
        fileBtn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(fileBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(QtNurbsCurveDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label);

        rankSpin = new QSpinBox(QtNurbsCurveDialog);
        rankSpin->setObjectName(QStringLiteral("rankSpin"));
        rankSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rankSpin->setMinimum(2);
        rankSpin->setMaximum(10);
        rankSpin->setValue(4);

        horizontalLayout->addWidget(rankSpin);


        verticalLayout_2->addLayout(horizontalLayout);

        inpFileLabel = new QLabel(QtNurbsCurveDialog);
        inpFileLabel->setObjectName(QStringLiteral("inpFileLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(inpFileLabel->sizePolicy().hasHeightForWidth());
        inpFileLabel->setSizePolicy(sizePolicy3);
        inpFileLabel->setMinimumSize(QSize(0, 27));
        inpFileLabel->setFrameShape(QFrame::StyledPanel);
        inpFileLabel->setFrameShadow(QFrame::Sunken);
        inpFileLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(inpFileLabel);

        buttonBox = new QDialogButtonBox(QtNurbsCurveDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(QtNurbsCurveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QtNurbsCurveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QtNurbsCurveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QtNurbsCurveDialog);
    } // setupUi

    void retranslateUi(QDialog *QtNurbsCurveDialog)
    {
        QtNurbsCurveDialog->setWindowTitle(QApplication::translate("QtNurbsCurveDialog", "Dialog", Q_NULLPTR));
        optionBox->setTitle(QApplication::translate("QtNurbsCurveDialog", "Option", Q_NULLPTR));
        plygRadBtn->setText(QApplication::translate("QtNurbsCurveDialog", "Polygonal", Q_NULLPTR));
        intRadBtn->setText(QApplication::translate("QtNurbsCurveDialog", "Interpolated", Q_NULLPTR));
        appRadBtn->setText(QApplication::translate("QtNurbsCurveDialog", "Approximated", Q_NULLPTR));
        nullRadBtn->setText(QApplication::translate("QtNurbsCurveDialog", "Interpolated(closed)", Q_NULLPTR));
        cpRadBtn->setText(QApplication::translate("QtNurbsCurveDialog", "Control Point", Q_NULLPTR));
        fileBtn->setText(QApplication::translate("QtNurbsCurveDialog", "File", Q_NULLPTR));
        label->setText(QApplication::translate("QtNurbsCurveDialog", "Rank", Q_NULLPTR));
        inpFileLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtNurbsCurveDialog: public Ui_QtNurbsCurveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTNURBSCURVEDIALOG_H
