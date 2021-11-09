#ifndef ADDNEWMEMBER_H
#define ADDNEWMEMBER_H
#include "item.h"

#include <QDialog>

namespace Ui {
class AddNewMember;
}

class AddNewMember : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewMember(Item*& newItem, QWidget *parent = nullptr);
    ~AddNewMember();

    void confirmAdd();

private:
    Ui::AddNewMember *ui;
     Item** newItem;
};

#endif // ADDNEWMEMBER_H
