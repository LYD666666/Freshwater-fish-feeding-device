#ifndef GETCAMIMAGEDATA_H
#define GETCAMIMAGEDATA_H

#include "qdatetime.h"
#include <QObject>
#include <QTcpSocket>
#include <QThread>
#include "data_global.h"
#include "qnetworkaccessmanager.h"

#include <QNetworkReply>
#include <QImage>
#include <QNetworkAccessManager>
#include <QUrl>

class GetCamImageData : public QThread
{
    Q_OBJECT
public:
    explicit GetCamImageData(QObject *parent = nullptr);
    ~GetCamImageData();

    void run();

    QTcpSocket * socket;
    void readServer();
    QString ByteArrayToHexString(QByteArray data);
    QTime time;
    bool condition_flag = true ;
    // 数据量不够
    bool all_data_flag = false;
    // 发送指令
    void GetURL(QString str);

    // 发送指令标志
    bool GetPost_flag = false;

    // 控制指令
    QString url_str ="" ;

    QNetworkAccessManager * pManager;
    QNetworkRequest * request ;
    QSslConfiguration * conf;
    QNetworkReply *pReply;


signals:
    // 显示图片
    void SigShowImage();

};

#endif // GETCAMIMAGEDATA_H
