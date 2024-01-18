#include "getcamimagedata.h"


GetCamImageData::GetCamImageData(QObject *parent)
    : QThread{parent}
{

}

GetCamImageData::~GetCamImageData()
{
    delete socket;
    delete pManager;
    delete request ;
    delete conf ;
}


void GetCamImageData::run()
{
    qDebug()<<"run()";
    socket = new QTcpSocket;
    socket->connectToHost(Data_global::IP,81);
    connect(socket,&QTcpSocket::readyRead,this,&GetCamImageData::readServer,Qt::DirectConnection);
    socket->write("GET /stream HTTP/1.1\r\nConnection:Close\r\n\r\n");

    int index ;
    int image_size;

    pManager = new QNetworkAccessManager;
    request = new QNetworkRequest;;
    conf = new QSslConfiguration;

    // 发送https请求前准备工作;
    *conf = request->sslConfiguration();
    conf->setPeerVerifyMode(QSslSocket::VerifyNone);
    conf->setProtocol(QSsl::TlsV1SslV3);
    request->setSslConfiguration(*conf);

    while (condition_flag) {

        if(GetPost_flag)
        {
            qDebug()<<url_str;
            request->setUrl(QUrl(url_str));
            pReply = pManager->get(*request);
            GetPost_flag = false;
        }

        Data_global::mSleep(1);
        Data_global::mutex.lock();

        if(!all_data_flag)
        {
            index = Data_global::AllData.indexOf("Content-Type: image/jpeg\r\nContent-Length: ");
        }

        if(index >= 0 || all_data_flag)
        {
            if(!all_data_flag)
            {
                Data_global::AllData.remove(0,index+42);
                index = Data_global::AllData.indexOf("\r\n");
                // 取出长度
                image_size= Data_global::AllData.mid(0,index).toInt();

                index = Data_global::AllData.indexOf("\xFF\xD8");


                Data_global::AllData.remove(0,index);
            }
//            // 判断数据是否够
            if(image_size < Data_global::AllData.length())
            {
                Data_global::mutex_Image_data.lock();
                Data_global::Image_data.clear();
                Data_global::Image_data.resize(0);
                //取出图片数据
                Data_global::Image_data.append(Data_global::AllData.mid(0,image_size));
                Data_global::mutex_Image_data.unlock();
                emit SigShowImage();
                all_data_flag = false;
            }
            else
            {
                all_data_flag = true;
            }


        }
        Data_global::mutex.unlock();

    }
    socket->close();
    Data_global::AllData.clear();
    Data_global::AllData.resize(0);
    Data_global::Image_data.clear();
    Data_global::Image_data.resize(0);
    qDebug()<<"Stop run()";


}

void GetCamImageData::readServer()
{
    Data_global::mutex.lock();
    Data_global::AllData.append(this->socket->readAll());
    Data_global::mutex.unlock();

}

QString GetCamImageData::ByteArrayToHexString(QByteArray data)
{
    QString ret(data.toHex().toUpper());
    int len = ret.length()/2;
    for(int i=1;i<len;i++)
    {
        ret.insert(2*i+i-1," ");
    }
    return ret;
}

void GetCamImageData::GetURL(QString str)
{

    url_str = str;
    GetPost_flag = true;

}
