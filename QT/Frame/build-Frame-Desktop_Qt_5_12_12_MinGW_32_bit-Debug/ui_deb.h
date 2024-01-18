/********************************************************************************
** Form generated from reading UI file 'deb.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEB_H
#define UI_DEB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Deb
{
public:
    QPlainTextEdit *rec_edi;
    QLineEdit *send_edi;
    QPushButton *exit_bt;
    QPushButton *clear_bt;
    QPushButton *send_bt;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Deb)
    {
        if (Deb->objectName().isEmpty())
            Deb->setObjectName(QString::fromUtf8("Deb"));
        Deb->resize(525, 424);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(16);
        Deb->setFont(font);
        Deb->setStyleSheet(QString::fromUtf8(""));
        rec_edi = new QPlainTextEdit(Deb);
        rec_edi->setObjectName(QString::fromUtf8("rec_edi"));
        rec_edi->setGeometry(QRect(20, 40, 441, 271));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(11);
        rec_edi->setFont(font1);
        send_edi = new QLineEdit(Deb);
        send_edi->setObjectName(QString::fromUtf8("send_edi"));
        send_edi->setGeometry(QRect(20, 330, 441, 61));
        send_edi->setFont(font1);
        send_edi->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        exit_bt = new QPushButton(Deb);
        exit_bt->setObjectName(QString::fromUtf8("exit_bt"));
        exit_bt->setGeometry(QRect(470, 40, 35, 35));
        exit_bt->setStyleSheet(QString::fromUtf8("border-image: url(:/exit.png);"));
        clear_bt = new QPushButton(Deb);
        clear_bt->setObjectName(QString::fromUtf8("clear_bt"));
        clear_bt->setGeometry(QRect(470, 270, 35, 35));
        clear_bt->setStyleSheet(QString::fromUtf8("border-image: url(:/clear_b.png);"));
        send_bt = new QPushButton(Deb);
        send_bt->setObjectName(QString::fromUtf8("send_bt"));
        send_bt->setGeometry(QRect(470, 364, 35, 35));
        QFont font2;
        font2.setPointSize(11);
        send_bt->setFont(font2);
        send_bt->setStyleSheet(QString::fromUtf8("border-image: url(://send.png);"));
        label = new QLabel(Deb);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 10, 201, 31));
        pushButton_2 = new QPushButton(Deb);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 320, 35, 35));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/clearS.png);"));

        retranslateUi(Deb);

        QMetaObject::connectSlotsByName(Deb);
    } // setupUi

    void retranslateUi(QWidget *Deb)
    {
        Deb->setWindowTitle(QApplication::translate("Deb", "Form", nullptr));
        exit_bt->setText(QString());
        clear_bt->setText(QString());
        send_bt->setText(QString());
        label->setText(QApplication::translate("Deb", "\350\260\203  \350\257\225  \347\225\214  \351\235\242", nullptr));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Deb: public Ui_Deb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEB_H
