#ifndef DESTINATION_H
#define DESTINATION_H
#include<QObject>
#include<QDebug>
#include<QString>

class Destination : public QObject
{
    Q_OBJECT
public:
    explicit Destination(QObject *parent = nullptr);

public slots:
    void ReceviceSignal(QString messag);

};

#endif // DESTINATION_H
