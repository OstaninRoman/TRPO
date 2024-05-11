#ifndef FILE_H
#define FILE_H

#include <QObject>
#include <QFileInfo>

class File:public QObject
{
    Q_OBJECT
private:
    bool exist;
    int size;
    QString path;
public:
    File(const QString& );
    void update();
    bool getExist(){return exist;}
    int getSize(){return size;}
    QString getPath(){return path;}
};
#endif // FILE_H
