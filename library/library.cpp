#include "library.h"
#include "ui_library.h"

#include "QMessageBox"

library::library(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::library)
{
    ui->setupUi(this);
    connect(ui->btnMlogin, &QPushButton::clicked,
            this, &library::userlogin);
}



library::~library()
{
    delete ui;
}


void library::userlogin()
{

    QString username = ui->txtUsername->text();
    QString password = ui->txtPassword->text();

    if (username == "Jane" && password == "Pass")
    {
        hide();
        Username = new member(this);
        Username->show();
    }
    else if (username == "Admin" && password == "Pass")
    {
        hide();
        Books= new book(this);
        Books->show();
    }
    else
    {
        QMessageBox::warning(this, "login", "failed");// you have to give your box login
    }



}
