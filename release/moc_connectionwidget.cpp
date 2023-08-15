/****************************************************************************
** Meta object code from reading C++ file 'connectionwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../views/connectionwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ConnectionWidget_t {
    QByteArrayData data[10];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectionWidget_t qt_meta_stringdata_ConnectionWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ConnectionWidget"
QT_MOC_LITERAL(1, 17, 22), // "connectionStateChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 33), // "SerialConnection::ConnectionS..."
QT_MOC_LITERAL(4, 75, 5), // "state"
QT_MOC_LITERAL(5, 81, 11), // "serialError"
QT_MOC_LITERAL(6, 93, 16), // "updateDeviceList"
QT_MOC_LITERAL(7, 110, 7), // "onReady"
QT_MOC_LITERAL(8, 118, 20), // "connectButtonClicked"
QT_MOC_LITERAL(9, 139, 21) // "on_connect_pb_clicked"

    },
    "ConnectionWidget\0connectionStateChanged\0"
    "\0SerialConnection::ConnectionState\0"
    "state\0serialError\0updateDeviceList\0"
    "onReady\0connectButtonClicked\0"
    "on_connect_pb_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectionWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x09 /* Protected */,
       8,    0,   50,    2, 0x09 /* Protected */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ConnectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConnectionWidget *_t = static_cast<ConnectionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionStateChanged((*reinterpret_cast< SerialConnection::ConnectionState(*)>(_a[1]))); break;
        case 1: _t->serialError(); break;
        case 2: { int _r = _t->updateDeviceList();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->onReady(); break;
        case 4: _t->connectButtonClicked(); break;
        case 5: _t->on_connect_pb_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ConnectionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ConnectionWidget.data,
      qt_meta_data_ConnectionWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ConnectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectionWidget.stringdata0))
        return static_cast<void*>(const_cast< ConnectionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ConnectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
