#include <QCoreApplication>
#include "filemanager.h"
#include "consoleloger.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ILoger* lg = new ConsoleLoger();
    QTextStream cin(stdin);
    int n;
    if(lg)
        lg->logMessage("Input n: ");
    cin >> n;
}
