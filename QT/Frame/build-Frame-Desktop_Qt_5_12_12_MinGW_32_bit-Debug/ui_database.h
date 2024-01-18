/********************************************************************************
** Form generated from reading UI file 'database.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASE_H
#define UI_DATABASE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QLabel *label;

    void setupUi(QWidget *database)
    {
        if (database->objectName().isEmpty())
            database->setObjectName(QString::fromUtf8("database"));
        database->resize(750, 625);
        tableView = new QTableView(database);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(23, 60, 691, 421));
        tableView->setStyleSheet(QString::fromUtf8(""));
        icon = new QLabel(database);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(470, 20, 35, 35));
        icon->setStyleSheet(QString::fromUtf8("border-image: url(:/data_nie.png);"));
        now_bt = new QPushButton(database);
        now_bt->setObjectName(QString::fromUtf8("now_bt"));
        now_bt->setGeometry(QRect(290, 547, 50, 25));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        now_bt->setFont(font);
        now_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(132, 66, 198);\n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        displayAll_bt = new QPushButton(database);
        displayAll_bt->setObjectName(QString::fromUtf8("displayAll_bt"));
        displayAll_bt->setGeometry(QRect(400, 540, 70, 28));
        displayAll_bt->setFont(font);
        displayAll_bt->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(180, 150, 0);   \n"
"border-radius:10px;		 \n"
"background-color: rgb(255, 170, 0);\n"
"color: rgb(255, 255, 255);			\n"
"font-size:15px; 		 \n"
""));
        end_l = new QLabel(database);
        end_l->setObjectName(QString::fromUtf8("end_l"));
        end_l->setGeometry(QRect(50, 550, 41, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        end_l->setFont(font1);
        end_l->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        spinBox_2 = new QSpinBox(database);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(590, 550, 53, 24));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(10);
        spinBox_2->setFont(font2);
        spinBox_2->setStyleSheet(QString::fromUtf8("border:2px solid rgb(140, 66, 0);\n"
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
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(90, 517, 194, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(13);
        dateTimeEdit->setFont(font3);
        dateTimeEdit->setStyleSheet(QString::fromUtf8(""));
        dateTimeEdit->setDate(QDate(2022, 10, 7));
        dateTimeEdit->setTime(QTime(20, 50, 0));
        line_2 = new QFrame(database);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(510, 509, 3, 86));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        spinBox = new QSpinBox(database);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(530, 550, 53, 24));
        spinBox->setFont(font2);
        spinBox->setStyleSheet(QString::fromUtf8("border:2px solid rgb(140, 66, 0);\n"
"border-radius:10px;		 \n"
"background-color: rgb(198, 66, 0);\n"
"color: rgb(255, 255, 255);\n"
" \n"
"\n"
"\n"
""));
        spinBox->setMaximum(100);
        groupBox_2 = new QGroupBox(database);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 497, 321, 111));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        groupBox_2->setFont(font4);
        groupBox_2->setStyleSheet(QString::fromUtf8("border:2px solid rgb(151, 151, 227);\n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 170, 255);\n"
"color: rgb(0, 0, 0);\n"
"font-size:16px; 		 \n"
"\n"
""));
        groupBox_2->setAlignment(Qt::AlignCenter);
        currDay_bt = new QPushButton(groupBox_2);
        currDay_bt->setObjectName(QString::fromUtf8("currDay_bt"));
        currDay_bt->setGeometry(QRect(20, 80, 83, 23));
        currDay_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(0, 120, 180);\n"
"border-radius:10px;		 \n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        currThDay_bt = new QPushButton(groupBox_2);
        currThDay_bt->setObjectName(QString::fromUtf8("currThDay_bt"));
        currThDay_bt->setGeometry(QRect(120, 80, 83, 23));
        currThDay_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(63, 63, 190);\n"
"border-radius:10px;		 \n"
"background-color: rgb(85, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        currWeek_bt = new QPushButton(groupBox_2);
        currWeek_bt->setObjectName(QString::fromUtf8("currWeek_bt"));
        currWeek_bt->setGeometry(QRect(220, 80, 83, 23));
        currWeek_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(180, 0, 180);\n"
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
        clear_bt->setObjectName(QString::fromUtf8("clear_bt"));
        clear_bt->setGeometry(QRect(400, 578, 70, 28));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        clear_bt->setFont(font5);
        clear_bt->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(134, 134, 0);   \n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 170, 0);\n"
"color: rgb(255, 255, 255);			\n"
""));
        select_val_bt = new QPushButton(database);
        select_val_bt->setObjectName(QString::fromUtf8("select_val_bt"));
        select_val_bt->setGeometry(QRect(550, 580, 61, 25));
        QFont font6;
        font6.setFamily(QString::fromUtf8("AcadEref"));
        font6.setBold(true);
        font6.setWeight(75);
        select_val_bt->setFont(font6);
        select_val_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(0, 133, 120);\n"
"border-radius:10px;		 \n"
"background-color: rgb(0, 170, 255);	\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
""));
        comboBox = new QComboBox(database);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(530, 520, 111, 25));
        comboBox->setFont(font3);
        comboBox->setStyleSheet(QString::fromUtf8("border:2px solid rgb(100, 100, 194);\n"
"border-radius:10px;		 \n"
"background-color: rgb(129, 129, 194);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
"\n"
""));
        select_data_bt = new QPushButton(database);
        select_data_bt->setObjectName(QString::fromUtf8("select_data_bt"));
        select_data_bt->setGeometry(QRect(290, 517, 50, 25));
        select_data_bt->setFont(font);
        select_data_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(0, 133, 120);\n"
"border-radius:10px;		 \n"
"background-color: rgb(0, 170, 255);	\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        start_l = new QLabel(database);
        start_l->setObjectName(QString::fromUtf8("start_l"));
        start_l->setGeometry(QRect(50, 519, 41, 16));
        start_l->setFont(font1);
        start_l->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        dateTimeEdit_2 = new QDateTimeEdit(database);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(90, 547, 194, 22));
        dateTimeEdit_2->setFont(font3);
        dateTimeEdit_2->setDate(QDate(2022, 10, 7));
        dateTimeEdit_2->setTime(QTime(20, 50, 0));
        title = new QLabel(database);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(280, 10, 191, 51));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font7.setPointSize(19);
        font7.setBold(true);
        font7.setWeight(75);
        title->setFont(font7);
        title->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        title->setLineWidth(10);
        exit_bt = new QPushButton(database);
        exit_bt->setObjectName(QString::fromUtf8("exit_bt"));
        exit_bt->setGeometry(QRect(400, 505, 70, 28));
        QFont font8;
        font8.setPointSize(12);
        font8.setBold(true);
        font8.setWeight(75);
        exit_bt->setFont(font8);
        exit_bt->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(59, 59, 208);   \n"
"border-radius:10px;		 \n"
"background-color: rgb(85, 85, 255);\n"
"color: rgb(255, 255, 255);			\n"
"\n"
""));
        line = new QFrame(database);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(370, 510, 3, 86));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(database);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(520, 494, 141, 121));
        groupBox->setFont(font4);
        groupBox->setStyleSheet(QString::fromUtf8("border:2px solid rgb(80, 229, 229);\n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font-size:15px; 		 \n"
"\n"
""));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        label = new QLabel(database);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 271, 31));
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
        label->raise();

        retranslateUi(database);

        QMetaObject::connectSlotsByName(database);
    } // setupUi

    void retranslateUi(QWidget *database)
    {
        database->setWindowTitle(QApplication::translate("database", "Form", nullptr));
        icon->setText(QString());
        now_bt->setText(QApplication::translate("database", "NOW", nullptr));
        displayAll_bt->setText(QApplication::translate("database", "\346\230\276\347\244\272\346\211\200\346\234\211", nullptr));
        end_l->setText(QApplication::translate("database", "\347\273\223\346\235\237", nullptr));
        dateTimeEdit->setDisplayFormat(QApplication::translate("database", "yyyy-MM-dd HH:mm:ss", nullptr));
        groupBox_2->setTitle(QApplication::translate("database", "\346\227\245\346\234\237\346\237\245\350\257\242", nullptr));
        currDay_bt->setText(QApplication::translate("database", "\346\234\200\350\277\221\344\270\200\345\244\251", nullptr));
        currThDay_bt->setText(QApplication::translate("database", "\346\234\200\350\277\221\344\270\211\345\244\251", nullptr));
        currWeek_bt->setText(QApplication::translate("database", "\346\234\200\350\277\221\344\270\200\345\221\250", nullptr));
        clear_bt->setText(QApplication::translate("database", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        select_val_bt->setText(QApplication::translate("database", "\346\237\245\350\257\242", nullptr));
        select_data_bt->setText(QApplication::translate("database", "\346\237\245\350\257\242", nullptr));
        start_l->setText(QApplication::translate("database", "\345\274\200\345\247\213", nullptr));
        dateTimeEdit_2->setDisplayFormat(QApplication::translate("database", "yyyy-MM-dd HH:mm:ss", nullptr));
        title->setText(QApplication::translate("database", "\346\225\260\346\215\256\345\272\223\347\256\241\347\220\206\345\271\263\345\217\260", nullptr));
        exit_bt->setText(QApplication::translate("database", "\351\200\200\345\207\272", nullptr));
        groupBox->setTitle(QApplication::translate("database", "\345\200\274\346\237\245\350\257\242", nullptr));
        label->setText(QApplication::translate("database", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class database: public Ui_database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASE_H
