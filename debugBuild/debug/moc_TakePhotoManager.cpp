/****************************************************************************
** Meta object code from reading C++ file 'TakePhotoManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/src/camera/TakePhotoManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TakePhotoManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TakePhotoManager_t {
    QByteArrayData data[9];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TakePhotoManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TakePhotoManager_t qt_meta_stringdata_TakePhotoManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TakePhotoManager"
QT_MOC_LITERAL(1, 17, 17), // "uploadPhotoFinish"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "success"
QT_MOC_LITERAL(4, 44, 3), // "msg"
QT_MOC_LITERAL(5, 48, 21), // "uploadPhotoTaskFinish"
QT_MOC_LITERAL(6, 70, 4), // "jsFn"
QT_MOC_LITERAL(7, 75, 28), // "QList<UploadPhotoResponse*>*"
QT_MOC_LITERAL(8, 104, 4) // "list"

    },
    "TakePhotoManager\0uploadPhotoFinish\0\0"
    "success\0msg\0uploadPhotoTaskFinish\0"
    "jsFn\0QList<UploadPhotoResponse*>*\0"
    "list"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TakePhotoManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       5,    3,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, 0x80000000 | 7,    6,    3,    8,

       0        // eod
};

void TakePhotoManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TakePhotoManager *_t = static_cast<TakePhotoManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uploadPhotoFinish((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->uploadPhotoTaskFinish((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<UploadPhotoResponse*>*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TakePhotoManager::*_t)(bool , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TakePhotoManager::uploadPhotoFinish)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TakePhotoManager::*_t)(QString , bool , QList<UploadPhotoResponse*> * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TakePhotoManager::uploadPhotoTaskFinish)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TakePhotoManager::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_TakePhotoManager.data,
      qt_meta_data_TakePhotoManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TakePhotoManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TakePhotoManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TakePhotoManager.stringdata0))
        return static_cast<void*>(const_cast< TakePhotoManager*>(this));
    return QThread::qt_metacast(_clname);
}

int TakePhotoManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TakePhotoManager::uploadPhotoFinish(bool _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TakePhotoManager::uploadPhotoTaskFinish(QString _t1, bool _t2, QList<UploadPhotoResponse*> * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
