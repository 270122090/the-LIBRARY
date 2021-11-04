#include "Item.h"

Item::Item(QString name, int quantity, QString Author, QString Dewey, QString Status, QString ID, QString imageFilePath)
{
    this->name = name;
    this->quantity = quantity;
    this->imageFilePath = imageFilePath;

    this->author = Author;
    this->dewey = Dewey;
    this->status = Status;
    this->uniqueID = ID;

}

void Item::setName(QString name)
{
    this->name = name;
}

QString Item::getName() const
{
    return name;
}

void Item::setQuantity(int quanity)
{
    this->quantity = quanity;
}

int Item::getQuantity() const
{
    return quantity;
}

void Item::setImageFilePath(QString imageFilePath)
{
    this->imageFilePath = imageFilePath;
}

QString Item::getImageFilePath() const
{
    return imageFilePath;
}

// ---------------------------------

// Author
void Item::setAuthor(QString Author)
{
    author = Author;
}

QString Item::getAuthor() const
{
    return author;
}


// Dewey
void Item::setDewey(QString Dewey)
{
    dewey = Dewey;
}

QString Item::getDewey() const
{
    return dewey;
}

// Status
void Item::setStatus(QString Status)
{
    status = Status;
}

QString Item::getStatus() const
{
    return status;
}

// ID
void Item::setUniqueID(QString ID)
{
    uniqueID = ID;
}

QString Item::getUniqueID() const
{
    return uniqueID;
}
