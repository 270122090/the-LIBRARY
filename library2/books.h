#ifndef BOOKS_H
#define BOOKS_H

#include <QString>
class books
{
private:

    QString title;
    QString author;
    QString dewey;
    QString status;
    int uniqueid;
    int qty;


    //QString filepath; // photos


public:
    books(QString t, QString a, QString d, QString s, int id);

    void setbook(QString t);
    //void setqty(int q);
    //void setimage(QString p);

    //QString getitem() const;
    //int getqty() const;
    //QString getimage()const;


};

#endif // BOOKS_H
