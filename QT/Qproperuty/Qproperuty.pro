QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qproperuty
TEMPLATE = app

SOURCES += main.cpp \
           ControllorOfAnimal.cpp

HEADERS += BaseAnimal.h \
           Dog.h \
           Cat.h \
           ControllorOfAnimal.h
