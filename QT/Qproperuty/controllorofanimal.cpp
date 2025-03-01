#include "ControllorOfAnimal.h"

ControllorOfAnimal::ControllorOfAnimal()
{
    cat = new Cat();
    dog = new Dog();
    cat->setObjectName("MyCat");
    dog->setObjectName("MyDog");
    connect(dog, &Dog::SuaGoGo, this, &ControllorOfAnimal::signalTypeSua);
    connect(cat, &Cat::SuaGoGo, this, &ControllorOfAnimal::signalTypeSua);
}

ControllorOfAnimal::~ControllorOfAnimal()
{
    delete cat;
    delete dog;
}

Dog *ControllorOfAnimal::GetIntance()
{
    return this->dog;
}

void ControllorOfAnimal::signalTypeSua(TypeSua TYPE)
{
    QObject* senderObj = sender();
    if (senderObj == cat)
    {
        switch (TYPE)
        {
        case TypeSua::GOGO:
            qInfo() << "Cat is meowing GOGO";
            break;
        case TypeSua::ECEC:
            qInfo() << "Cat is meowing ECEC";
            break;
        case TypeSua::GUGU:
            qInfo() << "Cat is meowing GUGU";
            break;
        case TypeSua::HUMHUM:
            qInfo() << "Cat is meowing HUMHUM";
            break;
        }
    }
    else if (senderObj == dog)
    {
        switch (TYPE)
        {
        case TypeSua::GOGO:
            qInfo() << "Dog is barking GOGO";
            break;
        case TypeSua::ECEC:
            qInfo() << "Dog is barking ECEC";
            break;
        case TypeSua::GUGU:
            qInfo() << "Dog is barking GUGU";
            break;
        case TypeSua::HUMHUM:
            qInfo() << "Dog is barking HUMHUM";
            break;
        }
    }
}
