/********************************************************************************
** Form generated from reading UI file 'updateitemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEITEMDIALOG_H
#define UI_UPDATEITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_UpdateItemDialog
{
public:
    QLabel *lblItemName;
    QLabel *label;
    QSpinBox *sbQuantity;
    QLabel *label_2;
    QLabel *lblImage;
    QPushButton *btnLoadItemImage;
    QPushButton *btnConfirmEdit;

    void setupUi(QDialog *UpdateItemDialog)
    {
        if (UpdateItemDialog->objectName().isEmpty())
            UpdateItemDialog->setObjectName(QString::fromUtf8("UpdateItemDialog"));
        UpdateItemDialog->resize(400, 457);
        lblItemName = new QLabel(UpdateItemDialog);
        lblItemName->setObjectName(QString::fromUtf8("lblItemName"));
        lblItemName->setGeometry(QRect(140, 10, 121, 31));
        QFont font;
        font.setPointSize(12);
        lblItemName->setFont(font);
        label = new QLabel(UpdateItemDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 131, 21));
        label->setFont(font);
        sbQuantity = new QSpinBox(UpdateItemDialog);
        sbQuantity->setObjectName(QString::fromUtf8("sbQuantity"));
        sbQuantity->setGeometry(QRect(160, 50, 231, 31));
        sbQuantity->setFont(font);
        sbQuantity->setMinimum(1);
        sbQuantity->setMaximum(1000);
        label_2 = new QLabel(UpdateItemDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 131, 21));
        label_2->setFont(font);
        lblImage = new QLabel(UpdateItemDialog);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(140, 90, 250, 250));
        lblImage->setFrameShape(QFrame::Panel);
        btnLoadItemImage = new QPushButton(UpdateItemDialog);
        btnLoadItemImage->setObjectName(QString::fromUtf8("btnLoadItemImage"));
        btnLoadItemImage->setGeometry(QRect(10, 130, 121, 31));
        btnLoadItemImage->setFont(font);
        btnConfirmEdit = new QPushButton(UpdateItemDialog);
        btnConfirmEdit->setObjectName(QString::fromUtf8("btnConfirmEdit"));
        btnConfirmEdit->setGeometry(QRect(184, 380, 141, 23));
        btnConfirmEdit->setFont(font);

        retranslateUi(UpdateItemDialog);

        QMetaObject::connectSlotsByName(UpdateItemDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateItemDialog)
    {
        UpdateItemDialog->setWindowTitle(QApplication::translate("UpdateItemDialog", "Update Item", nullptr));
        lblItemName->setText(QApplication::translate("UpdateItemDialog", "Name of Item", nullptr));
        label->setText(QApplication::translate("UpdateItemDialog", "Quantity:", nullptr));
        label_2->setText(QApplication::translate("UpdateItemDialog", "Item Image:", nullptr));
        lblImage->setText(QString());
        btnLoadItemImage->setText(QApplication::translate("UpdateItemDialog", "Load Image", nullptr));
        btnConfirmEdit->setText(QApplication::translate("UpdateItemDialog", "Confirm Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateItemDialog: public Ui_UpdateItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEITEMDIALOG_H
