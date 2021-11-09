#ifndef ADDMEMBER_H
#define ADDMEMBER_H

#include <QDialog>
#include "Item.h"

namespace Ui {
class AddMember;
}

class AddMember : public QDialog
{
    Q_OBJECT

public:
    explicit AddMember(Item*& newItem, QWidget *parent = nullptr);
    ~AddMember();

    void confirmAdd();




private:
    Ui::addMember *ui;
    Item** newItem;

};


#endif // ADDMEMBER_H
