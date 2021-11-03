#include "thelibrary.h"
#include "ui_thelibrary.h"

#include "QMessageBox"

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
    QString username = ui->txtUsername->text();
    QString password = ui->txtPassword->text();

    if (username == "Jane" && password == "Pass")
    {
        hide();
        memberpage = new member(this);
        memberpage->show();
    }
    else if (username == "Admin" && password == "Pass")
    {
        hide();
        adminpage= new librarian(this);
        adminpage->show();
    }
    else
    {
        QMessageBox::warning(this, "login", "failed");
    }

}

