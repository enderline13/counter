#include <QApplication>
#include <QtWidgets>
#include "counter.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //
    Counter* c = new Counter;
    c->resize(200, 200);
    c->show();


    //
    return a.exec();
}
