/****************************************************************************
** Meta object code from reading C++ file 'download_soft.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/src/update/download_soft.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'download_soft.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DownloadSoft_t {
    QByteArrayData data[8];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DownloadSoft_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DownloadSoft_t qt_meta_stringdata_DownloadSoft = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DownloadSoft"
QT_MOC_LITERAL(1, 13, 20), // "downloadSoftProgress"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "progress"
QT_MOC_LITERAL(4, 44, 24), // "downloadSoftFinishSignal"
QT_MOC_LITERAL(5, 69, 10), // "resultCode"
QT_MOC_LITERAL(6, 80, 13), // "resultContent"
QT_MOC_LITERAL(7, 94, 26) // "downloadSoftCancelDownload"

    },
    "DownloadSoft\0downloadSoftProgress\0\0"
    "progress\0downloadSoftFinishSignal\0"
    "resultCode\0resultContent\0"
    "downloadSoftCancelDownload"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadSoft[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,
       7,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    6,
    QMetaType::Void,

       0        // eod
};

void DownloadSoft::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DownloadSoft *_t = static_cast<DownloadSoft *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadSoftProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->downloadSoftFinishSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->downloadSoftCancelDownload(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DownloadSoft::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadSoft::downloadSoftProgress)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DownloadSoft::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadSoft::downloadSoftFinishSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DownloadSoft::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DownloadSoft::downloadSoftCancelDownload)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject DownloadSoft::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DownloadSoft.data,
      qt_meta_data_DownloadSoft,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DownloadSoft::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadSoft::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadSoft.stringdata0))
        return static_cast<void*>(const_cast< DownloadSoft*>(this));
    if (!strcmp(_clname, "DownloadProgressCallback"))
        return static_cast< DownloadProgressCallback*>(const_cast< DownloadSoft*>(this));
    return QThread::qt_metacast(_clname);
}

int DownloadSoft::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DownloadSoft::downloadSoftProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DownloadSoft::downloadSoftFinishSignal(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DownloadSoft::downloadSoftCancelDownload()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
