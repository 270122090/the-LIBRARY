#include "books.h"


books::books(QString t, QString a, QString d, QString s, QString id, QString image)
{
    title = t;
    author = a;
    dewey = d;
    status = s;
    uniqueid = id;
    bookimageFilePath = image;
}


void books::settitle(QString t)
{
    title = t;
}
QString books::gettitle() const
{
    return title;
}

//
void books::setauthor(QString a)
{
    author = a;
}

QString books::getauthor() const
{
    return author;
}

//
void books::setdewey(QString d)
{
    dewey = d;
}

QString books::getdewey() const
{
    return dewey;
}

void books::setstatus(QString s)
{
    status = s;
}

QString books::getstatus() const
{
    return status;
}

void books::setimage(QString image)
{
    bookimageFilePath = image;
}

QString books::getimage() const
{
    return bookimageFilePath;
}

void books::setid (QString id)
{
    uniqueid = id;
}

QString books::getid() const
{
    return uniqueid;
}
