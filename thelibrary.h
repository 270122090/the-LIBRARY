#ifndef THELIBRARY_H
#define THELIBRARY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class theLibrary; }
QT_END_NAMESPACE

class theLibrary : public QMainWindow
{
    Q_OBJECT

public:
    theLibrary(QWidget *parent = nullptr);
    ~theLibrary();

    void userlogin();




private:
    Ui::theLibrary *ui;
};
#endif // THELIBRARY_H
