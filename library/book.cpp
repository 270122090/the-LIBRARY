#include "book.h"
#include "ui_book.h"

book::book(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book)
{
    ui->setupUi(this);
}

book::~book()
{
    delete ui;
}
