/*
    What
    Disconnecting

    Why
    We want to disconnect a signal from a slot

    How
    Use the disconnect function
    This also talks about the connection types
*/

#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>
#include "radio.h"
#include "station.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    radio boombox(&a);
    station* channels[3];
    bool bOn = false;
    //create some stations
    channels[0] = new station(&boombox,94,"Rock and Roll");
    channels[1] = new station(&boombox,87,"Hip Hop");
    channels[2] = new station(&boombox,104,"News");

    boombox.connect(&boombox,&radio::quit,&a, &QCoreApplication::quit,Qt::QueuedConnection); //flaw

    do
    {
        qInfo() << "Enter on, off, test or quit";
        QTextStream qtin(stdin);
        QString line = qtin.readLine().trimmed().toUpper();

        if((line == "ON") && (bOn==false)) //if(line == "ON")
        {
            qInfo() << "Turning the radio on";
            for(int i = 0; i< 3; i++)
            {
                station* channel = channels[i];
                boombox.connect(channel,&station::send,&boombox, &radio::listen);
            }
            qInfo() << "Radio is on";
            bOn = true;
        }

        if(line == "OFF")
        {
            qInfo() << "Turning the radio off";
            for(int i = 0; i< 3; i++)
            {
                station* channel = channels[i];
                boombox.disconnect(channel,&station::send,&boombox, &radio::listen);
            }
            qInfo() << "Radio is off";
            bOn = false;
        }

        if(line == "TEST")
        {
            qInfo() << "Testing";
            for(int i = 0; i< 3; i++)
            {
                station* channel = channels[i];
                channel->broadcast("Broadcasting live!");
            }
            qInfo() << "Test complete";
        }

        if(line == "QUIT")
        {
            qInfo() << "Quitting";
            emit boombox.quit();
            break;
        }


    } while(true);


    return a.exec();
}
