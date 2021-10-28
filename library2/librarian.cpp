#include "librarian.h"
#include "ui_librarian.h"
#include "addbook.h"

librarian::librarian(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::librarian)
{
    ui->setupUi(this);
    connect(ui->btnAddBook, &QPushButton::clicked,
            this, &librarian::add_book);
}

librarian::~librarian()
{
    delete ui;

}

void librarian::add_book()
{
    //hide();
    addbook addabook;
    addabook.setModal(true);
    addabook.exec();
}




