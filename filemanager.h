#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include "file.h"
#include "iloger.h"
#include <QVector>

class FileManager:public QObject
{
    Q_OBJECT
private:
    QVector<File*> trackFile;
    ILoger* loger;
    FileManager(ILoger*);
public:
    FileManager& Instance(ILoger* lg){
        static FileManager fm(lg);
        return fm;
    }
    void addFile(const QString&);
signals:
    void out_text(const QString&);
};

#endif // FILEMANAGER_H
