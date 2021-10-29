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
    int uniqueid;
    int qty;


public:
    books(QString t, QString a, QString d, QString s, int id, QString image = "none.png");

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

    void setid (int id);
    int getid() const;


};

#endif // BOOKS_H
