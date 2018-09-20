/********************************************************************************
** Form generated from reading UI file 'QtRotSurfDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTROTSURFDIALOG_H
#define UI_QTROTSURFDIALOG_H

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

class Ui_QtRotSurfDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *xSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *ySpinBox;
    QLabel *label_5;
    QDoubleSpinBox *zSpinBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *angleSpinBox;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QtRotSurfDialog)
    {
        if (QtRotSurfDialog->objectName().isEmpty())
            QtRotSurfDialog->setObjectName(QStringLiteral("QtRotSurfDialog"));
        QtRotSurfDialog->resize(320, 180);
        QtRotSurfDialog->setMinimumSize(QSize(320, 180));
        QtRotSurfDialog->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icons/main.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QtRotSurfDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(QtRotSurfDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(QtRotSurfDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setTextFormat(Qt::AutoText);
        label->setWordWrap(false);

        horizontalLayout->addWidget(label);

        xSpinBox = new QDoubleSpinBox(groupBox);
        xSpinBox->setObjectName(QStringLiteral("xSpinBox"));
        xSpinBox->setMinimumSize(QSize(0, 22));
        xSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        xSpinBox->setDecimals(1);

        horizontalLayout->addWidget(xSpinBox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_2);

        ySpinBox = new QDoubleSpinBox(groupBox);
        ySpinBox->setObjectName(QStringLiteral("ySpinBox"));
        ySpinBox->setMinimumSize(QSize(0, 22));
        ySpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ySpinBox->setDecimals(1);

        horizontalLayout->addWidget(ySpinBox);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_5);

        zSpinBox = new QDoubleSpinBox(groupBox);
        zSpinBox->setObjectName(QStringLiteral("zSpinBox"));
        zSpinBox->setMinimumSize(QSize(0, 22));
        zSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        zSpinBox->setDecimals(1);
        zSpinBox->setValue(1);

        horizontalLayout->addWidget(zSpinBox);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(QtRotSurfDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        angleSpinBox = new QDoubleSpinBox(groupBox_2);
        angleSpinBox->setObjectName(QStringLiteral("angleSpinBox"));
        angleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        angleSpinBox->setDecimals(1);
        angleSpinBox->setMinimum(-360);
        angleSpinBox->setMaximum(360);
        angleSpinBox->setSingleStep(90);
        angleSpinBox->setValue(360);

        gridLayout_2->addWidget(angleSpinBox, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(197, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QtRotSurfDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(QtRotSurfDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QtRotSurfDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QtRotSurfDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QtRotSurfDialog);
    } // setupUi

    void retranslateUi(QDialog *QtRotSurfDialog)
    {
        QtRotSurfDialog->setWindowTitle(QApplication::translate("QtRotSurfDialog", "Rotation Surface", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QtRotSurfDialog", "Rotation Axis", Q_NULLPTR));
        label->setText(QApplication::translate("QtRotSurfDialog", "X", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtRotSurfDialog", "Y", Q_NULLPTR));
        label_5->setText(QApplication::translate("QtRotSurfDialog", "Z", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QtRotSurfDialog", "Rotation Angle", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtRotSurfDialog: public Ui_QtRotSurfDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTROTSURFDIALOG_H
