#include "mainwindow.h"
#include <QChartView>
#include <QLineSeries>          //线条类
#include <QtMath>

#include <QTimer>               //时间类
#include <QDateTime>
#include <QDateTimeAxis>        //时间坐标轴类
#include <QValueAxis>           //普通坐标轴类
#include <QTextCodec>
#include <QMessageBox>
#include <string>
#include <QDebug>

QT_CHARTS_USE_NAMESPACE

#include "ui_mainwindow.h"


bool MS = true;//t 主机
bool flag_Sw=false;//
bool run_mode=true;//自动

//继电器
bool relaySw=false;

//本机发送标志位
bool flag_Send=0;

//温湿度变量
float temp_data;
float humi_data;
float light_data;
float soil_data;
float mq2_data;
float rain_data;
float weight_data;


/*阈值*/
QString EnsoilHumi;
QString Enrain;
QString Entemp;
QString Enlight;

//光强
short light_pwm;

//发送缓冲区
extern QString strbuf;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //创建表一
    creatChart();

    //创建定时器 表格更新
    timer=new QTimer(this);
    timer->start(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(ReData_Slot()));

    // 创建定时器  发送更新
    timer_send = new QTimer(this);
    timer_send->start(20);
    connect(timer_send,SIGNAL(timeout()),this,SLOT(timer_send_Slot()));

    //网络设置

    //默认使用主机模式，等待新的连接
    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(newConnection_Slot()));


    //工具栏大小设置
     QSize si;
     si.setWidth(40);
     si.setHeight(40);
     ui->toolBar->setIconSize(si);


    ui->ip_edi->setText("192.168.83.86");
    ui->port_edi->setText("8080");

    /*数据库内容*/
    //初始化数据库
    dbui = new database;

    setWindowTitle("--Intelligent Terminal Of Internet Of Things-- ");
}

/*网络部分*/
//检测是否有新连接进来
void MainWindow::newConnection_Slot(){

    tcpSocket=tcpServer->nextPendingConnection();//得到通信的套接字对象
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readyRead_Slot()));
    connect(tcpSocket,SIGNAL(disconnected()),this,SLOT(disconnected_Slot()));
    ui->connect_l->setStyleSheet("border-image: url(:/connect.png)");
}

//客户机连接
void MainWindow::connected_Slot(){

    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readyRead_Slot()));
    ui->connect_l->setStyleSheet("border-image: url(:/connect.png)");
    connect(tcpSocket,SIGNAL(disconnected()),this,SLOT(disconnected_Slot()));
}

//文本显示
void MainWindow::ToUpdata_Lab(QString Stemp,QString Shumi,QString Slight,QString Ssoil,QString Smq2,QString Srain){
    ui->temp_la->setText(Stemp+"g");
    ui->humi_la->setText(Shumi+"g");
     ui->light_la->setText(Slight+"g");

     ui->soil_la->setText(Ssoil+"%");
     ui->mq2_la->setText(Smq2+"min");
     ui->rain_la->setText(Srain+"min");


}

