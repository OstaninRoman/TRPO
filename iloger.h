#ifndef ILOGER_H
#define ILOGER_H
#include <QObject>

class ILoger:public QObject
{
    Q_OBJECT
public slots:
    virtual void logMessage(const QString& message)=0;
};

#endif // ILOGER_H
