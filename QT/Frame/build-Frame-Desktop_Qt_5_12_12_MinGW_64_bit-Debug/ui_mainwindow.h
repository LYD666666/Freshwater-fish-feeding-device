/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
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
    QGroupBox *groupBox_2;
    QLabel *wifi_l;
    QFrame *line_3;
    QPushButton *sermode;
    QLabel *sermode_l;
    QLabel *connect_l;
    QLabel *label_4;
    QLabel *time_l;
    QPushButton *charts1_big;
    QPushButton *charts1_small;
    QPushButton *charts1_rest;
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QLabel *label_5;
    QSlider *horizontalSlider;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_14;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QLabel *label_13;
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
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(950, 552);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        exit = new QAction(MainWindow);
        exit->setObjectName(QString::fromUtf8("exit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon);
        exit->setAutoRepeat(true);
        exit->setVisible(true);
        open_wifi = new QAction(MainWindow);
        open_wifi->setObjectName(QString::fromUtf8("open_wifi"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        open_wifi->setIcon(icon1);
        QFont font;
        open_wifi->setFont(font);
        led = new QAction(MainWindow);
        led->setObjectName(QString::fromUtf8("led"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/led_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        led->setIcon(icon2);
        relay = new QAction(MainWindow);
        relay->setObjectName(QString::fromUtf8("relay"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/relay_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        relay->setIcon(icon3);
        auto_hand = new QAction(MainWindow);
        auto_hand->setObjectName(QString::fromUtf8("auto_hand"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/auto.png"), QSize(), QIcon::Normal, QIcon::Off);
        auto_hand->setIcon(icon4);
        debb = new QAction(MainWindow);
        debb->setObjectName(QString::fromUtf8("debb"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/app.png"), QSize(), QIcon::Normal, QIcon::Off);
        debb->setIcon(icon5);
        data = new QAction(MainWindow);
        data->setObjectName(QString::fromUtf8("data"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/data.png"), QSize(), QIcon::Normal, QIcon::Off);
        data->setIcon(icon6);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(820, 220, 30, 30));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/clearS.png);"));
        graphicsView = new QChartView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(440, 50, 421, 221));
        graphicsView->setStyleSheet(QString::fromUtf8(""));
        ipcon = new QLabel(centralwidget);
        ipcon->setObjectName(QString::fromUtf8("ipcon"));
        ipcon->setGeometry(QRect(24, 64, 35, 35));
        ipcon->setStyleSheet(QString::fromUtf8("border-image: url(:/ip.png);\n"
""));
        portcon = new QLabel(centralwidget);
        portcon->setObjectName(QString::fromUtf8("portcon"));
        portcon->setGeometry(QRect(24, 104, 35, 35));
        portcon->setStyleSheet(QString::fromUtf8("border-image: url(:/duan.png);"));
        ip_edi = new QLineEdit(centralwidget);
        ip_edi->setObjectName(QString::fromUtf8("ip_edi"));
        ip_edi->setGeometry(QRect(68, 70, 113, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(11);
        ip_edi->setFont(font1);
        port_edi = new QLineEdit(centralwidget);
        port_edi->setObjectName(QString::fromUtf8("port_edi"));
        port_edi->setGeometry(QRect(68, 110, 113, 22));
        port_edi->setFont(font1);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(30, 100, 153, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(18, 40, 181, 111));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        groupBox->setFont(font2);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(240, 60, 181, 81));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(12);
        groupBox_2->setFont(font3);
        groupBox_2->setFlat(false);
        wifi_l = new QLabel(groupBox_2);
        wifi_l->setObjectName(QString::fromUtf8("wifi_l"));
        wifi_l->setGeometry(QRect(137, 25, 40, 40));
        wifi_l->setStyleSheet(QString::fromUtf8("border-image: url(:/wifi_off.png);"));
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(128, 17, 3, 55));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        sermode = new QPushButton(groupBox_2);
        sermode->setObjectName(QString::fromUtf8("sermode"));
        sermode->setGeometry(QRect(0, 40, 35, 35));
        sermode->setStyleSheet(QString::fromUtf8("border-image: url(:/server.png);"));
        sermode->setAutoDefault(false);
        sermode->setFlat(false);
        sermode_l = new QLabel(groupBox_2);
        sermode_l->setObjectName(QString::fromUtf8("sermode_l"));
        sermode_l->setGeometry(QRect(40, 60, 81, 16));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font4.setPointSize(10);
        sermode_l->setFont(font4);
        connect_l = new QLabel(groupBox_2);
        connect_l->setObjectName(QString::fromUtf8("connect_l"));
        connect_l->setGeometry(QRect(40, 40, 16, 16));
        connect_l->setStyleSheet(QString::fromUtf8("border-image: url(:/discon.png);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 10, 511, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font5.setPointSize(20);
        label_4->setFont(font5);
        time_l = new QLabel(centralwidget);
        time_l->setObjectName(QString::fromUtf8("time_l"));
        time_l->setGeometry(QRect(590, 0, 171, 51));
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
        QFont font6;
        font6.setFamily(QString::fromUtf8("\346\226\271\346\255\243\350\210\222\344\275\223"));
        font6.setPointSize(20);
        time_l->setFont(font6);
        time_l->setAlignment(Qt::AlignCenter);
        charts1_big = new QPushButton(centralwidget);
        charts1_big->setObjectName(QString::fromUtf8("charts1_big"));
        charts1_big->setGeometry(QRect(480, 230, 25, 25));
        charts1_big->setStyleSheet(QString::fromUtf8("border-image: url(:/big.png);"));
        charts1_small = new QPushButton(centralwidget);
        charts1_small->setObjectName(QString::fromUtf8("charts1_small"));
        charts1_small->setGeometry(QRect(560, 230, 25, 25));
        charts1_small->setStyleSheet(QString::fromUtf8("border-image: url(:/small.png);"));
        charts1_rest = new QPushButton(centralwidget);
        charts1_rest->setObjectName(QString::fromUtf8("charts1_rest"));
        charts1_rest->setGeometry(QRect(520, 230, 25, 25));
        charts1_rest->setStyleSheet(QString::fromUtf8("border-image: url(:/rest.png);"));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(650, 290, 221, 167));
        groupBox_4->setFont(font3);
        groupBox_4->setAlignment(Qt::AlignCenter);
        soil_yu_la = new QLineEdit(groupBox_4);
        soil_yu_la->setObjectName(QString::fromUtf8("soil_yu_la"));
        soil_yu_la->setGeometry(QRect(100, 30, 71, 21));
        rain_yu_la = new QLineEdit(groupBox_4);
        rain_yu_la->setObjectName(QString::fromUtf8("rain_yu_la"));
        rain_yu_la->setGeometry(QRect(100, 58, 71, 21));
        temp_yu_la = new QLineEdit(groupBox_4);
        temp_yu_la->setObjectName(QString::fromUtf8("temp_yu_la"));
        temp_yu_la->setGeometry(QRect(100, 88, 71, 21));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(176, 33, 31, 16));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(177, 61, 21, 16));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(177, 89, 21, 16));
        set_yu_bt = new QPushButton(groupBox_4);
        set_yu_bt->setObjectName(QString::fromUtf8("set_yu_bt"));
        set_yu_bt->setGeometry(QRect(29, 138, 30, 30));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font7.setPointSize(13);
        set_yu_bt->setFont(font7);
        set_yu_bt->setStyleSheet(QString::fromUtf8("border-image: url(:/set.png);"));
        clear_yu_bt = new QPushButton(groupBox_4);
        clear_yu_bt->setObjectName(QString::fromUtf8("clear_yu_bt"));
        clear_yu_bt->setGeometry(QRect(108, 137, 38, 32));
        clear_yu_bt->setFont(font3);
        clear_yu_bt->setStyleSheet(QString::fromUtf8("border-image: url(:/clear_yu.png);"));
        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 30, 83, 19));
        checkBox->setFont(font3);
        checkBox_2 = new QCheckBox(groupBox_4);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 58, 83, 19));
        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 88, 83, 19));
        checkBox_4 = new QCheckBox(groupBox_4);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(10, 118, 83, 19));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(177, 119, 21, 16));
        light_yu_la = new QLineEdit(groupBox_4);
        light_yu_la->setObjectName(QString::fromUtf8("light_yu_la"));
        light_yu_la->setGeometry(QRect(100, 118, 71, 21));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 150, 401, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(10);
        horizontalSlider->setMaximum(63);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 430, 401, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_2->addWidget(label_14);

        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_2 = new QPushButton(layoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 190, 401, 241));
        label_13->setAlignment(Qt::AlignCenter);
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(450, 290, 181, 181));
        groupBox_5->setFont(font7);
        groupBox_5->setAlignment(Qt::AlignCenter);
        temp_la = new QLabel(groupBox_5);
        temp_la->setObjectName(QString::fromUtf8("temp_la"));
        temp_la->setGeometry(QRect(11, 77, 42, 16));
        temp_la->setFont(font1);
        humi_la = new QLabel(groupBox_5);
        humi_la->setObjectName(QString::fromUtf8("humi_la"));
        humi_la->setGeometry(QRect(69, 77, 42, 16));
        humi_la->setFont(font1);
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(130, 34, 35, 35));
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(:/light.png);"));
        line_2 = new QFrame(groupBox_5);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 100, 155, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(125, 110, 35, 35));
        label_11->setStyleSheet(QString::fromUtf8("border-image: url(:/rain.png);"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(70, 110, 35, 35));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/mq2.png);"));
        light_la = new QLabel(groupBox_5);
        light_la->setObjectName(QString::fromUtf8("light_la"));
        light_la->setGeometry(QRect(125, 77, 42, 16));
        light_la->setFont(font1);
        soil_la = new QLabel(groupBox_5);
        soil_la->setObjectName(QString::fromUtf8("soil_la"));
        soil_la->setGeometry(QRect(10, 153, 42, 16));
        soil_la->setFont(font1);
        mq2_la = new QLabel(groupBox_5);
        mq2_la->setObjectName(QString::fromUtf8("mq2_la"));
        mq2_la->setGeometry(QRect(68, 153, 42, 16));
        mq2_la->setFont(font1);
        rain_la = new QLabel(groupBox_5);
        rain_la->setObjectName(QString::fromUtf8("rain_la"));
        rain_la->setGeometry(QRect(128, 153, 42, 16));
        rain_la->setFont(font1);
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 30, 35, 35));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/humi.png);"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 40, 35, 35));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/temp.png);"));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 110, 35, 35));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/humi_soil.png);"));
        MainWindow->setCentralWidget(centralwidget);
        label_13->raise();
        groupBox_4->raise();
        graphicsView->raise();
        groupBox_2->raise();
        groupBox->raise();
        ipcon->raise();
        portcon->raise();
        ip_edi->raise();
        port_edi->raise();
        line->raise();
        label_4->raise();
        pushButton->raise();
        time_l->raise();
        charts1_big->raise();
        charts1_small->raise();
        charts1_rest->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        groupBox_5->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 950, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QFont font8;
        font8.setStyleStrategy(QFont::PreferAntialias);
        toolBar->setFont(font8);
        toolBar->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(open_wifi);
        toolBar->addSeparator();
        toolBar->addAction(data);
        toolBar->addSeparator();
        toolBar->addAction(debb);
        toolBar->addSeparator();
        toolBar->addAction(exit);

        retranslateUi(MainWindow);

        sermode->setDefault(false);
        comboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        exit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        open_wifi->setText(QApplication::translate("MainWindow", "NetSw", nullptr));
        led->setText(QApplication::translate("MainWindow", "Led", nullptr));
        relay->setText(QApplication::translate("MainWindow", "Relay", nullptr));
        auto_hand->setText(QApplication::translate("MainWindow", "RunMode", nullptr));
        debb->setText(QApplication::translate("MainWindow", "Debug", nullptr));
        data->setText(QApplication::translate("MainWindow", "data", nullptr));
        pushButton->setText(QString());
        ipcon->setText(QString());
        portcon->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "\347\275\221\347\273\234\351\205\215\347\275\256", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\250\241\345\274\217\351\200\211\346\213\251", nullptr));
        wifi_l->setText(QString());
        sermode->setText(QString());
        sermode_l->setText(QApplication::translate("MainWindow", "\344\270\273\346\234\272\346\250\241\345\274\217", nullptr));
        connect_l->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "          \346\267\241\346\260\264\351\261\274\346\212\225\351\243\237\347\233\221\346\216\247\351\235\242\346\235\277", nullptr));
        time_l->setText(QApplication::translate("MainWindow", "12\357\274\23200\357\274\23200", nullptr));
        charts1_big->setText(QString());
        charts1_small->setText(QString());
        charts1_rest->setText(QString());
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\346\212\225\351\243\237\350\256\276\345\256\232", nullptr));
        label->setText(QApplication::translate("MainWindow", "g/\346\254\241", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "h", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "m", nullptr));
        set_yu_bt->setText(QString());
        clear_yu_bt->setText(QString());
        checkBox->setText(QApplication::translate("MainWindow", "\346\212\225\345\226\202\351\227\264\351\232\224", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "\345\256\232\346\227\266(h)", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "\345\256\232\346\227\266(min)", nullptr));
        checkBox_4->setText(QApplication::translate("MainWindow", "\345\256\232\351\207\217", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "g", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "QQVGA(160x120)", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "HQVGA(240x176)", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "QVGA(320x240)", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "CIF(400x296)", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "VGA(640x480)", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "SVGA(800x600)", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "XGA(1024x768)", nullptr));
        comboBox->setItemText(7, QApplication::translate("MainWindow", "SXGA(1280x1024)", nullptr));
        comboBox->setItemText(8, QApplication::translate("MainWindow", "UXGA(1600x1200)", nullptr));

        label_5->setText(QApplication::translate("MainWindow", "\350\264\250\351\207\217", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "IP", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "192.168.31.205", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\216\250\346\265\201", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\344\275\231\346\226\231\346\243\200\346\265\213\351\203\250\345\210\206", nullptr));
        temp_la->setText(QApplication::translate("MainWindow", "N/A", nullptr));
        humi_la->setText(QApplication::translate("MainWindow", "N/A", nullptr));
        label_9->setText(QString());
        label_11->setText(QString());
        label_10->setText(QString());
        light_la->setText(QApplication::translate("MainWindow", "N/A", nullptr));
        soil_la->setText(QApplication::translate("MainWindow", "N/A", nullptr));
        mq2_la->setText(QApplication::translate("MainWindow", "N/A", nullptr));
        rain_la->setText(QApplication::translate("MainWindow", "N/A", nullptr));
        label_7->setText(QString());
        label_6->setText(QString());
        label_8->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
