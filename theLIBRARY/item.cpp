#include "Item.h"

Item::Item(QString Name, QString Number, QString Email)
{
    this->Name = Name;
    this->Number = Number;
    this->Email = Email;

}

// Name
void Item::setMemberName(QString MemberName)
{
    this->Name = MemberName;
}

QString Item::getMemberName() const
{
    return Name;
}



// Phone Number
void Item::setPhoneNumber(QString number)
{
    Number = number;
}

QString Item::getPhoneNumber() const
{
    return Number;
}


// Email
void Item::setEmail(QString email)
{
    Email = email;
}

QString Item::getEmail() const
{
    return Email;
}

