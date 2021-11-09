#include "addnewmember.h"
#include "ui_addnewmember.h"

AddNewMember::AddNewMember(Item*& newItem, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewMember)
{
    ui->setupUi(this);
    this->newItem = &newItem;

    connect(ui->btnSaveMember_2, &QPushButton::clicked,
            this, &AddNewMember::confirmAdd);






}

AddNewMember::~AddNewMember()
{
    delete ui;
}



void AddNewMember::confirmAdd()
{
    QString productName = ui->txtMemberName_2->text();

    QString memberName = ui->txtMemberName_2->text();
    QString memberPhone= ui->txtMemberPhone_2->text();
    QString memberEmail= ui->txtMemberEmail_2->text();







}
