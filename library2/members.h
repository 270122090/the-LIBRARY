#ifndef MEMBERS_H
#define MEMBERS_H

#include <QString>
#include <QDate>

class members
{

    QString name;
    QString surname;
    QString addressstreet;
    QString addresssuburb;
    QString contactnumber;
    int uniqueid;
    QDate DOB;


public:
    members(QString n, QString s, QString a1, QString a2, QString num, int id, QDate date);

    void setname(QString n);
    QString getname() const;

    void setsurname(QString s);
    QString getsurname() const;

    void setstreet(QString s1);
    QString getstreet() const;

    void setsuburb(QString s2);
    QString getsuburb() const;

    void setnumber(QString num);
    QString getnumber() const;

    void setdob(QString date);
    QString getdob() const;

    void setid (int id);
    int getid() const;


};

#endif // MEMBERS_H
