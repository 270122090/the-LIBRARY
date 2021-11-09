#ifndef ITEM_H
#define ITEM_H
#include <QString>


class Item
{
public:
    Item(QString Name, QString PhoneNumber, QString Email);

    void setMemberName(QString Name);
    QString getMemberName() const;

    void setPhoneNumber(QString Number);
    QString getPhoneNumber() const;

    void setEmail(QString Email);
    QString getEmail() const;


private:

    QString Name;
    QString Number;
    QString Email;

};

#endif // ITEM_H

