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
void addbook::pushbooks()
{
    books* newbook = nullptr;
    addbook addonebook(newbook, nullptr);
    addonebook.setModal(true);
    addonebook.exec();
    if(newbook != nullptr)
    {
        booklist.push_back(newbook);
    }
}


void addbook::readbook() // write to file
{
    QFile outputFile("products.txt");

    outputFile.open(QIODevice::WriteOnly | QIODevice::Text); // this will be overiding

    QTextStream out(&outputFile);

    for (int i=0; i< booklist.size();i++ )
    {
        out << booklist.at(i)->getitem()<< ",";
        out << booklist.at(i)->getqty()<< ",";
        out << booklist.at(i)->getimage()<< endl;
 }

   out.flush();
   outputFile.close();

}

void addbook::loadbook()
{
    QFile inputFile("products.txt");

    inputFile.open(QIODevice::ReadOnly | QIODevice::Text); // this will be overiding

    QTextStream in(&inputFile); // get in!!!!!!!!!!!!!!

   // clear list widget and product vector



    productlist.clear(); // emty current list so that things are not all loaded onto the list again.


    // read file

    while (!in.atEnd())
    {
        QString line=in.readLine(); // processing for one line until (!in.atEnd()) --> file ends
        QStringList info = line.split(","); // must include so to where info is personal name. telling compiler that the comma is refering to the same item and
                                            //to split when comma is no longer seen.

        // Add the product name to my list widget UI
        ui->MlistWidget->addItem(info.at(0));

        //handle the proudcut list vector

       Item* temp = new Item(info.at(0), info.at(1).toInt(),info.at(2));

       productlist.push_back(temp);

   }
    in.flush();
    inputFile.close();
}



