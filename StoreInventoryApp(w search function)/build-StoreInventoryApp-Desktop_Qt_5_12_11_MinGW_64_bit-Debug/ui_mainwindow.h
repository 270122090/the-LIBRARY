/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *menuNewProduct;
    QAction *menuEditSelectedProduct;
    QAction *menuSaveProducts;
    QAction *menuLoadProducts;
    QAction *menuExit;
    QWidget *centralwidget;
    QListWidget *lstProducts;
    QLabel *label;
    QLabel *label_2;
    QLabel *lblProductName;
    QLabel *lblQuantity;
    QLabel *lblImage;
    QPushButton *btnRemove;
    QPushButton *pushButton;
    QFrame *SideBarFrmae;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QFrame *MemberFrame_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *MemberTitle_2;
    QFrame *MemberBackground_2;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QFrame *LibraryFrame;
    QVBoxLayout *verticalLayout_5;
    QLabel *LibraryTitle_3;
    QFrame *LibraryBackground_3;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QFrame *searchFrame;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *lblAuthor;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *lblStatus;
    QLabel *lbl_ID;
    QLabel *label_7;
    QLabel *lblDewey;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1254, 719);
        menuNewProduct = new QAction(MainWindow);
        menuNewProduct->setObjectName(QString::fromUtf8("menuNewProduct"));
        menuEditSelectedProduct = new QAction(MainWindow);
        menuEditSelectedProduct->setObjectName(QString::fromUtf8("menuEditSelectedProduct"));
        menuSaveProducts = new QAction(MainWindow);
        menuSaveProducts->setObjectName(QString::fromUtf8("menuSaveProducts"));
        menuLoadProducts = new QAction(MainWindow);
        menuLoadProducts->setObjectName(QString::fromUtf8("menuLoadProducts"));
        menuExit = new QAction(MainWindow);
        menuExit->setObjectName(QString::fromUtf8("menuExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lstProducts = new QListWidget(centralwidget);
        lstProducts->setObjectName(QString::fromUtf8("lstProducts"));
        lstProducts->setGeometry(QRect(330, 90, 261, 511));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(610, 210, 51, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(970, 130, 51, 21));
        label_2->setFont(font);
        lblProductName = new QLabel(centralwidget);
        lblProductName->setObjectName(QString::fromUtf8("lblProductName"));
        lblProductName->setGeometry(QRect(680, 200, 221, 31));
        lblProductName->setFont(font);
        lblProductName->setFrameShape(QFrame::Panel);
        lblQuantity = new QLabel(centralwidget);
        lblQuantity->setObjectName(QString::fromUtf8("lblQuantity"));
        lblQuantity->setGeometry(QRect(1030, 120, 71, 31));
        lblQuantity->setFont(font);
        lblQuantity->setFrameShape(QFrame::Panel);
        lblImage = new QLabel(centralwidget);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(920, 160, 250, 371));
        lblImage->setFrameShape(QFrame::Panel);
        btnRemove = new QPushButton(centralwidget);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        btnRemove->setGeometry(QRect(340, 610, 241, 31));
        btnRemove->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(890, 30, 91, 31));
        pushButton->setFont(font);
        SideBarFrmae = new QFrame(centralwidget);
        SideBarFrmae->setObjectName(QString::fromUtf8("SideBarFrmae"));
        SideBarFrmae->setGeometry(QRect(30, 30, 250, 609));
        SideBarFrmae->setMaximumSize(QSize(250, 16777215));
        SideBarFrmae->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 233, 239);"));
        SideBarFrmae->setFrameShape(QFrame::StyledPanel);
        SideBarFrmae->setFrameShadow(QFrame::Plain);
        pushButton_15 = new QPushButton(SideBarFrmae);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(30, 490, 191, 28));
        pushButton_15->setStyleSheet(QString::fromUtf8("border: 1px solid #000000;\n"
"box-sizing: border-box;\n"
"border-radius: 14px;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(193, 148, 139);"));
        pushButton_16 = new QPushButton(SideBarFrmae);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(30, 530, 191, 28));
        pushButton_16->setStyleSheet(QString::fromUtf8("border: 1px solid #000000;\n"
"background-color: rgb(193, 148, 139);\n"
"box-sizing: border-box;\n"
"border-radius: 14px;\n"
"color: rgb(0, 0, 0);"));
        MemberFrame_2 = new QFrame(SideBarFrmae);
        MemberFrame_2->setObjectName(QString::fromUtf8("MemberFrame_2"));
        MemberFrame_2->setGeometry(QRect(20, 20, 211, 161));
        MemberFrame_2->setFrameShape(QFrame::StyledPanel);
        MemberFrame_2->setFrameShadow(QFrame::Plain);
        verticalLayout_4 = new QVBoxLayout(MemberFrame_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        MemberTitle_2 = new QLabel(MemberFrame_2);
        MemberTitle_2->setObjectName(QString::fromUtf8("MemberTitle_2"));
        MemberTitle_2->setMaximumSize(QSize(16777215, 30));
        MemberTitle_2->setStyleSheet(QString::fromUtf8("color: rgb(246, 240, 237);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"background-color: rgb(42, 83, 106);"));
        MemberTitle_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(MemberTitle_2);

        MemberBackground_2 = new QFrame(MemberFrame_2);
        MemberBackground_2->setObjectName(QString::fromUtf8("MemberBackground_2"));
        MemberBackground_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"background-color: rgb(249, 244, 242);"));
        MemberBackground_2->setFrameShape(QFrame::StyledPanel);
        MemberBackground_2->setFrameShadow(QFrame::Raised);
        pushButton_17 = new QPushButton(MemberBackground_2);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(10, 10, 191, 28));
        pushButton_17->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);\n"
