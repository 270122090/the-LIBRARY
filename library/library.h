#ifndef LIBRARY_H
#define LIBRARY_H

#include <QMainWindow>
#include "member.h"
#include "book.h"

namespace Ui {
class library;
}

class library : public QMainWindow
{
    Q_OBJECT

public:
    explicit library(QWidget *parent = nullptr);
    ~library();

    void userlogin();



private:
    Ui::library *ui;
    member *Username;
    book *Books;
};

#endif // LIBRARY_H
