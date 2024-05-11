#include "consoleloger.h"

void ConsoleLoger::logMessage(const QString& message)
{
    QTextStream cout(stdout);
    cout << message << Qt::endl;
}
