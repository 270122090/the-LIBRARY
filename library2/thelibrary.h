#ifndef THELIBRARY_H
#define THELIBRARY_H

#include <QMainWindow>
#include "member.h"
#include "librarian.h"
#include "books.h"
#include "members.h"

QT_BEGIN_NAMESPACE
namespace Ui { class theLibrary; }
QT_END_NAMESPACE

class theLibrary : public QMainWindow
{
    Q_OBJECT

public:
    theLibrary(QWidget *parent = nullptr);
    ~theLibrary();



private slots:
    void userlogin();

private:
    Ui::theLibrary *ui;
    member *memberpage;
    librarian *adminpage;

    // vectors

    QVector<members*> memberslist;

};
#endif // THELIBRARY_H
