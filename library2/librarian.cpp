#include "librarian.h"
#include "ui_librarian.h"
#include "addbook.h"
#include <books.h>

#include <QFile>
#include <QTextStream>

librarian::librarian(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::librarian)
{
    ui->setupUi(this);

}
librarian::~librarian()
{
    delete ui;

}

void librarian::on_btnAddBook_clicked()
{
    addbook addabook;
    addabook.setModal(true);
    addabook.exec();

    QFile bookfile("C:/Users/perch/OneDrive - UP Education/Desktop/the Library/31.10.2021/the-Library-main/the-Library-main/library2/librarybooks.txt"); // ensuring this gets filed in my folder for easy sharing

    bookfile.open(QIODevice::Append| QIODevice::Text);

    QTextStream out(&bookfile);

    for(int i=0;i<booklist.size();i++)
    {
        out << booklist.at(i)->gettitle()<<",";
        out << booklist.at(i)->getauthor()<<",";
        out << booklist.at(i)->getstatus()<<",";
        out << booklist.at(i)->getdewey()<<",";
        out << booklist.at(i)->getid()<<",";
        out << booklist.at(i)->getimage();

    }
        out.flush();
        bookfile.close();

}




