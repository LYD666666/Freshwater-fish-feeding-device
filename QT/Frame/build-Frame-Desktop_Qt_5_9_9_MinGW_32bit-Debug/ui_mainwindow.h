/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *exit;
    QAction *open_wifi;
    QAction *led;
    QAction *relay;
    QAction *auto_hand;
    QAction *debb;
    QAction *data;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QChartView *graphicsView;
    QLabel *ipcon;
    QLabel *portcon;
    QLineEdit *ip_edi;
    QLineEdit *port_edi;
    QFrame *line;
    QGroupBox *groupBox;
    QLabel *connect_l;
    QPushButton *sermode;
    QLabel *sermode_l;
    QGroupBox *groupBox_2;
    QLabel *wifi_l;
    QFrame *line_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QGroupBox *groupBox_5;
    QLabel *temp_la;
    QLabel *humi_la;
    QLabel *label_9;
    QFrame *line_2;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *light_la;
    QLabel *soil_la;
    QLabel *mq2_la;
    QLabel *rain_la;
    QChartView *graphicsView_2;
    QLabel *time_l;
    QPushButton *charts1_big;
    QPushButton *charts1_small;
    QPushButton *charts1_rest;
    QLabel *setlightNumla;
    QGroupBox *groupBox_3;
    QPushButton *set_light_bt;
    QSlider *horizontalSlider;
    QLabel *setlightNumla_2;
    QGroupBox *groupBox_4;
    QLineEdit *soil_yu_la;
    QLineEdit *rain_yu_la;
    QLineEdit *temp_yu_la;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *set_yu_bt;
    QPushButton *clear_yu_bt;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QLabel *label_12;
    QLineEdit *light_yu_la;
    QPushButton *pushButton_2;
    QPushButton *charts1_rest_2;
    QPushButton *charts1_big_2;
    QPushButton *charts1_small_2;
    QProgressBar *progressBar;
    QSpinBox *spinBox;
    QGroupBox *groupBox_6;
    QLabel *label_5;
    QFrame *line_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(950, 552);
        MainWindow->setStyleSheet(QStringLiteral(""));
        exit = new QAction(MainWindow);
        exit->setObjectName(QStringLiteral("exit"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon);
        exit->setAutoRepeat(true);
        exit->setVisible(true);
        open_wifi = new QAction(MainWindow);
        open_wifi->setObjectName(QStringLiteral("open_wifi"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        open_wifi->setIcon(icon1);
        QFont font;
        open_wifi->setFont(font);
        led = new QAction(MainWindow);
        led->setObjectName(QStringLiteral("led"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/led_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        led->setIcon(icon2);
        relay = new QAction(MainWindow);
        relay->setObjectName(QStringLiteral("relay"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/relay_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        relay->setIcon(icon3);
        auto_hand = new QAction(MainWindow);
        auto_hand->setObjectName(QStringLiteral("auto_hand"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/auto.png"), QSize(), QIcon::Normal, QIcon::Off);
        auto_hand->setIcon(icon4);
        debb = new QAction(MainWindow);
        debb->setObjectName(QStringLiteral("debb"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/app.png"), QSize(), QIcon::Normal, QIcon::Off);
        debb->setIcon(icon5);
        data = new QAction(MainWindow);
        data->setObjectName(QStringLiteral("data"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/data.png"), QSize(), QIcon::Normal, QIcon::Off);
        data->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(752, 258, 30, 30));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/clearS.png);"));
        graphicsView = new QChartView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(440, 60, 471, 241));
        graphicsView->setStyleSheet(QStringLiteral(""));
        ipcon = new QLabel(centralwidget);
        ipcon->setObjectName(QStringLiteral("ipcon"));
        ipcon->setGeometry(QRect(24, 64, 35, 35));
        ipcon->setStyleSheet(QLatin1String("border-image: url(:/ip.png);\n"
""));
        portcon = new QLabel(centralwidget);
        portcon->setObjectName(QStringLiteral("portcon"));
        portcon->setGeometry(QRect(24, 104, 35, 35));
        portcon->setStyleSheet(QStringLiteral("border-image: url(:/duan.png);"));
        ip_edi = new QLineEdit(centralwidget);
        ip_edi->setObjectName(QStringLiteral("ip_edi"));
        ip_edi->setGeometry(QRect(68, 70, 113, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(11);
        ip_edi->setFont(font1);
        port_edi = new QLineEdit(centralwidget);
        port_edi->setObjectName(QStringLiteral("port_edi"));
        port_edi->setGeometry(QRect(68, 110, 113, 22));
        port_edi->setFont(font1);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(30, 100, 153, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(18, 40, 181, 111));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        groupBox->setFont(font2);
        connect_l = new QLabel(centralwidget);
        connect_l->setObjectName(QStringLiteral("connect_l"));
        connect_l->setGeometry(QRect(57, 206, 16, 16));
        connect_l->setStyleSheet(QStringLiteral("border-image: url(:/discon.png);"));
        sermode = new QPushButton(centralwidget);
        sermode->setObjectName(QStringLiteral("sermode"));
        sermode->setGeometry(QRect(25, 186, 35, 35));
        sermode->setStyleSheet(QStringLiteral("border-image: url(:/server.png);"));
        sermode->setAutoDefault(false);
        sermode->setFlat(false);
        sermode_l = new QLabel(centralwidget);
        sermode_l->setObjectName(QStringLiteral("sermode_l"));
        sermode_l->setGeometry(QRect(78, 200, 81, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(10);
        sermode_l->setFont(font3);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 160, 181, 81));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font4.setPointSize(12);
        groupBox_2->setFont(font4);
        groupBox_2->setFlat(false);
        wifi_l = new QLabel(groupBox_2);
        wifi_l->setObjectName(QStringLiteral("wifi_l"));
        wifi_l->setGeometry(QRect(137, 25, 40, 40));
        wifi_l->setStyleSheet(QStringLiteral("border-image: url(:/wifi_off.png);"));
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(128, 17, 3, 55));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 10, 511, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font5.setPointSize(20);
        label_4->setFont(font5);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(240, 100, 35, 35));
        label_6->setStyleSheet(QStringLiteral("border-image: url(:/temp.png);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(306, 100, 35, 35));
        label_7->setStyleSheet(QStringLiteral("border-image: url(:/humi.png);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(240, 176, 35, 35));
        label_8->setStyleSheet(QStringLiteral("border-image: url(:/humi_soil.png);"));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(230, 66, 181, 181));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font6.setPointSize(13);
        groupBox_5->setFont(font6);
        groupBox_5->setAlignment(Qt::AlignCenter);
        temp_la = new QLabel(groupBox_5);
        temp_la->setObjectName(QStringLiteral("temp_la"));
        temp_la->setGeometry(QRect(11, 77, 42, 16));
        QFont font7;
        font7.setPointSize(11);
        temp_la->setFont(font7);
        humi_la = new QLabel(groupBox_5);
        humi_la->setObjectName(QStringLiteral("humi_la"));
        humi_la->setGeometry(QRect(69, 77, 42, 16));
        humi_la->setFont(font7);
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 34, 35, 35));
        label_9->setStyleSheet(QStringLiteral("border-image: url(:/light.png);"));
        line_2 = new QFrame(groupBox_5);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 100, 155, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(125, 110, 35, 35));
        label_11->setStyleSheet(QStringLiteral("border-image: url(:/rain.png);"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 110, 35, 35));
        label_10->setStyleSheet(QStringLiteral("border-image: url(:/mq2.png);"));
        light_la = new QLabel(groupBox_5);
        light_la->setObjectName(QStringLiteral("light_la"));
        light_la->setGeometry(QRect(125, 77, 42, 16));
        light_la->setFont(font7);
        soil_la = new QLabel(groupBox_5);
        soil_la->setObjectName(QStringLiteral("soil_la"));
        soil_la->setGeometry(QRect(10, 153, 42, 16));
        soil_la->setFont(font7);
        mq2_la = new QLabel(groupBox_5);
        mq2_la->setObjectName(QStringLiteral("mq2_la"));
        mq2_la->setGeometry(QRect(68, 153, 42, 16));
        mq2_la->setFont(font7);
        rain_la = new QLabel(groupBox_5);
        rain_la->setObjectName(QStringLiteral("rain_la"));
        rain_la->setGeometry(QRect(128, 153, 42, 16));
        rain_la->setFont(font7);
        graphicsView_2 = new QChartView(centralwidget);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(10, 246, 431, 231));
        time_l = new QLabel(centralwidget);
        time_l->setObjectName(QStringLiteral("time_l"));
        time_l->setGeometry(QRect(720, 0, 171, 51));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(255, 0, 0, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        time_l->setPalette(palette);
        QFont font8;
        font8.setFamily(QString::fromUtf8("\346\226\271\346\255\243\350\210\222\344\275\223"));
        font8.setPointSize(20);
        time_l->setFont(font8);
        time_l->setAlignment(Qt::AlignCenter);
        charts1_big = new QPushButton(centralwidget);
        charts1_big->setObjectName(QStringLiteral("charts1_big"));
        charts1_big->setGeometry(QRect(482, 260, 25, 25));
        charts1_big->setStyleSheet(QStringLiteral("border-image: url(:/big.png);"));
        charts1_small = new QPushButton(centralwidget);
        charts1_small->setObjectName(QStringLiteral("charts1_small"));
        charts1_small->setGeometry(QRect(581, 260, 25, 25));
        charts1_small->setStyleSheet(QStringLiteral("border-image: url(:/small.png);"));
        charts1_rest = new QPushButton(centralwidget);
        charts1_rest->setObjectName(QStringLiteral("charts1_rest"));
        charts1_rest->setGeometry(QRect(530, 260, 25, 25));
        charts1_rest->setStyleSheet(QStringLiteral("border-image: url(:/rest.png);"));
        setlightNumla = new QLabel(centralwidget);
        setlightNumla->setObjectName(QStringLiteral("setlightNumla"));
        setlightNumla->setGeometry(QRect(524, 332, 54, 12));
        QFont font9;
        font9.setPointSize(12);
        setlightNumla->setFont(font9);
        setlightNumla->setAlignment(Qt::AlignCenter);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(454, 307, 211, 93));
        groupBox_3->setFont(font6);
        groupBox_3->setAlignment(Qt::AlignCenter);
        set_light_bt = new QPushButton(groupBox_3);
        set_light_bt->setObjectName(QStringLiteral("set_light_bt"));
        set_light_bt->setGeometry(QRect(70, 60, 66, 25));
        QPalette palette1;
        set_light_bt->setPalette(palette1);
        set_light_bt->setFont(font3);
        set_light_bt->setStyleSheet(QStringLiteral(""));
        horizontalSlider = new QSlider(groupBox_3);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 40, 191, 22));
        horizontalSlider->setStyleSheet(QStringLiteral(""));
        horizontalSlider->setOrientation(Qt::Horizontal);
        setlightNumla_2 = new QLabel(centralwidget);
        setlightNumla_2->setObjectName(QStringLiteral("setlightNumla_2"));
        setlightNumla_2->setGeometry(QRect(560, 330, 21, 16));
        setlightNumla_2->setFont(font9);
        setlightNumla_2->setAlignment(Qt::AlignCenter);
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(710, 305, 201, 167));
        groupBox_4->setFont(font4);
        groupBox_4->setAlignment(Qt::AlignCenter);
        soil_yu_la = new QLineEdit(groupBox_4);
        soil_yu_la->setObjectName(QStringLiteral("soil_yu_la"));
        soil_yu_la->setGeometry(QRect(100, 30, 71, 21));
        rain_yu_la = new QLineEdit(groupBox_4);
        rain_yu_la->setObjectName(QStringLiteral("rain_yu_la"));
        rain_yu_la->setGeometry(QRect(100, 58, 71, 21));
        temp_yu_la = new QLineEdit(groupBox_4);
        temp_yu_la->setObjectName(QStringLiteral("temp_yu_la"));
        temp_yu_la->setGeometry(QRect(100, 88, 71, 21));
        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(176, 33, 21, 16));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(177, 61, 21, 16));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(177, 89, 21, 16));
        set_yu_bt = new QPushButton(groupBox_4);
        set_yu_bt->setObjectName(QStringLiteral("set_yu_bt"));
        set_yu_bt->setGeometry(QRect(29, 138, 30, 30));
        set_yu_bt->setFont(font6);
        set_yu_bt->setStyleSheet(QStringLiteral("border-image: url(:/set.png);"));
        clear_yu_bt = new QPushButton(groupBox_4);
        clear_yu_bt->setObjectName(QStringLiteral("clear_yu_bt"));
        clear_yu_bt->setGeometry(QRect(108, 137, 38, 32));
        clear_yu_bt->setFont(font4);
        clear_yu_bt->setStyleSheet(QStringLiteral("border-image: url(:/clear_yu.png);"));
        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 30, 83, 19));
        checkBox->setFont(font9);
        checkBox_2 = new QCheckBox(groupBox_4);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 58, 83, 19));
        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 88, 83, 19));
        checkBox_4 = new QCheckBox(groupBox_4);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(10, 118, 83, 19));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(177, 119, 21, 16));
        light_yu_la = new QLineEdit(groupBox_4);
        light_yu_la->setObjectName(QStringLiteral("light_yu_la"));
        light_yu_la->setGeometry(QRect(100, 118, 71, 21));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(311, 433, 30, 30));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/clearS.png);"));
        charts1_rest_2 = new QPushButton(centralwidget);
        charts1_rest_2->setObjectName(QStringLiteral("charts1_rest_2"));
        charts1_rest_2->setGeometry(QRect(89, 433, 25, 25));
        charts1_rest_2->setStyleSheet(QStringLiteral("border-image: url(:/rest.png);"));
        charts1_big_2 = new QPushButton(centralwidget);
        charts1_big_2->setObjectName(QStringLiteral("charts1_big_2"));
        charts1_big_2->setGeometry(QRect(41, 433, 25, 25));
        charts1_big_2->setStyleSheet(QStringLiteral("border-image: url(:/big.png);"));
        charts1_small_2 = new QPushButton(centralwidget);
        charts1_small_2->setObjectName(QStringLiteral("charts1_small_2"));
        charts1_small_2->setGeometry(QRect(140, 433, 25, 25));
        charts1_small_2->setStyleSheet(QStringLiteral("border-image: url(:/small.png);"));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(460, 438, 118, 23));
        progressBar->setValue(24);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(587, 438, 42, 22));
        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(450, 410, 216, 61));
        groupBox_6->setFont(font6);
        groupBox_6->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(185, 30, 16, 16));
        QFont font10;
        font10.setPointSize(15);
        label_5->setFont(font10);
        line_4 = new QFrame(groupBox_6);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(130, 21, 3, 34));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        groupBox_6->raise();
        groupBox_4->raise();
        groupBox_3->raise();
        graphicsView->raise();
        groupBox_5->raise();
        groupBox_2->raise();
        groupBox->raise();
        ipcon->raise();
        portcon->raise();
        ip_edi->raise();
        port_edi->raise();
        line->raise();
        connect_l->raise();
        sermode->raise();
        sermode_l->raise();
        label_4->raise();
        pushButton->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        graphicsView_2->raise();
        time_l->raise();
        charts1_big->raise();
        charts1_small->raise();
        charts1_rest->raise();
        setlightNumla->raise();
        setlightNumla_2->raise();
        pushButton_2->raise();
        charts1_rest_2->raise();
        charts1_big_2->raise();
        charts1_small_2->raise();
        progressBar->raise();
        spinBox->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 950, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        QFont font11;
        font11.setStyleStrategy(QFont::PreferAntialias);
        toolBar->setFont(font11);
        toolBar->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(open_wifi);
        toolBar->addSeparator();
        toolBar->addAction(led);
        toolBar->addAction(relay);
        toolBar->addAction(auto_hand);
        toolBar->addSeparator();
        toolBar->addAction(data);
        toolBar->addAction(debb);
        toolBar->addSeparator();
        toolBar->addAction(exit);

        retranslateUi(MainWindow);

        sermode->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        exit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        open_wifi->setText(QApplication::translate("MainWindow", "NetSw", Q_NULLPTR));
        led->setText(QApplication::translate("MainWindow", "Led", Q_NULLPTR));
        relay->setText(QApplication::translate("MainWindow", "Relay", Q_NULLPTR));
        auto_hand->setText(QApplication::translate("MainWindow", "RunMode", Q_NULLPTR));
        debb->setText(QApplication::translate("MainWindow", "Debug", Q_NULLPTR));
        data->setText(QApplication::translate("MainWindow", "data", Q_NULLPTR));
        pushButton->setText(QString());
        ipcon->setText(QString());
        portcon->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "\347\275\221\347\273\234\351\205\215\347\275\256", Q_NULLPTR));
        connect_l->setText(QString());
        sermode->setText(QString());
        sermode_l->setText(QApplication::translate("MainWindow", "\344\270\273\346\234\272\346\250\241\345\274\217", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\250\241\345\274\217\351\200\211\346\213\251", Q_NULLPTR));
        wifi_l->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\345\237\272\344\272\216\347\211\251\350\201\224\347\275\221\347\232\204\347\233\206\346\240\275\346\260\264\345\210\206\350\207\252\345\212\250\344\277\235\346\214\201\347\263\273\347\273\237", Q_NULLPTR));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\346\243\200\346\265\213\351\203\250\345\210\206", Q_NULLPTR));
        temp_la->setText(QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        humi_la->setText(QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        label_9->setText(QString());
        label_11->setText(QString());
        label_10->setText(QString());
        light_la->setText(QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        soil_la->setText(QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        mq2_la->setText(QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        rain_la->setText(QApplication::translate("MainWindow", "N/A", Q_NULLPTR));
        time_l->setText(QApplication::translate("MainWindow", "12\357\274\23200\357\274\23200", Q_NULLPTR));
        charts1_big->setText(QString());
        charts1_small->setText(QString());
        charts1_rest->setText(QString());
        setlightNumla->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\205\211\345\274\272\346\216\247\345\210\266", Q_NULLPTR));
        set_light_bt->setText(QApplication::translate("MainWindow", "\350\256\276\345\256\232", Q_NULLPTR));
        setlightNumla_2->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\351\230\210\345\200\274\350\256\276\345\256\232", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        set_yu_bt->setText(QString());
        clear_yu_bt->setText(QString());
        checkBox->setText(QApplication::translate("MainWindow", "\345\234\237\345\243\244\346\271\277\345\272\246", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "\351\233\250    \346\273\264", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "\346\270\251    \345\272\246", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("MainWindow", "\345\205\211    \345\274\272", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        pushButton_2->setText(QString());
        charts1_rest_2->setText(QString());
        charts1_big_2->setText(QString());
        charts1_small_2->setText(QString());
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\350\223\204\346\260\264\347\212\266\346\200\201", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "s", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
