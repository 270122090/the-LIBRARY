#ifndef MEMBER_H
#define MEMBER_H

#include <QDialog>

namespace Ui {
class member;
}

class member : public QDialog
{
    Q_OBJECT

public:
    explicit member(QWidget *parent = nullptr);
    ~member();

private:
    Ui::member *ui;
};

#endif // MEMBER_H
