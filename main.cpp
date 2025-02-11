#include "tableurchenil.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TableurChenil w;
    w.show();
    return a.exec();
}
