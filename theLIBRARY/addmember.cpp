#include "addmember.h"
//#include "addmember.ui"

#include <QDir>
#include <QMessageBox>
#include <QFileDialog>

AddMember::addMember(Item*& newItem, QWidget *parent) : QDialog(parent), ui(new Ui::AddMember)
{
    ui->setupUi(this);
    this->newItem = &newItem;
    //imageFilePath = "none.png"; //default

    //registering the events
    connect(ui->btnSaveMember, &QPushButton::clicked,
            this, &addMember::confirmAdd);

    //QDir pathDir("./images");
    //if(!pathDir.exists())
    //{
        //create it!
       // QDir().mkdir("./images");
    //}
}

addMember::~addMember()
{
    delete ui;
}


void addMember::confirmAdd()
{
    QString productName = ui->txtProductName->text();

    QString memberName = ui->txtMemberName->text();
    QString memberPhone= ui->txtMemberPhone->text();
    QString memberEmail= ui->txtMemberEmail->text();

    /*int quantity = ui->sbQuantity->value();


    if (productName.trimmed() != "" && bookID != "")
    {
        *newItem = new Item (productName, quantity, bookAuthor, bookStatus, bookDewey, bookID, imageFilePath);
        this->close();
    }
    else
    {
        QMessageBox mb;
        mb.setText("You must have a valid name and a quantity of at least 1");
        mb.exec();

    }*/

}//end confirmAdd