//数据解析
void MainWindow::BackDataParsing(QString strBuf){

    //查找是否为参数;  -1表示没有该子串
     if(strBuf.startsWith("Params")){

          //表一数据
          QString str = strBuf.mid(strBuf.indexOf("BeforeWeight:")+((QString)"BeforeWeight:").length(),strBuf.indexOf("AfterWeight:")-strBuf.indexOf("BeforeWeight:")-((QString)"BeforeWeight:").length()-1);
          tcpSocket->write(str.toUtf8());
          tcpSocket->write("->");

          QString st2 = strBuf.mid(strBuf.indexOf("AfterWeight:")+((QString)"AfterWeight:").length(),strBuf.indexOf("RealWeight:")-strBuf.indexOf("AfterWeight:")-((QString)"AfterWeight:").length()-1);
          tcpSocket->write(st2.toUtf8());
          tcpSocket->write("->");

          QString st3 = strBuf.mid(strBuf.indexOf("RealWeight:")+((QString)"RealWeight:").length(),strBuf.indexOf("RecoveryRate:")-strBuf.indexOf("RealWeight:")-((QString)"RealWeight:").length()-1);
          tcpSocket->write(st3.toUtf8());
          tcpSocket->write("->");


          //表二数据
          QString st4 = strBuf.mid(strBuf.indexOf("RecoveryRate:")+((QString)"RecoveryRate:").length(),strBuf.indexOf("WeightTime:")-strBuf.indexOf("RecoveryRate:")-((QString)"RecoveryRate:").length()-1);
          tcpSocket->write(st4.toUtf8());
          tcpSocket->write("->");

          QString st5 = strBuf.mid(strBuf.indexOf("WeightTime:")+((QString)"WeightTime:").length(),strBuf.indexOf("RecoveryTime:")-strBuf.indexOf("WeightTime:")-((QString)"WeightTime:").length()-1);
          tcpSocket->write(st5.toUtf8());
          tcpSocket->write("->");

          QString st6 = strBuf.mid(strBuf.indexOf("RecoveryTime:")+((QString)"RecoveryTime:").length(),strBuf.indexOf("}")-strBuf.indexOf("RecoveryTime:")-((QString)"RecoveryTime:").length()-1);
          tcpSocket->write(st6.toUtf8());


          //更新至表格
           temp_data = str.toInt();
           humi_data = st2.toInt();
           light_data = st3.toInt();

           soil_data = st4.toInt();
           mq2_data = st5.toInt();
           rain_data = st6.toInt();

         //送入标签
         ToUpdata_Lab(str,st2,st3,st4,st5,st6);

         //送入数据库
          dbui->UpdataToDataBase(str,st2,st3,st4,st5,st6);
   }
    else
     {
         QString str = strBuf.mid(strBuf.indexOf("weight:")+((QString)"weight:").length());
         tcpSocket->write(str.toUtf8());
         tcpSocket->write("->");

         weight_data = str.toFloat();
     }
}

//收到的数据放入接受框   解析
void MainWindow::readyRead_Slot(){

    QByteArray receiveDate;
    QTextCodec *tc = QTextCodec::codecForName("GBK");  //编码转换,必须转换编码，否则乱码

    while(!tcpSocket->atEnd()){
        receiveDate = tcpSocket->readAll();
    }

    if (!receiveDate.isEmpty())
    {
        QString strBuf=tc->toUnicode(receiveDate);         //编码转换,必须转换编码，否则乱码
        //传入界面二数据
        deb->DisplayData(strBuf);
        //解析到可视化曲线图和文本
        BackDataParsing(strBuf);
    }
    receiveDate.clear();
}

//服务器或客户机连接状态
void MainWindow::disconnected_Slot(){

    tcpSocket->close();
    ui->connect_l->setStyleSheet("border-image: url(:/discon.png)");
}


MainWindow::~MainWindow()
{
    delete ui;
}

//发送标志位
void MainWindow::ttest(){
    flag_Send=1;
}

//创建chart
void MainWindow::creatChart()
{
    QChart *qchart = new QChart();
    //把chart放到容器里
    ui->graphicsView->setChart(qchart);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing); //设置抗锯齿

    //创建两条线
    QLineSeries *series0 = new QLineSeries;

    //设置名字
    series0->setName("当前饲料重量");

    //把线条放到chart里
    qchart->addSeries(series0);

    //创建x 坐标
    QDateTimeAxis *axisX = new QDateTimeAxis;

    //格式
    axisX->setFormat("hh:mm:ss");
    //设置竖条数量
    axisX->setTickCount(5);

    //设置坐标名称
    axisX->setTitleText("time(sec)");

    qchart->setAxisX(axisX,series0);


    //创建y坐标
    QValueAxis  *axisY = new QValueAxis;
    axisY->setRange(0,500);
    axisY->setTickCount(5);

    qchart->setAxisY(axisY,series0);


    qchart->setDropShadowEnabled(true);

    //初始化坐标
         //设置最大值坐标值 系统时间当前时间
    qchart->axisX()->setMin(QDateTime::currentDateTime().addSecs(0));
         //设置最大值坐标值 系统时间后5*30秒
    qchart->axisX()->setMax(QDateTime::currentDateTime().addSecs(5*30));

}

//表刷新
void MainWindow::DisplayChart1(){

    //获取当前时间
    QDateTime currentTime = QDateTime::currentDateTime();

    //获取初始化的qchart
    QChart *qchart =(QChart *)ui->graphicsView->chart();
    //获取初始化的series;
    QLineSeries *series0 = (QLineSeries *)ui->graphicsView->chart()->series().at(0);

    series0->append(currentTime.toMSecsSinceEpoch(),weight_data);

    qchart->axisX()->setMin(QDateTime::currentDateTime().addSecs(-5*30));
    qchart->axisX()->setMax(QDateTime::currentDateTime().addSecs(5*30));
}