"\n"
""));
        pushButton_18 = new QPushButton(MemberBackground_2);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(10, 50, 191, 28));
        pushButton_18->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        pushButton_19 = new QPushButton(MemberBackground_2);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(10, 90, 191, 28));
        pushButton_19->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_4->addWidget(MemberBackground_2);

        LibraryFrame = new QFrame(SideBarFrmae);
        LibraryFrame->setObjectName(QString::fromUtf8("LibraryFrame"));
        LibraryFrame->setGeometry(QRect(20, 200, 211, 221));
        LibraryFrame->setFrameShape(QFrame::StyledPanel);
        LibraryFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_5 = new QVBoxLayout(LibraryFrame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        LibraryTitle_3 = new QLabel(LibraryFrame);
        LibraryTitle_3->setObjectName(QString::fromUtf8("LibraryTitle_3"));
        LibraryTitle_3->setMaximumSize(QSize(16777215, 30));
        LibraryTitle_3->setStyleSheet(QString::fromUtf8("background: rgba(40, 83, 107, 1);\n"
"font: 75 9pt \"Yu Gothic UI\";\n"
"color: white;"));
        LibraryTitle_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(LibraryTitle_3);

        LibraryBackground_3 = new QFrame(LibraryFrame);
        LibraryBackground_3->setObjectName(QString::fromUtf8("LibraryBackground_3"));
        LibraryBackground_3->setStyleSheet(QString::fromUtf8("background-color: rgb(249, 244, 242);"));
        LibraryBackground_3->setFrameShape(QFrame::StyledPanel);
        LibraryBackground_3->setFrameShadow(QFrame::Raised);
        pushButton_20 = new QPushButton(LibraryBackground_3);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(10, 10, 191, 28));
        pushButton_20->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);\n"
""));
        pushButton_21 = new QPushButton(LibraryBackground_3);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(10, 50, 191, 28));
        pushButton_21->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);"));
        pushButton_22 = new QPushButton(LibraryBackground_3);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setGeometry(QRect(10, 90, 191, 28));
        pushButton_22->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);\n"
