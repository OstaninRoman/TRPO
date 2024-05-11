#include "filemanager.h"

FileManager::FileManager(ILoger* lg)
{
    if(lg)
    {
        this->loger = lg;
        ILoger::connect(this, &FileManager::out_text, this->loger, &ILoger::logMessage);
    }
}
