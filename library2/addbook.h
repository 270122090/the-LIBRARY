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

    void loadbook();
    void readbook();
    void pushbooks();

private slots:

private:
    Ui::addbook *ui;
    QVector<addbook*> booklist;


};

#endif // ADDBOOK_H
