#ifndef BOOK_H
#define BOOK_H

#include <QDialog>

namespace Ui {
class book;
}

class book : public QDialog
{
    Q_OBJECT

public:
    explicit book(QWidget *parent = nullptr);
    ~book();

private:
    Ui::book *ui;
};

#endif // BOOK_H
