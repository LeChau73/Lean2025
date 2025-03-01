#ifndef BASEANIMAL_H
#define BASEANIMAL_H

#include <QObject>
#include <QDebug>

enum class TypeSua
{
    GOGO = -1,
    ECEC,
    GUGU,
    HUMHUM
};

class BaseAnimal : public QObject
{
    Q_OBJECT
public:
    BaseAnimal() {}
    virtual void TypeBark(TypeSua type) = 0;
    virtual void Infor() { qInfo() << "Infor of" << objectName(); }
    virtual ~BaseAnimal() { qInfo() << "Destructor of" << objectName(); }

private:
    QString Name;
    float Weight;
    float Hight;
};

#endif // BASEANIMAL_H
