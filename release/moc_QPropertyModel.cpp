/****************************************************************************
** Meta object code from reading C++ file 'QPropertyModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../util/QPropertyModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QPropertyModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QPropertyDataWidgetMapper_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPropertyDataWidgetMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPropertyDataWidgetMapper_t qt_meta_stringdata_QPropertyDataWidgetMapper = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QPropertyDataWidgetMapper"

    },
    "QPropertyDataWidgetMapper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPropertyDataWidgetMapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QPropertyDataWidgetMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QPropertyDataWidgetMapper::staticMetaObject = {
    { &QDataWidgetMapper::staticMetaObject, qt_meta_stringdata_QPropertyDataWidgetMapper.data,
      qt_meta_data_QPropertyDataWidgetMapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPropertyDataWidgetMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPropertyDataWidgetMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPropertyDataWidgetMapper.stringdata0))
        return static_cast<void*>(const_cast< QPropertyDataWidgetMapper*>(this));
    return QDataWidgetMapper::qt_metacast(_clname);
}

int QPropertyDataWidgetMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDataWidgetMapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QPropertyModel_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPropertyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPropertyModel_t qt_meta_stringdata_QPropertyModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QPropertyModel"
QT_MOC_LITERAL(1, 15, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "QPropertyModel\0propertyChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPropertyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QPropertyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPropertyModel *_t = static_cast<QPropertyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QPropertyModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QPropertyModel.data,
      qt_meta_data_QPropertyModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPropertyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPropertyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPropertyModel.stringdata0))
        return static_cast<void*>(const_cast< QPropertyModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int QPropertyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
