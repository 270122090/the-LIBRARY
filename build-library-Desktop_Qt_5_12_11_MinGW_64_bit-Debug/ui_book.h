/********************************************************************************
** Form generated from reading UI file 'book.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_H
#define UI_BOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_book
{
public:
    QLabel *label;

    void setupUi(QDialog *book)
    {
        if (book->objectName().isEmpty())
            book->setObjectName(QString::fromUtf8("book"));
        book->resize(1074, 606);
        label = new QLabel(book);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 20, 321, 16));

        retranslateUi(book);

        QMetaObject::connectSlotsByName(book);
    } // setupUi

    void retranslateUi(QDialog *book)
    {
        book->setWindowTitle(QApplication::translate("book", "Dialog", nullptr));
        label->setText(QApplication::translate("book", "ADMINISTRATION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class book: public Ui_book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
