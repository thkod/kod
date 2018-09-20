/********************************************************************************
** Form generated from reading UI file 'QtNurbsSurfDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTNURBSSURFDIALOG_H
#define UI_QTNURBSSURFDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
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

class Ui_QtNurbsSurfDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *optionBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *plyRadBtn;
    QRadioButton *intRadBtn;
    QRadioButton *appRadBtn;
    QRadioButton *closedIntRadBtn;
    QRadioButton *cpRadBtn;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *fileBtn;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpinBox *rankSpin;
    QLabel *inpFileLabel;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *QtNurbsSurfDialog)
    {
        if (QtNurbsSurfDialog->objectName().isEmpty())
            QtNurbsSurfDialog->setObjectName(QStringLiteral("QtNurbsSurfDialog"));
        QtNurbsSurfDialog->resize(221, 260);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QtNurbsSurfDialog->sizePolicy().hasHeightForWidth());
        QtNurbsSurfDialog->setSizePolicy(sizePolicy);
        QtNurbsSurfDialog->setMinimumSize(QSize(200, 260));
        gridLayout = new QGridLayout(QtNurbsSurfDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        optionBox = new QGroupBox(QtNurbsSurfDialog);
        optionBox->setObjectName(QStringLiteral("optionBox"));
        verticalLayout = new QVBoxLayout(optionBox);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plyRadBtn = new QRadioButton(optionBox);
        buttonGroup = new QButtonGroup(QtNurbsSurfDialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(plyRadBtn);
        plyRadBtn->setObjectName(QStringLiteral("plyRadBtn"));
        plyRadBtn->setChecked(true);

        verticalLayout->addWidget(plyRadBtn);

        intRadBtn = new QRadioButton(optionBox);
        buttonGroup->addButton(intRadBtn);
        intRadBtn->setObjectName(QStringLiteral("intRadBtn"));

        verticalLayout->addWidget(intRadBtn);

        appRadBtn = new QRadioButton(optionBox);
        buttonGroup->addButton(appRadBtn);
        appRadBtn->setObjectName(QStringLiteral("appRadBtn"));

        verticalLayout->addWidget(appRadBtn);

        closedIntRadBtn = new QRadioButton(optionBox);
        buttonGroup->addButton(closedIntRadBtn);
        closedIntRadBtn->setObjectName(QStringLiteral("closedIntRadBtn"));

        verticalLayout->addWidget(closedIntRadBtn);

        cpRadBtn = new QRadioButton(optionBox);
        buttonGroup->addButton(cpRadBtn);
        cpRadBtn->setObjectName(QStringLiteral("cpRadBtn"));

        verticalLayout->addWidget(cpRadBtn);


        gridLayout->addWidget(optionBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QtNurbsSurfDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fileBtn = new QPushButton(QtNurbsSurfDialog);
        fileBtn->setObjectName(QStringLiteral("fileBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fileBtn->sizePolicy().hasHeightForWidth());
        fileBtn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(fileBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(QtNurbsSurfDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label);

        rankSpin = new QSpinBox(QtNurbsSurfDialog);
        rankSpin->setObjectName(QStringLiteral("rankSpin"));
        rankSpin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rankSpin->setMinimum(2);
        rankSpin->setMaximum(10);
        rankSpin->setValue(4);

        horizontalLayout->addWidget(rankSpin);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        inpFileLabel = new QLabel(QtNurbsSurfDialog);
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
        inpFileLabel->setMargin(0);

        gridLayout->addWidget(inpFileLabel, 2, 0, 1, 1);


        retranslateUi(QtNurbsSurfDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QtNurbsSurfDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QtNurbsSurfDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QtNurbsSurfDialog);
    } // setupUi

    void retranslateUi(QDialog *QtNurbsSurfDialog)
    {
        QtNurbsSurfDialog->setWindowTitle(QApplication::translate("QtNurbsSurfDialog", "Dialog", Q_NULLPTR));
        optionBox->setTitle(QApplication::translate("QtNurbsSurfDialog", "Option", Q_NULLPTR));
        plyRadBtn->setText(QApplication::translate("QtNurbsSurfDialog", "Polygonal", Q_NULLPTR));
        intRadBtn->setText(QApplication::translate("QtNurbsSurfDialog", "Interpolated", Q_NULLPTR));
        appRadBtn->setText(QApplication::translate("QtNurbsSurfDialog", "Approximated", Q_NULLPTR));
        closedIntRadBtn->setText(QApplication::translate("QtNurbsSurfDialog", "Interpolated (closed)", Q_NULLPTR));
        cpRadBtn->setText(QApplication::translate("QtNurbsSurfDialog", "Control Point", Q_NULLPTR));
        fileBtn->setText(QApplication::translate("QtNurbsSurfDialog", "File", Q_NULLPTR));
        label->setText(QApplication::translate("QtNurbsSurfDialog", "Rank", Q_NULLPTR));
        inpFileLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtNurbsSurfDialog: public Ui_QtNurbsSurfDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTNURBSSURFDIALOG_H
