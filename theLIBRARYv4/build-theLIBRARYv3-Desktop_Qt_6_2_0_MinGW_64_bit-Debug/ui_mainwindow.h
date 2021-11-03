/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *SideBarFrmae;
    QFrame *MemberFrame;
    QVBoxLayout *verticalLayout;
    QLabel *LibrarianHomeTitle;
    QFrame *MemberBackground;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QFrame *LibraryFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *LibraryHeading;
    QFrame *LibraryBackground;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnAddBook;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_16;
    QPushButton *pushButton_15;
    QFrame *frame;
    QLabel *LibrarianAdminHeading;
    QListWidget *listBooks;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1332, 797);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SideBarFrmae = new QFrame(centralwidget);
        SideBarFrmae->setObjectName(QString::fromUtf8("SideBarFrmae"));
        SideBarFrmae->setGeometry(QRect(40, 0, 250, 741));
        SideBarFrmae->setMaximumSize(QSize(250, 16777215));
        SideBarFrmae->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);"));
        SideBarFrmae->setFrameShape(QFrame::StyledPanel);
        SideBarFrmae->setFrameShadow(QFrame::Plain);
        MemberFrame = new QFrame(SideBarFrmae);
        MemberFrame->setObjectName(QString::fromUtf8("MemberFrame"));
        MemberFrame->setGeometry(QRect(20, 550, 211, 161));
        MemberFrame->setFrameShape(QFrame::StyledPanel);
        MemberFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(MemberFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        LibrarianHomeTitle = new QLabel(MemberFrame);
        LibrarianHomeTitle->setObjectName(QString::fromUtf8("LibrarianHomeTitle"));
        LibrarianHomeTitle->setMaximumSize(QSize(16777215, 30));
        LibrarianHomeTitle->setStyleSheet(QString::fromUtf8("color: rgb(246, 240, 237);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"background-color: rgb(42, 83, 106);"));
        LibrarianHomeTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(LibrarianHomeTitle);

        MemberBackground = new QFrame(MemberFrame);
        MemberBackground->setObjectName(QString::fromUtf8("MemberBackground"));
        MemberBackground->setStyleSheet(QString::fromUtf8("background: white;\n"
"background-color: rgb(229, 225, 214);"));
        MemberBackground->setFrameShape(QFrame::StyledPanel);
        MemberBackground->setFrameShadow(QFrame::Raised);
        pushButton_9 = new QPushButton(MemberBackground);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 10, 191, 28));
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);"));
        pushButton_10 = new QPushButton(MemberBackground);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 50, 191, 28));
        pushButton_10->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(MemberBackground);

        LibraryFrame = new QFrame(SideBarFrmae);
        LibraryFrame->setObjectName(QString::fromUtf8("LibraryFrame"));
        LibraryFrame->setGeometry(QRect(20, 30, 211, 271));
        LibraryFrame->setFrameShape(QFrame::StyledPanel);
        LibraryFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(LibraryFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        LibraryHeading = new QLabel(LibraryFrame);
        LibraryHeading->setObjectName(QString::fromUtf8("LibraryHeading"));
        LibraryHeading->setMaximumSize(QSize(16777215, 30));
        LibraryHeading->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryHeading->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(LibraryHeading);

        LibraryBackground = new QFrame(LibraryFrame);
        LibraryBackground->setObjectName(QString::fromUtf8("LibraryBackground"));
        LibraryBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(229, 225, 214);"));
        LibraryBackground->setFrameShape(QFrame::StyledPanel);
        LibraryBackground->setFrameShadow(QFrame::Raised);
        widget = new QWidget(LibraryBackground);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 191, 231));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnAddBook = new QPushButton(widget);
        btnAddBook->setObjectName(QString::fromUtf8("btnAddBook"));

        verticalLayout_3->addWidget(btnAddBook);

        pushButton_13 = new QPushButton(widget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);\n"
""));

        verticalLayout_3->addWidget(pushButton_14);

        pushButton_16 = new QPushButton(widget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);\n"
""));

        verticalLayout_3->addWidget(pushButton_16);

        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);\n"
""));

        verticalLayout_3->addWidget(pushButton_15);


        verticalLayout_2->addWidget(LibraryBackground);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(300, 0, 981, 741));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        LibrarianAdminHeading = new QLabel(frame);
        LibrarianAdminHeading->setObjectName(QString::fromUtf8("LibrarianAdminHeading"));
        LibrarianAdminHeading->setGeometry(QRect(410, 30, 209, 30));
        LibrarianAdminHeading->setMaximumSize(QSize(16777215, 30));
        LibrarianAdminHeading->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibrarianAdminHeading->setAlignment(Qt::AlignCenter);
        listBooks = new QListWidget(frame);
        listBooks->setObjectName(QString::fromUtf8("listBooks"));
        listBooks->setGeometry(QRect(40, 100, 256, 192));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1332, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        LibrarianHomeTitle->setText(QCoreApplication::translate("MainWindow", "M E M B E R S", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Add Member", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Edit Member Details", nullptr));
        LibraryHeading->setText(QCoreApplication::translate("MainWindow", "L I B R A R Y", nullptr));
        btnAddBook->setText(QCoreApplication::translate("MainWindow", "ADD A BOOK", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "ISSUE A BOOK", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "SEARCH A BOOK", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "UPDATE A BOOK", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "DUE DATES", nullptr));
        LibrarianAdminHeading->setText(QCoreApplication::translate("MainWindow", "LIBRARIAN HOME PAGE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