//时间刷新
void MainWindow::ReData_Slot(){
    static int timer=0;

    DisplayChart1();


    //temp_data

    //当前时间
    ui->time_l->setText(QTime::currentTime().toString("hh:mm:ss"));

}

void MainWindow::timer_send_Slot(){
    if(flag_Send==1){
        flag_Send=0;

      tcpSocket->write(strbuf.toLocal8Bit().data());
    }
}



//主副机切换
void MainWindow::on_sermode_clicked()
{
    if(!flag_Sw)
    {
       //全关闭
       tcpServer->close();
       tcpSocket->close();
       //客户机
       if(MS){
           MS=false;
           ui->sermode_l->setText("客户机模式");
           ui->sermode->setStyleSheet("border-image: url(:/client.png);");
       }

       else//主机
       {
           MS=true;
           ui->sermode_l->setText("主机模式");
           ui->sermode->setStyleSheet("border-image: url(:/server.png);");
       }
    }
    else
       QMessageBox::critical(this,"提示","请先关闭网络，再切换模式类型");
}



//总网络开关
void MainWindow::on_open_wifi_triggered()
{
   // ui->open_wifi->setIcon(QIcon(":open.png"));

    flag_Sw=!flag_Sw;

    if(flag_Sw){
        //打开
        //ui->switch_bt->setStyleSheet("border-image: url(:/open.png);");
        ui->wifi_l->setStyleSheet("border-image: url(:/wifi_on.png);");
        ui->open_wifi->setIcon(QIcon(":open.png"));

        //选择主机
        if(MS)
        {
            tcpServer->listen(QHostAddress::Any,ui->port_edi->text().toUInt());
        }
        else//客户机
        {
            tcpSocket->connectToHost(ui->ip_edi->text(),ui->port_edi->text().toUInt());
            connect(tcpSocket,SIGNAL(connected()),this,SLOT(connected_Slot()));
        }
    }else{
        //关闭
        //ui->switch_bt->setStyleSheet("border-image: url(:/close.png);");
        ui->wifi_l->setStyleSheet("border-image: url(:/wifi_off.png);");
        ui->open_wifi->setIcon(QIcon(":close.png"));

        tcpServer->close();
        tcpSocket->close();
    }
}

//led 开关
void MainWindow::on_led_triggered()
{
    static bool ledSw=false;
    ledSw=!ledSw;

    if(ledSw){
        ui->led->setIcon(QIcon(":/led_on.png"));
         tcpSocket->write("led_on");
    }
    else{
         ui->led->setIcon(QIcon(":/led_off.png"));
          tcpSocket->write("led_off");
    }

}
//继电器开关
void MainWindow::on_relay_triggered()
{

    relaySw=!relaySw;

    if(relaySw){
        ui->relay->setIcon(QIcon(":/relay_on.png"));
         tcpSocket->write("relay_on");
    }
    else{
         ui->relay->setIcon(QIcon(":/relay_off.png"));
         tcpSocket->write("relay_off");
    }

}
//run mode
void MainWindow::on_auto_hand_triggered()
{
    run_mode=!run_mode;

    if(run_mode){

        ui->auto_hand->setIcon(QIcon(":/auto.png"));
       tcpSocket->write("auto_mode");
    }
    else{
        //手动
         ui->auto_hand->setIcon(QIcon(":/hand.png"));
         tcpSocket->write("hand_mode");
    }
}
//调出调试窗口
void MainWindow::on_debb_triggered()
{
    deb->show();
}
//退出主窗口
void MainWindow::on_exit_triggered()
{
    this->close();
}

/*表格控件*/
void MainWindow::on_charts1_big_clicked()
{
    ui->graphicsView->chart()->zoom(1.2);
}

void MainWindow::on_charts1_small_clicked()
{
    ui->graphicsView->chart()->zoom(0.8);
}

void MainWindow::on_charts1_rest_clicked()
{
    ui->graphicsView->chart()->zoomReset();
}

//清空表一数据
void MainWindow::on_pushButton_clicked()
{
    QLineSeries *series0 = (QLineSeries *)ui->graphicsView->chart()->series().at(0);

    series0->clear();
}


/*
short soilHumi_threshold;
short rain_threshold;
short temp_threshold;

*/

//复选框  2选中 0未选中
void MainWindow::on_checkBox_stateChanged(int arg1)
{
    qDebug()<<arg1;
    if(arg1==2)
        EnsoilHumi="enable";
    else
        EnsoilHumi="disable";
}

