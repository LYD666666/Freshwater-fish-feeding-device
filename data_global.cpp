#include "data_global.h"


namespace Data_global
{
    QMutex mutex;
    QMutex mutex_Image_data;
    QTime time;

    QByteArray AllData;
    QByteArray Image_data;
    void mSleep(int msec)
    {
        QTime dieTime = QTime::currentTime().addMSecs(msec);
        while( QTime::currentTime() <dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }

    QString IP ;
}
