/****************************************************************************
** Meta object code from reading C++ file 'database.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Frame/database.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'database.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_database_t {
    QByteArrayData data[11];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_database_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_database_t qt_meta_stringdata_database = {
    {
QT_MOC_LITERAL(0, 0, 8), // "database"
QT_MOC_LITERAL(1, 9, 18), // "on_exit_bt_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 25), // "on_select_data_bt_clicked"
QT_MOC_LITERAL(4, 55, 24), // "on_displayAll_bt_clicked"
QT_MOC_LITERAL(5, 80, 17), // "on_now_bt_clicked"
QT_MOC_LITERAL(6, 98, 21), // "on_currDay_bt_clicked"
QT_MOC_LITERAL(7, 120, 23), // "on_currThDay_bt_clicked"
QT_MOC_LITERAL(8, 144, 22), // "on_currWeek_bt_clicked"
QT_MOC_LITERAL(9, 167, 24), // "on_select_val_bt_clicked"
QT_MOC_LITERAL(10, 192, 19) // "on_clear_bt_clicked"

    },
    "database\0on_exit_bt_clicked\0\0"
    "on_select_data_bt_clicked\0"
    "on_displayAll_bt_clicked\0on_now_bt_clicked\0"
    "on_currDay_bt_clicked\0on_currThDay_bt_clicked\0"
    "on_currWeek_bt_clicked\0on_select_val_bt_clicked\0"
    "on_clear_bt_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_database[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void database::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        database *_t = static_cast<database *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_exit_bt_clicked(); break;
        case 1: _t->on_select_data_bt_clicked(); break;
        case 2: _t->on_displayAll_bt_clicked(); break;
        case 3: _t->on_now_bt_clicked(); break;
        case 4: _t->on_currDay_bt_clicked(); break;
        case 5: _t->on_currThDay_bt_clicked(); break;
        case 6: _t->on_currWeek_bt_clicked(); break;
        case 7: _t->on_select_val_bt_clicked(); break;
        case 8: _t->on_clear_bt_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject database::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_database.data,
      qt_meta_data_database,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *database::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *database::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_database.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int database::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
