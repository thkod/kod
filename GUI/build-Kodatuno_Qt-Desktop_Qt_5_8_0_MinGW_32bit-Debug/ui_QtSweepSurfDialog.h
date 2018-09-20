/********************************************************************************
** Form generated from reading UI file 'QtSweepSurfDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSWEEPSURFDIALOG_H
#define UI_QTSWEEPSURFDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_QtSweepSurfDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *axisBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *SpinBoxX;
    QLabel *label_2;
    QDoubleSpinBox *SpinBoxY;
    QLabel *label_3;
    QDoubleSpinBox *SpinBoxZ;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QGroupBox *lengthBox;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *SpinBoxL;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *QtSweepSurfDialog)
    {
        if (QtSweepSurfDialog->objectName().isEmpty())
            QtSweepSurfDialog->setObjectName(QStringLiteral("QtSweepSurfDialog"));
        QtSweepSurfDialog->resize(320, 180);
        QtSweepSurfDialog->setMinimumSize(QSize(320, 180));
        gridLayout = new QGridLayout(QtSweepSurfDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        axisBox = new QGroupBox(QtSweepSurfDialog);
        axisBox->setObjectName(QStringLiteral("axisBox"));
        horizontalLayout_2 = new QHBoxLayout(axisBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(axisBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        SpinBoxX = new QDoubleSpinBox(axisBox);
        SpinBoxX->setObjectName(QStringLiteral("SpinBoxX"));
        SpinBoxX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SpinBoxX->setDecimals(1);

        horizontalLayout_2->addWidget(SpinBoxX);

        label_2 = new QLabel(axisBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        SpinBoxY = new QDoubleSpinBox(axisBox);
        SpinBoxY->setObjectName(QStringLiteral("SpinBoxY"));
        SpinBoxY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SpinBoxY->setDecimals(1);

        horizontalLayout_2->addWidget(SpinBoxY);

        label_3 = new QLabel(axisBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_3);

        SpinBoxZ = new QDoubleSpinBox(axisBox);
        SpinBoxZ->setObjectName(QStringLiteral("SpinBoxZ"));
        SpinBoxZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SpinBoxZ->setDecimals(1);
        SpinBoxZ->setValue(1);

        horizontalLayout_2->addWidget(SpinBoxZ);


        gridLayout->addWidget(axisBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QtSweepSurfDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lengthBox = new QGroupBox(QtSweepSurfDialog);
        lengthBox->setObjectName(QStringLiteral("lengthBox"));
        gridLayout_2 = new QGridLayout(lengthBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        SpinBoxL = new QDoubleSpinBox(lengthBox);
        SpinBoxL->setObjectName(QStringLiteral("SpinBoxL"));
        SpinBoxL->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SpinBoxL->setDecimals(1);
        SpinBoxL->setMaximum(10000);
        SpinBoxL->setSingleStep(10);
        SpinBoxL->setValue(10);

        gridLayout_2->addWidget(SpinBoxL, 0, 0, 1, 1);


        horizontalLayout->addWidget(lengthBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(QtSweepSurfDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QtSweepSurfDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QtSweepSurfDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QtSweepSurfDialog);
    } // setupUi

    void retranslateUi(QDialog *QtSweepSurfDialog)
    {
        QtSweepSurfDialog->setWindowTitle(QApplication::translate("QtSweepSurfDialog", "Dialog", Q_NULLPTR));
        axisBox->setTitle(QApplication::translate("QtSweepSurfDialog", "Sweep Direction Axis", Q_NULLPTR));
        label->setText(QApplication::translate("QtSweepSurfDialog", "X", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtSweepSurfDialog", "Y", Q_NULLPTR));
        label_3->setText(QApplication::translate("QtSweepSurfDialog", "Z", Q_NULLPTR));
        lengthBox->setTitle(QApplication::translate("QtSweepSurfDialog", "Sweep Length", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtSweepSurfDialog: public Ui_QtSweepSurfDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSWEEPSURFDIALOG_H
