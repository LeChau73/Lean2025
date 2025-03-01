#include "test.h"

test::test(QObject *parent) : QObject (parent)
{
    qInfo() << this << "test contructord";
}


test::~test()
{
    qInfo() << this << "test destructord";
}
