#include "library.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    library w;
    w.show();
    return a.exec();
}
