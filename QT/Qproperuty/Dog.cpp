#ifndef DOG_H
#define DOG_H

#include "BaseAnimal.h"

class Dog : public BaseAnimal
{
    Q_OBJECT
public:
    Dog() {}
    ~Dog() override { qInfo() << "Destructor of" << objectName(); }
    void TypeBark(TypeSua type) override { emit SuaGoGo(type); }
    void Infor() override { qInfo() << "Infor of" << objectName(); }

signals:
    void SuaGoGo(TypeSua TYPE);
};

#endif // DOG_H
