#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QListWidgetItem>

#include <addbook.h>
#include <allbooks.h>
#include <allmembers.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void add_a_book();
    void displayBookDetails(QListWidgetItem *books);

private slots:


    void on_btnAddMember_clicked();

private:
    Ui::MainWindow *ui;
    AddBook *admin_addbook;
    QVector <AllBooks*>booklist;
    QVector <AllMembers*> memberslist;


};
#endif // MAINWINDOW_H
