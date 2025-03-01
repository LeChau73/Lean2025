#ifndef CONTROLLOROFANIMAL_H
#define CONTROLLOROFANIMAL_H

#include "Dog.h"
#include "Cat.h"

class ControllorOfAnimal : public QObject
{
    Q_OBJECT
public:
    ControllorOfAnimal();
    ~ControllorOfAnimal();

    Dog* GetIntance();

public slots:
    void signalTypeSua(TypeSua TYPE);

private:
    Cat* cat;
    Dog* dog;
};

#endif // CONTROLLOROFANIMAL_H
