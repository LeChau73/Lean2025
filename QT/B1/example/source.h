#ifndef SOURCE_H
#define SOURCE_H

#include <QObject>
#include <QString>

class Source : public QObject
{
    Q_OBJECT
public:
    explicit Source(QObject *parent = nullptr);

    void Test();

signals:
    void SignalNotify(QString message);

};

#endif // SOURCE_H
