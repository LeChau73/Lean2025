#ifndef CAT_H
#define CAT_H

#include "BaseAnimal.h"

class Cat : public BaseAnimal
{
    Q_OBJECT
public:
    Cat() {}
    ~Cat() override { qInfo() << "Destructor of" << objectName(); }
    void TypeBark(TypeSua type) override { emit SuaGoGo(type); }
    void Infor() override { qInfo() << "Infor of" << objectName(); }

signals:
    void SuaGoGo(TypeSua TYPE);
};

#endif // CAT_H
