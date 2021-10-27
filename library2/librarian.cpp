#include "librarian.h"
#include "ui_librarian.h"

librarian::librarian(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::librarian)
{
    ui->setupUi(this);
    connect(ui->btnAddBook, &QPushButton::clicked,
            this, &librarian::addbook);
}

librarian::~librarian()
{
    delete ui;

}

void librarian::addbook()
{

}