void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    qDebug()<<arg1;

    if(arg1==2)
         Enrain="enable";
    else
         Enrain="disable";
}

void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
     qDebug()<<arg1;

     if(arg1==2)
          Entemp="enable";
     else
          Entemp="disable";
}

void MainWindow::on_checkBox_4_stateChanged(int arg1)
{

    if(arg1==2)
         Enlight="enable";
    else
         Enlight="disable";
}

//清空内容
void MainWindow::on_clear_yu_bt_clicked()
{
     ui->checkBox->setChecked(false);
     ui->checkBox_2->setChecked(false);
     ui->checkBox_3->setChecked(false);
     ui->checkBox_4->setChecked(false);

     ui->soil_yu_la->clear();
     ui->temp_yu_la->clear();
     ui->rain_yu_la->clear();
     ui->light_yu_la->clear();

}
void MainWindow::on_set_yu_bt_clicked()
{
    QString sendThrshold;

    sendThrshold = EnsoilHumi + "{" + "temp:"+ ui->soil_yu_la->text()+","+
                        + " " + "alarm_timing:"+ ui->rain_yu_la->text()+","+
                        + " " + "alarm_minute:"+ ui->temp_yu_la->text()+","+
                        + " " + "ration:"+ui->light_yu_la->text()+"}";

    tcpSocket->write(sendThrshold.toLocal8Bit());

}


//光强控制(tcp传输指令参考)
//void MainWindow::on_set_light_bt_clicked()
//{
//   tcpSocket->write(("Pwm:"+QString::number(light_pwm)).toLocal8Bit());
//}


/*数据库操作*/
void MainWindow::on_data_triggered()
{
    dbui->show();
}

/*显示图像*/
void MainWindow::UiShowImage()
{
    Data_global::mutex_Image_data.lock();

    QImage image ;
    image.loadFromData(Data_global::Image_data,"JPEG");

    if(!image.isNull())
    {
        ui->label_13->setPixmap(QPixmap::fromImage((image.scaled(ui->label_13->width(),ui->label_13->height(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation))));
    }
    else
    {
        qDebug()<<"image" << image << Data_global::AllData.length() << Data_global::Image_data.length() ;
    }
    Data_global::mutex_Image_data.unlock();
}

/*获取网址*/
void MainWindow::GET_URL(QString URL)
{
    if(getCamImageData != NULL && get_url_flag)
    {
        getCamImageData->GetURL(URL);
        get_url_flag = false;
        QTimer::singleShot(200, this, SLOT(SloReGet_url_flag()));

    }
}

/*开始推流*/
void MainWindow::on_pushButton_2_clicked()
{
    if(getCamImageData != NULL || qThread != NULL)
    {
        getCamImageData->condition_flag = false;
        getCamImageData->quit();
        qThread->quit();
        disconnect(getCamImageData,&GetCamImageData::SigShowImage,this,&MainWindow::UiShowImage);
        Data_global::mSleep(500);
        delete this->getCamImageData;
        delete this->qThread;

        this->getCamImageData = NULL;
        this->qThread = NULL;
        ui->pushButton_2->setText("开始推流");

    }
    else
    {

        if(ui->lineEdit->text() == "")
        {
            return;
        }

        Data_global::IP = ui->lineEdit->text();

        this->getCamImageData = new GetCamImageData;  //创建业务对象
        this->qThread = new QThread();  //创建线程
        getCamImageData->moveToThread(qThread); //把业务给线程
        qThread->start(); //启动线程
        getCamImageData->start(); //开始处理
        connect(getCamImageData,&GetCamImageData::SigShowImage,this,&MainWindow::UiShowImage,Qt::DirectConnection);

        ui->pushButton_2->setText("停止推流");
        ui->comboBox->setCurrentIndex(0);

    }

}

/*改变当前下拉框分辨率*/
void MainWindow::on_horizontalSlider_valueChanged(int value)
{

    QString url="http://" + Data_global::IP + "/control?var=quality&val=" + QString::number(value);
    GET_URL(url);

}


/*改变当前滑动质量值*/
void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    QString url;
    if(index == 0 )
    {
        url="http://" + Data_global::IP + "/control?var=framesize&val=" + QString::number(index);
    }
    else
    {
        index += 2;
        url="http://" + Data_global::IP + "/control?var=framesize&val=" + QString::number(index);
    }

    GET_URL(url);
}


void MainWindow::SloReGet_url_flag()
{
    get_url_flag = true;

}
