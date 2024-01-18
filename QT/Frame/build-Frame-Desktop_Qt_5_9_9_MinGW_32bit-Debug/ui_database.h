/********************************************************************************
** Form generated from reading UI file 'database.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASE_H
#define UI_DATABASE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_database
{
public:
    QTableView *tableView;
    QLabel *icon;
    QPushButton *now_bt;
    QPushButton *displayAll_bt;
    QLabel *end_l;
    QSpinBox *spinBox_2;
    QDateTimeEdit *dateTimeEdit;
    QFrame *line_2;
    QSpinBox *spinBox;
    QGroupBox *groupBox_2;
    QPushButton *currDay_bt;
    QPushButton *currThDay_bt;
    QPushButton *currWeek_bt;
    QPushButton *clear_bt;
    QPushButton *select_val_bt;
    QComboBox *comboBox;
    QPushButton *select_data_bt;
    QLabel *start_l;
    QDateTimeEdit *dateTimeEdit_2;
    QLabel *title;
    QPushButton *exit_bt;
    QFrame *line;
    QGroupBox *groupBox;

    void setupUi(QWidget *database)
    {
        if (database->objectName().isEmpty())
            database->setObjectName(QStringLiteral("database"));
        database->resize(750, 625);
        tableView = new QTableView(database);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(23, 60, 691, 421));
        tableView->setStyleSheet(QStringLiteral(""));
        icon = new QLabel(database);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setGeometry(QRect(470, 20, 35, 35));
        icon->setStyleSheet(QStringLiteral("border-image: url(:/data_nie.png);"));
        now_bt = new QPushButton(database);
        now_bt->setObjectName(QStringLiteral("now_bt"));
        now_bt->setGeometry(QRect(290, 547, 50, 25));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        now_bt->setFont(font);
        now_bt->setStyleSheet(QLatin1String("border:2px solid rgb(132, 66, 198);\n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        displayAll_bt = new QPushButton(database);
        displayAll_bt->setObjectName(QStringLiteral("displayAll_bt"));
        displayAll_bt->setGeometry(QRect(400, 540, 70, 28));
        displayAll_bt->setFont(font);
        displayAll_bt->setStyleSheet(QLatin1String("border: 2px solid rgb(180, 150, 0);   \n"
"border-radius:10px;		 \n"
"background-color: rgb(255, 170, 0);\n"
"color: rgb(255, 255, 255);			\n"
"font-size:15px; 		 \n"
""));
        end_l = new QLabel(database);
        end_l->setObjectName(QStringLiteral("end_l"));
        end_l->setGeometry(QRect(50, 550, 41, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        end_l->setFont(font1);
        end_l->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        spinBox_2 = new QSpinBox(database);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(590, 550, 53, 24));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(10);
        spinBox_2->setFont(font2);
        spinBox_2->setStyleSheet(QLatin1String("border:2px solid rgb(140, 66, 0);\n"
"border-radius:10px;		 \n"
"background-color: rgb(198, 66, 0);\n"
"color: rgb(255, 255, 255);\n"
" \n"
"\n"
"\n"
""));
        spinBox_2->setMaximum(100);
        spinBox_2->setValue(100);
        dateTimeEdit = new QDateTimeEdit(database);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(90, 517, 194, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(13);
        dateTimeEdit->setFont(font3);
        dateTimeEdit->setStyleSheet(QStringLiteral(""));
        dateTimeEdit->setDate(QDate(2022, 10, 7));
        dateTimeEdit->setTime(QTime(20, 50, 0));
        line_2 = new QFrame(database);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(510, 509, 3, 86));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        spinBox = new QSpinBox(database);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(530, 550, 53, 24));
        spinBox->setFont(font2);
        spinBox->setStyleSheet(QLatin1String("border:2px solid rgb(140, 66, 0);\n"
"border-radius:10px;		 \n"
"background-color: rgb(198, 66, 0);\n"
"color: rgb(255, 255, 255);\n"
" \n"
"\n"
"\n"
""));
        spinBox->setMaximum(100);
        groupBox_2 = new QGroupBox(database);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 497, 321, 111));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        groupBox_2->setFont(font4);
        groupBox_2->setStyleSheet(QLatin1String("border:2px solid rgb(151, 151, 227);\n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 170, 255);\n"
"color: rgb(0, 0, 0);\n"
"font-size:16px; 		 \n"
"\n"
""));
        groupBox_2->setAlignment(Qt::AlignCenter);
        currDay_bt = new QPushButton(groupBox_2);
        currDay_bt->setObjectName(QStringLiteral("currDay_bt"));
        currDay_bt->setGeometry(QRect(20, 80, 83, 23));
        currDay_bt->setStyleSheet(QLatin1String("border:2px solid rgb(0, 120, 180);\n"
"border-radius:10px;		 \n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        currThDay_bt = new QPushButton(groupBox_2);
        currThDay_bt->setObjectName(QStringLiteral("currThDay_bt"));
        currThDay_bt->setGeometry(QRect(120, 80, 83, 23));
        currThDay_bt->setStyleSheet(QLatin1String("border:2px solid rgb(63, 63, 190);\n"
"border-radius:10px;		 \n"
"background-color: rgb(85, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        currWeek_bt = new QPushButton(groupBox_2);
        currWeek_bt->setObjectName(QStringLiteral("currWeek_bt"));
        currWeek_bt->setGeometry(QRect(220, 80, 83, 23));
        currWeek_bt->setStyleSheet(QLatin1String("border:2px solid rgb(180, 0, 180);\n"
"border-radius:10px;		 \n"
"background-color: rgb(255, 0, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
"\n"
"\n"
""));
        clear_bt = new QPushButton(database);
        clear_bt->setObjectName(QStringLiteral("clear_bt"));
        clear_bt->setGeometry(QRect(400, 578, 70, 28));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        clear_bt->setFont(font5);
        clear_bt->setStyleSheet(QLatin1String("border: 2px solid rgb(134, 134, 0);   \n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 170, 0);\n"
"color: rgb(255, 255, 255);			\n"
""));
        select_val_bt = new QPushButton(database);
        select_val_bt->setObjectName(QStringLiteral("select_val_bt"));
        select_val_bt->setGeometry(QRect(550, 580, 61, 25));
        QFont font6;
        font6.setFamily(QStringLiteral("AcadEref"));
        font6.setBold(true);
        font6.setWeight(75);
        select_val_bt->setFont(font6);
        select_val_bt->setStyleSheet(QLatin1String("border:2px solid rgb(0, 133, 120);\n"
"border-radius:10px;		 \n"
"background-color: rgb(0, 170, 255);	\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
""));
        comboBox = new QComboBox(database);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(530, 520, 111, 25));
        comboBox->setFont(font3);
        comboBox->setStyleSheet(QLatin1String("border:2px solid rgb(100, 100, 194);\n"
"border-radius:10px;		 \n"
"background-color: rgb(129, 129, 194);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
"\n"
""));
        select_data_bt = new QPushButton(database);
        select_data_bt->setObjectName(QStringLiteral("select_data_bt"));
        select_data_bt->setGeometry(QRect(290, 517, 50, 25));
        select_data_bt->setFont(font);
        select_data_bt->setStyleSheet(QLatin1String("border:2px solid rgb(0, 133, 120);\n"
"border-radius:10px;		 \n"
"background-color: rgb(0, 170, 255);	\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        start_l = new QLabel(database);
        start_l->setObjectName(QStringLiteral("start_l"));
        start_l->setGeometry(QRect(50, 519, 41, 16));
        start_l->setFont(font1);
        start_l->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        dateTimeEdit_2 = new QDateTimeEdit(database);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(90, 547, 194, 22));
        dateTimeEdit_2->setFont(font3);
        dateTimeEdit_2->setDate(QDate(2022, 10, 7));
        dateTimeEdit_2->setTime(QTime(20, 50, 0));
        title = new QLabel(database);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(280, 10, 191, 51));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font7.setPointSize(19);
        font7.setBold(true);
        font7.setWeight(75);
        title->setFont(font7);
        title->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
""));
        title->setLineWidth(10);
        exit_bt = new QPushButton(database);
        exit_bt->setObjectName(QStringLiteral("exit_bt"));
        exit_bt->setGeometry(QRect(400, 505, 70, 28));
        QFont font8;
        font8.setPointSize(12);
        font8.setBold(true);
        font8.setWeight(75);
        exit_bt->setFont(font8);
        exit_bt->setStyleSheet(QLatin1String("border: 2px solid rgb(59, 59, 208);   \n"
"border-radius:10px;		 \n"
"background-color: rgb(85, 85, 255);\n"
"color: rgb(255, 255, 255);			\n"
"\n"
""));
        line = new QFrame(database);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(370, 510, 3, 86));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(database);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(520, 494, 141, 121));
        groupBox->setFont(font4);
        groupBox->setStyleSheet(QLatin1String("border:2px solid rgb(80, 229, 229);\n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font-size:15px; 		 \n"
"\n"
""));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        groupBox->raise();
        groupBox_2->raise();
        tableView->raise();
        icon->raise();
        now_bt->raise();
        displayAll_bt->raise();
        end_l->raise();
        spinBox_2->raise();
        dateTimeEdit->raise();
        line_2->raise();
        spinBox->raise();
        clear_bt->raise();
        select_val_bt->raise();
        comboBox->raise();
        select_data_bt->raise();
        start_l->raise();
        dateTimeEdit_2->raise();
        title->raise();
        exit_bt->raise();
        line->raise();

        retranslateUi(database);

        QMetaObject::connectSlotsByName(database);
    } // setupUi

    void retranslateUi(QWidget *database)
    {
        database->setWindowTitle(QApplication::translate("database", "Form", Q_NULLPTR));
        icon->setText(QString());
        now_bt->setText(QApplication::translate("database", "NOW", Q_NULLPTR));
        displayAll_bt->setText(QApplication::translate("database", "\346\230\276\347\244\272\346\211\200\346\234\211", Q_NULLPTR));
        end_l->setText(QApplication::translate("database", "\347\273\223\346\235\237", Q_NULLPTR));
        dateTimeEdit->setDisplayFormat(QApplication::translate("database", "yyyy-MM-dd HH:mm:ss", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("database", "\346\227\245\346\234\237\346\237\245\350\257\242", Q_NULLPTR));
        currDay_bt->setText(QApplication::translate("database", "\346\234\200\350\277\221\344\270\200\345\244\251", Q_NULLPTR));
        currThDay_bt->setText(QApplication::translate("database", "\346\234\200\350\277\221\344\270\211\345\244\251", Q_NULLPTR));
        currWeek_bt->setText(QApplication::translate("database", "\346\234\200\350\277\221\344\270\200\345\221\250", Q_NULLPTR));
        clear_bt->setText(QApplication::translate("database", "\346\270\205\347\251\272\346\225\260\346\215\256", Q_NULLPTR));
        select_val_bt->setText(QApplication::translate("database", "\346\237\245\350\257\242", Q_NULLPTR));
        select_data_bt->setText(QApplication::translate("database", "\346\237\245\350\257\242", Q_NULLPTR));
        start_l->setText(QApplication::translate("database", "\345\274\200\345\247\213", Q_NULLPTR));
        dateTimeEdit_2->setDisplayFormat(QApplication::translate("database", "yyyy-MM-dd HH:mm:ss", Q_NULLPTR));
        title->setText(QApplication::translate("database", "\346\225\260\346\215\256\345\272\223\347\256\241\347\220\206\345\271\263\345\217\260", Q_NULLPTR));
        exit_bt->setText(QApplication::translate("database", "\351\200\200\345\207\272", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("database", "\345\200\274\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class database: public Ui_database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASE_H
