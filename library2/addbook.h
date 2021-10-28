#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <QDialog>


namespace Ui {
class addbook;
}

class addbook : public QDialog
{
    Q_OBJECT

public:
    explicit addbook(QWidget *parent = nullptr);
    ~addbook();

private:
    Ui::addbook *ui;


};

#endif // ADDBOOK_H
