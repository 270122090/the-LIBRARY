#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <QDialog>
#include<books.h>


namespace Ui {
class addbook;
}

class addbook : public QDialog
{
    Q_OBJECT

public:
    explicit addbook(QWidget *parent = nullptr);
    ~addbook();


private slots:

    void savebook();

    void btnexitaddbook();
    void loadbookimage();

private:
    Ui::addbook *ui;

    books ** newbook;
    QString filepath;


};

#endif // ADDBOOK_H
