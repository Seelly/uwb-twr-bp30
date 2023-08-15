/****************************************************************************
** Meta object code from reading C++ file 'SerialConnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../network/SerialConnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SerialConnection_t {
    QByteArrayData data[21];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialConnection_t qt_meta_stringdata_SerialConnection = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SerialConnection"
QT_MOC_LITERAL(1, 17, 9), // "clearTags"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "serialError"
QT_MOC_LITERAL(4, 40, 6), // "getCfg"
QT_MOC_LITERAL(5, 47, 7), // "nextCmd"
QT_MOC_LITERAL(6, 55, 16), // "statusBarMessage"
QT_MOC_LITERAL(7, 72, 6), // "status"
QT_MOC_LITERAL(8, 79, 22), // "connectionStateChanged"
QT_MOC_LITERAL(9, 102, 33), // "SerialConnection::ConnectionS..."
QT_MOC_LITERAL(10, 136, 12), // "serialOpened"
QT_MOC_LITERAL(11, 149, 15), // "closeConnection"
QT_MOC_LITERAL(12, 165, 16), // "cancelConnection"
QT_MOC_LITERAL(13, 182, 14), // "openConnection"
QT_MOC_LITERAL(14, 197, 5), // "index"
QT_MOC_LITERAL(15, 203, 8), // "readData"
QT_MOC_LITERAL(16, 212, 9), // "writeData"
QT_MOC_LITERAL(17, 222, 4), // "data"
QT_MOC_LITERAL(18, 227, 11), // "handleError"
QT_MOC_LITERAL(19, 239, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(20, 268, 5) // "error"

    },
    "SerialConnection\0clearTags\0\0serialError\0"
    "getCfg\0nextCmd\0statusBarMessage\0status\0"
    "connectionStateChanged\0"
    "SerialConnection::ConnectionState\0"
    "serialOpened\0closeConnection\0"
    "cancelConnection\0openConnection\0index\0"
    "readData\0writeData\0data\0handleError\0"
    "QSerialPort::SerialPortError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    1,   83,    2, 0x06 /* Public */,
       8,    1,   86,    2, 0x06 /* Public */,
      10,    2,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   94,    2, 0x0a /* Public */,
      12,    0,   95,    2, 0x0a /* Public */,
      13,    1,   96,    2, 0x0a /* Public */,
      15,    0,   99,    2, 0x0a /* Public */,
      16,    1,  100,    2, 0x09 /* Protected */,
      18,    1,  103,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   17,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void SerialConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialConnection *_t = static_cast<SerialConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clearTags(); break;
        case 1: _t->serialError(); break;
        case 2: _t->getCfg(); break;
        case 3: _t->nextCmd(); break;
        case 4: _t->statusBarMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->connectionStateChanged((*reinterpret_cast< SerialConnection::ConnectionState(*)>(_a[1]))); break;
        case 6: _t->serialOpened((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->closeConnection(); break;
        case 8: _t->cancelConnection(); break;
        case 9: { int _r = _t->openConnection((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->readData(); break;
        case 11: _t->writeData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 12: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SerialConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialConnection::clearTags)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SerialConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialConnection::serialError)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SerialConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialConnection::getCfg)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SerialConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialConnection::nextCmd)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SerialConnection::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialConnection::statusBarMessage)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SerialConnection::*_t)(SerialConnection::ConnectionState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialConnection::connectionStateChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SerialConnection::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialConnection::serialOpened)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject SerialConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SerialConnection.data,
      qt_meta_data_SerialConnection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SerialConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SerialConnection.stringdata0))
        return static_cast<void*>(const_cast< SerialConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int SerialConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void SerialConnection::clearTags()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SerialConnection::serialError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SerialConnection::getCfg()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void SerialConnection::nextCmd()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void SerialConnection::statusBarMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SerialConnection::connectionStateChanged(SerialConnection::ConnectionState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SerialConnection::serialOpened(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
