/********************************************************************************
** Form generated from reading UI file 'member.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBER_H
#define UI_MEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_member
{
public:
    QLabel *label;

    void setupUi(QDialog *member)
    {
        if (member->objectName().isEmpty())
            member->setObjectName(QString::fromUtf8("member"));
        member->resize(1203, 652);
        label = new QLabel(member);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(490, 20, 261, 16));

        retranslateUi(member);

        QMetaObject::connectSlotsByName(member);
    } // setupUi

    void retranslateUi(QDialog *member)
    {
        member->setWindowTitle(QApplication::translate("member", "Dialog", nullptr));
        label->setText(QApplication::translate("member", "WELCOME MEMBER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class member: public Ui_member {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBER_H
