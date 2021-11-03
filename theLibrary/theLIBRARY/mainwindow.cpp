#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addbook.h"
#include <QFile>
#include <QTextStream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btnAddBook, &QPushButton::clicked,
            this, &MainWindow::add_a_book);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::add_a_book()
{

    AllBooks* newBook = nullptr;
    AddBook addbook1(newBook, this);
    addbook1.setModal(true);
    addbook1.exec();

    if (newBook != nullptr)
    {
        booklist.push_back(newBook);
        ui->listBooks->addItem(newBook->gettitle());
    }

    QFile bookfile("librarybooks.txt"); // ensuring this gets filed in my folder for easy sharing
    bookfile.open(QIODevice::WriteOnly| QIODevice::Text);
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
