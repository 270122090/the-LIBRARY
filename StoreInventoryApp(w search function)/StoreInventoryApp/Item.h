#ifndef ITEM_H
#define ITEM_H
#include <QString>


class Item
{
public:
    Item(QString name, int quantity, QString Author, QString Dewey, QString Status, QString ID, QString imageFilePath = "none.png");

    void setName(QString name);
    QString getName() const;

    void setQuantity(int quanity);
    int getQuantity() const;

    void setImageFilePath(QString imageFilePath);
    QString getImageFilePath() const;

// -----------------------------------------------
    void setAuthor(QString Author);
    QString getAuthor() const;

    void setDewey(QString Dewey);
    QString getDewey() const;

    void setStatus(QString Status);
    QString getStatus() const;

    void setUniqueID(QString ID);
    QString getUniqueID() const;

private:
    int quantity;
    QString name;
    QString imageFilePath;

    QString author;
    QString dewey;
    QString status;
    QString uniqueID;

};

#endif // ITEM_H
