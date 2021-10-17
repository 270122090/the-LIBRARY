#include "thelibrary.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    theLibrary w;
    w.show();
    return a.exec();
}
