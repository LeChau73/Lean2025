#include "destination.h"



Destination::Destination(QObject *parent) : QObject(parent)
{

}

void Destination::ReceviceSignal(QString messag)
{
    qInfo() << "Slot %s" << messag;
}
