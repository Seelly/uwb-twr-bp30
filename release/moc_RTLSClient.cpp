/****************************************************************************
** Meta object code from reading C++ file 'RTLSClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../network/RTLSClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RTLSClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RTLSClient_t {
    QByteArrayData data[35];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RTLSClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RTLSClient_t qt_meta_stringdata_RTLSClient = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RTLSClient"
QT_MOC_LITERAL(1, 11, 7), // "anchPos"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "anchorId"
QT_MOC_LITERAL(4, 29, 1), // "x"
QT_MOC_LITERAL(5, 31, 1), // "y"
QT_MOC_LITERAL(6, 33, 1), // "z"
QT_MOC_LITERAL(7, 35, 6), // "tagPos"
QT_MOC_LITERAL(8, 42, 5), // "tagId"
QT_MOC_LITERAL(9, 48, 8), // "tagStats"
QT_MOC_LITERAL(10, 57, 3), // "r95"
QT_MOC_LITERAL(11, 61, 8), // "tagRange"
QT_MOC_LITERAL(12, 70, 3), // "aId"
QT_MOC_LITERAL(13, 74, 16), // "statusBarMessage"
QT_MOC_LITERAL(14, 91, 6), // "status"
QT_MOC_LITERAL(15, 98, 15), // "centerOnAnchors"
QT_MOC_LITERAL(16, 114, 15), // "enableFiltering"
QT_MOC_LITERAL(17, 130, 9), // "ancRanges"
QT_MOC_LITERAL(18, 140, 3), // "a01"
QT_MOC_LITERAL(19, 144, 3), // "a02"
QT_MOC_LITERAL(20, 148, 3), // "a12"
QT_MOC_LITERAL(21, 152, 7), // "onReady"
QT_MOC_LITERAL(22, 160, 11), // "onConnected"
QT_MOC_LITERAL(23, 172, 3), // "ver"
QT_MOC_LITERAL(24, 176, 4), // "conf"
QT_MOC_LITERAL(25, 181, 15), // "updateAnchorXYZ"
QT_MOC_LITERAL(26, 197, 2), // "id"
QT_MOC_LITERAL(27, 200, 5), // "value"
QT_MOC_LITERAL(28, 206, 19), // "updateTagCorrection"
QT_MOC_LITERAL(29, 226, 3), // "aid"
QT_MOC_LITERAL(30, 230, 3), // "tid"
QT_MOC_LITERAL(31, 234, 7), // "newData"
QT_MOC_LITERAL(32, 242, 22), // "connectionStateChanged"
QT_MOC_LITERAL(33, 265, 33), // "SerialConnection::ConnectionS..."
QT_MOC_LITERAL(34, 299, 11) // "ProcessData"

    },
    "RTLSClient\0anchPos\0\0anchorId\0x\0y\0z\0"
    "tagPos\0tagId\0tagStats\0r95\0tagRange\0"
    "aId\0statusBarMessage\0status\0centerOnAnchors\0"
    "enableFiltering\0ancRanges\0a01\0a02\0a12\0"
    "onReady\0onConnected\0ver\0conf\0"
    "updateAnchorXYZ\0id\0value\0updateTagCorrection\0"
    "aid\0tid\0newData\0connectionStateChanged\0"
    "SerialConnection::ConnectionState\0"
    "ProcessData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RTLSClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   89,    2, 0x06 /* Public */,
       7,    4,  102,    2, 0x06 /* Public */,
       9,    5,  111,    2, 0x06 /* Public */,
      11,    3,  122,    2, 0x06 /* Public */,
      13,    1,  129,    2, 0x06 /* Public */,
      15,    0,  132,    2, 0x06 /* Public */,
      16,    0,  133,    2, 0x06 /* Public */,
      17,    3,  134,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    0,  141,    2, 0x09 /* Protected */,
      22,    2,  142,    2, 0x09 /* Protected */,
      25,    3,  147,    2, 0x09 /* Protected */,
      28,    3,  154,    2, 0x09 /* Protected */,
      31,    0,  161,    2, 0x08 /* Private */,
      32,    1,  162,    2, 0x08 /* Private */,
      34,    0,  165,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,    6,    2,    2,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Double, QMetaType::Double, QMetaType::Double,    8,    4,    5,    6,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    8,    4,    5,    6,   10,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong, QMetaType::Double,    8,   12,    4,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   18,   19,   20,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   23,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,   26,    4,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   29,   30,   27,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,    2,
    QMetaType::Void,

       0        // eod
};

void RTLSClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RTLSClient *_t = static_cast<RTLSClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->anchPos((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 1: _t->tagPos((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 2: _t->tagStats((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 3: _t->tagRange((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->statusBarMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->centerOnAnchors(); break;
        case 6: _t->enableFiltering(); break;
        case 7: _t->ancRanges((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->onReady(); break;
        case 9: _t->onConnected((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->updateAnchorXYZ((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 11: _t->updateTagCorrection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->newData(); break;
        case 13: _t->connectionStateChanged((*reinterpret_cast< SerialConnection::ConnectionState(*)>(_a[1]))); break;
        case 14: _t->ProcessData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RTLSClient::*_t)(quint64 , double , double , double , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RTLSClient::anchPos)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RTLSClient::*_t)(quint64 , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RTLSClient::tagPos)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RTLSClient::*_t)(quint64 , double , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RTLSClient::tagStats)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (RTLSClient::*_t)(quint64 , quint64 , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RTLSClient::tagRange)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (RTLSClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RTLSClient::statusBarMessage)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (RTLSClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RTLSClient::centerOnAnchors)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (RTLSClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RTLSClient::enableFiltering)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (RTLSClient::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RTLSClient::ancRanges)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject RTLSClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RTLSClient.data,
      qt_meta_data_RTLSClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RTLSClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RTLSClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RTLSClient.stringdata0))
        return static_cast<void*>(const_cast< RTLSClient*>(this));
    return QObject::qt_metacast(_clname);
}

int RTLSClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void RTLSClient::anchPos(quint64 _t1, double _t2, double _t3, double _t4, bool _t5, bool _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RTLSClient::tagPos(quint64 _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RTLSClient::tagStats(quint64 _t1, double _t2, double _t3, double _t4, double _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RTLSClient::tagRange(quint64 _t1, quint64 _t2, double _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RTLSClient::statusBarMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RTLSClient::centerOnAnchors()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void RTLSClient::enableFiltering()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void RTLSClient::ancRanges(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
