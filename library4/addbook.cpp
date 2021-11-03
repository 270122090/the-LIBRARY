#include "addbook.h"
#include "ui_addbook.h"

#include "books.h"

#include <QDir>
#include <QFile> // to write files
#include <QTextStream> // to write files
#include <QListWidgetItem>
#include <QMessageBox>
#include <QFileDialog>

addbook::addbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addbook)
{
    ui->setupUi(this);

    connect(ui->btnsavebook, &QPushButton::clicked, this,&addbook::savebook);

    connect(ui->btnloadbookimage, &QPushButton::clicked, this,&addbook::loadbookimage);

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

void addbook::savebook()
{


    QString bookName = ui->txtaddbook->text();//  new variables
    QString bookAuthor = ui->txtaddauthor->text();
    QString bookStatus= ui->txtaddStatus->text();
    QString bookDewey= ui->txtadddewey->text();
    QString bookID = ui->txtaddid->text();

    *newbook = new books(bookName,bookAuthor,bookStatus,bookDewey,bookID, filepath);


};


void addbook::btnexitaddbook()
{
    this->close();
}

void addbook::loadbookimage()
{
    QString filename;

    filename=QFileDialog :: getOpenFileName(this, "Open Image", "./" ,"ImageFile(*.png *.jpg)"); // autofill in the file search container to only bring up png and jpg files

    if(filename!="") // "" means empty
    {
        int lastSlash = filename.lastIndexOf("/");
        QString shortname =filename.right(filename.size()-lastSlash-1);

        QFile::copy(filename, "./images/"+shortname);
        QPixmap pixmap("./images/"+shortname);

        ui->addbookimagebox->setPixmap(pixmap);
        ui->addbookimagebox->setScaledContents(true);

        filepath = "./images/" + shortname;
    }
}

