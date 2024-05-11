#include "file.h"

File::File(const QString& Path)
{
    this->path = Path;
    QFileInfo f(path);
    exist = f.exists();
    size = (int)f.size();
}

void File::update()
{
    QFileInfo f(path);
    bool ex = f.exists();
    int tempSize = (int)f.size();
    if(ex != exist || tempSize != size)
    {
        exist = ex;
        size = tempSize;
    }
}
