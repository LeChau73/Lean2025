#include "mainwindow.h"
#include <QApplication>
#include "destination.h"
#include "source.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Source* src = new Source();
    Destination* des = new Destination();

    QObject::connect(src, &Source::SignalNotify, des, &Destination::ReceviceSignal);

    src->Test();

    return a.exec();
}
