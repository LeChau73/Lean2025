#ifndef STATION_H
#define STATION_H

#include<QObject>
#include<QDebug>

class station : public QObject
{
public:
    Q_OBJECT
   public:
       explicit station(QObject *parent = nullptr, int channel = 0, QString name = "unknown");
       int channel;
       QString name;

signals:
    void send(int channel, QString name, QString message);

public slots:
    void broadcast(QString message);



};

#endif // STATION_H
