/********************************************************************************
** Form generated from reading UI file 'library.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARY_H
#define UI_LIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_library
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btnMlogin;
    QLineEdit *txtPassword;
    QLabel *label_2;
    QLineEdit *txtUsername;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *library)
    {
        if (library->objectName().isEmpty())
            library->setObjectName(QString::fromUtf8("library"));
        library->resize(800, 600);
        centralwidget = new QWidget(library);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 280, 61, 31));
        btnMlogin = new QPushButton(centralwidget);
        btnMlogin->setObjectName(QString::fromUtf8("btnMlogin"));
        btnMlogin->setGeometry(QRect(350, 370, 161, 31));
        txtPassword = new QLineEdit(centralwidget);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setGeometry(QRect(350, 330, 161, 21));
        txtPassword->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 320, 61, 31));
        txtUsername = new QLineEdit(centralwidget);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        txtUsername->setGeometry(QRect(350, 290, 161, 21));
        library->setCentralWidget(centralwidget);
        menubar = new QMenuBar(library);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        library->setMenuBar(menubar);
        statusbar = new QStatusBar(library);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        library->setStatusBar(statusbar);

        retranslateUi(library);

        QMetaObject::connectSlotsByName(library);
    } // setupUi

    void retranslateUi(QMainWindow *library)
    {
        library->setWindowTitle(QApplication::translate("library", "library", nullptr));
        label->setText(QApplication::translate("library", "Name", nullptr));
        btnMlogin->setText(QApplication::translate("library", "Login", nullptr));
        label_2->setText(QApplication::translate("library", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class library: public Ui_library {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_H
