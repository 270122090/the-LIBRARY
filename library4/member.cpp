#include "member.h"
#include "ui_member.h"

member::member(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::member)
{
    ui->setupUi(this);
}

member::~member()
{
    delete ui;
}
