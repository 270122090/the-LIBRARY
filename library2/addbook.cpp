#include "addbook.h"
#include "ui_addbook.h"

#include "books.h"

#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QListWidgetItem>

addbook::addbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addbook)
{
    ui->setupUi(this);


    //connect(ui->loadimage, &QPushButton::clicked, this,&addbook::loadItemImage);

        QDir pathDir("./images"); // declaring where my images is stored but
        if(!pathDir.exists()) //the folder doesn't exist
        {
            QDir().mkdir("./images"); // then create the folder
        }

}

addbook::~addbook()
{
    delete ui;
}
// this is should all be in librarian
