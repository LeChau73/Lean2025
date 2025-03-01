#include "animal.h"


Animal::Animal(QObject *parent) : QObject (parent)
{
    qInfo() << this << "Animal contructord";
}

Animal::~Animal()
{
    qInfo() << this << "Animal destructord";
}
