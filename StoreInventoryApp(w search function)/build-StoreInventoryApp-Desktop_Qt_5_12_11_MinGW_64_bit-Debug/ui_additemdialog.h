/********************************************************************************
** Form generated from reading UI file 'additemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMDIALOG_H
#define UI_ADDITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddItemDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtProductName;
    QSpinBox *sbQuantity;
    QLabel *lblImage;
    QPushButton *btnConfirmAdd;
    QPushButton *btnLoadImage;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *txtAddAuthor;
    QLineEdit *txtAddDewey;
    QLineEdit *txtAddID;
    QLineEdit *txtAddStatus;

    void setupUi(QDialog *AddItemDialog)
    {
        if (AddItemDialog->objectName().isEmpty())
            AddItemDialog->setObjectName(QString::fromUtf8("AddItemDialog"));
        AddItemDialog->resize(532, 760);
        label = new QLabel(AddItemDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 81, 20));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(AddItemDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 60, 81, 21));
        label_2->setFont(font);
        label_3 = new QLabel(AddItemDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 300, 111, 21));
        label_3->setFont(font);
        txtProductName = new QLineEdit(AddItemDialog);
        txtProductName->setObjectName(QString::fromUtf8("txtProductName"));
        txtProductName->setGeometry(QRect(160, 20, 241, 31));
        txtProductName->setFont(font);
        sbQuantity = new QSpinBox(AddItemDialog);
        sbQuantity->setObjectName(QString::fromUtf8("sbQuantity"));
        sbQuantity->setGeometry(QRect(160, 60, 241, 31));
        sbQuantity->setFont(font);
        sbQuantity->setMinimum(1);
        sbQuantity->setMaximum(1000);
        lblImage = new QLabel(AddItemDialog);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(150, 300, 250, 391));
        lblImage->setFrameShape(QFrame::Panel);
        btnConfirmAdd = new QPushButton(AddItemDialog);
        btnConfirmAdd->setObjectName(QString::fromUtf8("btnConfirmAdd"));
        btnConfirmAdd->setGeometry(QRect(220, 710, 151, 31));
        btnConfirmAdd->setFont(font);
        btnLoadImage = new QPushButton(AddItemDialog);
        btnLoadImage->setObjectName(QString::fromUtf8("btnLoadImage"));
        btnLoadImage->setGeometry(QRect(20, 330, 121, 31));
        btnLoadImage->setFont(font);
        label_5 = new QLabel(AddItemDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 160, 61, 21));
        label_5->setFont(font);
        label_4 = new QLabel(AddItemDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 170, 51, 21));
        label_4->setFont(font);
        label_7 = new QLabel(AddItemDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 110, 61, 21));
        label_7->setFont(font);
        label_8 = new QLabel(AddItemDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 210, 41, 21));
        label_8->setFont(font);
        label_9 = new QLabel(AddItemDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(70, 250, 61, 21));
        label_9->setFont(font);
        txtAddAuthor = new QLineEdit(AddItemDialog);
        txtAddAuthor->setObjectName(QString::fromUtf8("txtAddAuthor"));
        txtAddAuthor->setGeometry(QRect(160, 110, 241, 31));
        txtAddAuthor->setFont(font);
        txtAddDewey = new QLineEdit(AddItemDialog);
        txtAddDewey->setObjectName(QString::fromUtf8("txtAddDewey"));
        txtAddDewey->setGeometry(QRect(160, 150, 241, 31));
        txtAddDewey->setFont(font);
        txtAddID = new QLineEdit(AddItemDialog);
        txtAddID->setObjectName(QString::fromUtf8("txtAddID"));
        txtAddID->setGeometry(QRect(160, 200, 241, 31));
        txtAddID->setFont(font);
        txtAddStatus = new QLineEdit(AddItemDialog);
        txtAddStatus->setObjectName(QString::fromUtf8("txtAddStatus"));
        txtAddStatus->setGeometry(QRect(160, 250, 241, 31));
        txtAddStatus->setFont(font);

        retranslateUi(AddItemDialog);

        QMetaObject::connectSlotsByName(AddItemDialog);
    } // setupUi

    void retranslateUi(QDialog *AddItemDialog)
    {
        AddItemDialog->setWindowTitle(QApplication::translate("AddItemDialog", "Add Item", nullptr));
        label->setText(QApplication::translate("AddItemDialog", "Title:", nullptr));
        label_2->setText(QApplication::translate("AddItemDialog", "Copies:", nullptr));
        label_3->setText(QApplication::translate("AddItemDialog", "Item Image:", nullptr));
        lblImage->setText(QString());
        btnConfirmAdd->setText(QApplication::translate("AddItemDialog", "Confirm Add", nullptr));
        btnLoadImage->setText(QApplication::translate("AddItemDialog", "Load Image", nullptr));
        label_5->setText(QApplication::translate("AddItemDialog", "Dewey:", nullptr));
        label_4->setText(QString());
        label_7->setText(QApplication::translate("AddItemDialog", "Author:", nullptr));
        label_8->setText(QApplication::translate("AddItemDialog", "ID :", nullptr));
        label_9->setText(QApplication::translate("AddItemDialog", "Status:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItemDialog: public Ui_AddItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMDIALOG_H
