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
    QString bookimageFilePath;
    QString uniqueid;
    int qty;


public:
    books(QString t, QString a, QString d, QString s, QString id, QString image = "none.png");

    void settitle(QString t);
    QString gettitle() const;

    void setauthor(QString a);
    QString getauthor() const;

    void setdewey(QString d);
    QString getdewey() const;

    void setstatus(QString s);
    QString getstatus() const;

    void setimage(QString image);
    QString getimage() const;

    void setid (QString id);
    QString getid() const;


};

#endif // BOOKS_H
