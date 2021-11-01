#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <QDialog>
#include "addbook.h"
#include "books.h"
#include "members.h"

namespace Ui {
class librarian;
}

class librarian : public QDialog
{
    Q_OBJECT

public:
    explicit librarian(QWidget *parent = nullptr);
    ~librarian();



private slots:
    void on_btnAddBook_clicked();


private:
    Ui::librarian *ui;
    QVector<books*> booklist;
    QVector<members*> memberslist;

};

#endif // LIBRARIAN_H
