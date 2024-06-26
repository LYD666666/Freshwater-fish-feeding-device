QT       += core gui charts network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
RC_ICONS = ctrl.ico
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

OTHER_FILES += mysql.json
PLUGIN_CLASS_NAME = QMYSQLDriverPlugin
TARGET = qsqlmysql

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    data_global.cpp \
    database.cpp \
    deb.cpp \
    getcamimagedata.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    data_global.h \
    database.h \
    deb.h \
    getcamimagedata.h \
    mainwindow.h

FORMS += \
    database.ui \
    deb.ui \
    mainwindow.ui

# ！！你安装的mysql的lib路径
LIBS += -L $$quote(E:/Program Files/MySQL/MySQL Server 8.0/lib) -llibmysql
# ！！你安装的mysql的include路径
INCLUDEPATH += $$quote(E:/Program Files/MySQL/MySQL Server 8.0/include)
# ！！你安装的mysql的include路径
DEPENDPATH += $$quote(E:/Program Files/MySQL/MySQL Server 8.0/include)

DESTDIR = ../mysql/lib/

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../img/picture.qrc


