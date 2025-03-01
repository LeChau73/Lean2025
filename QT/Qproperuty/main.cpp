#include "ControllorOfAnimal.h"
#include <QApplication>
#include <QVariant>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Tạo controller để xử lý signal-slot
    ControllorOfAnimal controller;

    // Casting safety because type is Derive
    TypeSua typeCurrent = TypeSua::GUGU;
    BaseAnimal* animal = controller.GetIntance();
    //animal->setObjectName("MyDogInMain");
    animal->Infor();
    animal->TypeBark(typeCurrent);

    delete animal; // Nên xóa để tránh rò rỉ bộ nhớ (memory leak)

    return a.exec();
}
