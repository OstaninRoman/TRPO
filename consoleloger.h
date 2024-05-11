#ifndef CONSOLELOGER_H
#define CONSOLELOGER_H
#include "iloger.h"
#include <QTextStream>

class ConsoleLoger:public ILoger
{
    Q_OBJECT
public slots:
    void logMessage(const QString& message) override;
};

#endif // CONSOLELOGER_H
