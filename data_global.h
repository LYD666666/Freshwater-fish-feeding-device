#ifndef DATA_GLOBAL_H
#define DATA_GLOBAL_H

#include <QMutex>
#include <QByteArray>
#include <QCoreApplication>
#include <QTime>
namespace Data_global
{
    extern QMutex mutex;
    extern QMutex mutex_Image_data;
    extern QTime time;

    // 全部通信数据
    extern QByteArray AllData;

    extern QByteArray Image_data;

    extern void mSleep(int msec);

    // IP
    extern QString IP ;
};

#endif // DATA_GLOBAL_H
