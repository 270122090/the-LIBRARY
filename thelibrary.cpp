#include "thelibrary.h"
#include "ui_thelibrary.h"
#include <QMessageBox>

theLibrary::theLibrary(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::theLibrary)
{
    ui->setupUi(this);

    connect(ui->btnMlogin, &QPushButton::clicked,
            this, &theLibrary::userlogin);

}

theLibrary::~theLibrary()
{
    delete ui;
}


void theLibrary::userlogin()
{

    QString username = ui->txtMLogin->text();
    QString password = ui->txtMPass->text();

    if (username == "Jane" && password == "Pass")
    {
        QMessageBox::warning(this, "login", "Welcome to theLibrary");
    }
    else
    {
        QMessageBox::warning(this, "login", "failed");// you have to give your box login
    }


}