""));
        pushButton_23 = new QPushButton(LibraryBackground_3);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setGeometry(QRect(10, 130, 191, 28));
        pushButton_23->setStyleSheet(QString::fromUtf8("font: 9pt \"Yu Gothic UI\";\n"
"color: rgb(0, 0, 0);\n"
""));

        verticalLayout_5->addWidget(LibraryBackground_3);

        searchFrame = new QFrame(centralwidget);
        searchFrame->setObjectName(QString::fromUtf8("searchFrame"));
        searchFrame->setGeometry(QRect(320, 30, 551, 31));
        searchFrame->setStyleSheet(QString::fromUtf8("border: 1px solid #000000;\n"
"border-radius: 14px;\n"
"background-color: rgb(246, 240, 237);"));
        searchFrame->setFrameShape(QFrame::StyledPanel);
        searchFrame->setFrameShadow(QFrame::Plain);
        lineEdit = new QLineEdit(searchFrame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 5, 531, 21));
        lineEdit->setStyleSheet(QString::fromUtf8("border: none;"));
        lineEdit->setFrame(false);
        lineEdit->setClearButtonEnabled(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(610, 260, 61, 21));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(610, 320, 51, 21));
        label_4->setFont(font);
        lblAuthor = new QLabel(centralwidget);
        lblAuthor->setObjectName(QString::fromUtf8("lblAuthor"));
        lblAuthor->setGeometry(QRect(680, 250, 221, 31));
        lblAuthor->setFont(font);
        lblAuthor->setFrameShape(QFrame::Panel);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(610, 310, 61, 21));
        label_5->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(630, 360, 41, 21));
        label_6->setFont(font);
        lblStatus = new QLabel(centralwidget);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setGeometry(QRect(680, 390, 221, 31));
        lblStatus->setFont(font);
        lblStatus->setFrameShape(QFrame::Panel);
        lbl_ID = new QLabel(centralwidget);
        lbl_ID->setObjectName(QString::fromUtf8("lbl_ID"));
        lbl_ID->setGeometry(QRect(680, 350, 221, 31));
        lbl_ID->setFont(font);
        lbl_ID->setFrameShape(QFrame::Panel);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(610, 400, 61, 21));
        label_7->setFont(font);
        lblDewey = new QLabel(centralwidget);
        lblDewey->setObjectName(QString::fromUtf8("lblDewey"));
        lblDewey->setGeometry(QRect(680, 300, 221, 31));
        lblDewey->setFont(font);
        lblDewey->setFrameShape(QFrame::Panel);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1254, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(menuNewProduct);
        menuFile->addAction(menuEditSelectedProduct);
        menuFile->addAction(menuSaveProducts);
        menuFile->addAction(menuLoadProducts);
        menuFile->addAction(menuExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Store Inventory Application", nullptr));
        menuNewProduct->setText(QApplication::translate("MainWindow", "Add Book", nullptr));
        menuEditSelectedProduct->setText(QApplication::translate("MainWindow", "Update Book", nullptr));
        menuSaveProducts->setText(QApplication::translate("MainWindow", "Save", nullptr));
        menuLoadProducts->setText(QApplication::translate("MainWindow", "Load Stock", nullptr));
        menuExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QApplication::translate("MainWindow", "Title:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Copies:", nullptr));
        lblProductName->setText(QString());
        lblQuantity->setText(QString());
        lblImage->setText(QString());
        btnRemove->setText(QApplication::translate("MainWindow", "Remove Selected Product", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Search", nullptr));
        pushButton_15->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_16->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        MemberTitle_2->setText(QApplication::translate("MainWindow", "M E M B E R S", nullptr));
        pushButton_17->setText(QApplication::translate("MainWindow", "Add Member", nullptr));
        pushButton_18->setText(QApplication::translate("MainWindow", "Edit Member Details", nullptr));
        pushButton_19->setText(QApplication::translate("MainWindow", "Text", nullptr));
        LibraryTitle_3->setText(QApplication::translate("MainWindow", "L I B R A R Y", nullptr));
        pushButton_20->setText(QApplication::translate("MainWindow", "Add Book", nullptr));
        pushButton_21->setText(QApplication::translate("MainWindow", "Update Book", nullptr));
        pushButton_22->setText(QApplication::translate("MainWindow", "Due Dates", nullptr));
        pushButton_23->setText(QApplication::translate("MainWindow", "Reserves", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        lineEdit->setAccessibleName(QApplication::translate("MainWindow", "Type here", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_3->setText(QApplication::translate("MainWindow", "Author:", nullptr));
        label_4->setText(QString());
        lblAuthor->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Dewey:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "ID :", nullptr));
        lblStatus->setText(QString());
        lbl_ID->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Status:", nullptr));
        lblDewey->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
