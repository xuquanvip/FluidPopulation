/****************************************************************************
** Meta object code from reading C++ file 'CameraDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/src/camera/CameraDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CameraDialog_t {
    QByteArrayData data[13];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraDialog_t qt_meta_stringdata_CameraDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CameraDialog"
QT_MOC_LITERAL(1, 13, 16), // "takePhotoSignals"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "path"
QT_MOC_LITERAL(4, 36, 11), // "takePicSlot"
QT_MOC_LITERAL(5, 48, 10), // "initCamera"
QT_MOC_LITERAL(6, 59, 12), // "capturedSlot"
QT_MOC_LITERAL(7, 72, 1), // "v"
QT_MOC_LITERAL(8, 74, 5), // "image"
QT_MOC_LITERAL(9, 80, 15), // "reTakePhotoSlot"
QT_MOC_LITERAL(10, 96, 13), // "savePhotoSlot"
QT_MOC_LITERAL(11, 110, 17), // "updateProgressImg"
QT_MOC_LITERAL(12, 128, 21) // "deleteSysPicPathImage"

    },
    "CameraDialog\0takePhotoSignals\0\0path\0"
    "takePicSlot\0initCamera\0capturedSlot\0"
    "v\0image\0reTakePhotoSlot\0savePhotoSlot\0"
    "updateProgressImg\0deleteSysPicPathImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    2,   59,    2, 0x0a /* Public */,
       9,    0,   64,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x0a /* Public */,
      11,    0,   66,    2, 0x0a /* Public */,
      12,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CameraDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraDialog *_t = static_cast<CameraDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->takePhotoSignals((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->takePicSlot(); break;
        case 2: _t->initCamera(); break;
        case 3: _t->capturedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 4: _t->reTakePhotoSlot(); break;
        case 5: _t->savePhotoSlot(); break;
        case 6: _t->updateProgressImg(); break;
        case 7: _t->deleteSysPicPathImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CameraDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CameraDialog::takePhotoSignals)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CameraDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CameraDialog.data,
      qt_meta_data_CameraDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CameraDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CameraDialog.stringdata0))
        return static_cast<void*>(const_cast< CameraDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CameraDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void CameraDialog::takePhotoSignals(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
