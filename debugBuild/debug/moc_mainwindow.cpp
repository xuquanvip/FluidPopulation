/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[51];
    char stringdata0[726];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "onTitleChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "title"
QT_MOC_LITERAL(4, 33, 12), // "onUrlChanged"
QT_MOC_LITERAL(5, 46, 3), // "url"
QT_MOC_LITERAL(6, 50, 13), // "onLoadStarted"
QT_MOC_LITERAL(7, 64, 14), // "onLoadFinished"
QT_MOC_LITERAL(8, 79, 2), // "ok"
QT_MOC_LITERAL(9, 82, 17), // "onNavStateChanged"
QT_MOC_LITERAL(10, 100, 9), // "canGoBack"
QT_MOC_LITERAL(11, 110, 12), // "canGoForward"
QT_MOC_LITERAL(12, 123, 11), // "onJsMessage"
QT_MOC_LITERAL(13, 135, 4), // "name"
QT_MOC_LITERAL(14, 140, 4), // "args"
QT_MOC_LITERAL(15, 145, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(16, 167, 24), // "on_forwardButton_clicked"
QT_MOC_LITERAL(17, 192, 23), // "on_reloadButton_clicked"
QT_MOC_LITERAL(18, 216, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(19, 238, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(20, 264, 15), // "onTestDemoEvent"
QT_MOC_LITERAL(21, 280, 18), // "onShowAddressEvent"
QT_MOC_LITERAL(22, 299, 19), // "onShowDevToolsEvent"
QT_MOC_LITERAL(23, 319, 17), // "changeDisplaySize"
QT_MOC_LITERAL(24, 337, 16), // "delayInitWebView"
QT_MOC_LITERAL(25, 354, 16), // "delayShowWebView"
QT_MOC_LITERAL(26, 371, 11), // "showWebView"
QT_MOC_LITERAL(27, 383, 21), // "onShowDownloadClicked"
QT_MOC_LITERAL(28, 405, 16), // "checkVersionSlot"
QT_MOC_LITERAL(29, 422, 8), // "isManual"
QT_MOC_LITERAL(30, 431, 7), // "success"
QT_MOC_LITERAL(31, 439, 3), // "msg"
QT_MOC_LITERAL(32, 443, 20), // "softDownloadProgress"
QT_MOC_LITERAL(33, 464, 8), // "progress"
QT_MOC_LITERAL(34, 473, 18), // "downloadFinishSlot"
QT_MOC_LITERAL(35, 492, 10), // "resultCode"
QT_MOC_LITERAL(36, 503, 11), // "resultValue"
QT_MOC_LITERAL(37, 515, 21), // "on_sysMenuBtn_clicked"
QT_MOC_LITERAL(38, 537, 19), // "onCheckVersionClick"
QT_MOC_LITERAL(39, 557, 12), // "onAboutClick"
QT_MOC_LITERAL(40, 570, 17), // "onClearCacheEvent"
QT_MOC_LITERAL(41, 588, 18), // "onDownloadCallBack"
QT_MOC_LITERAL(42, 607, 5), // "state"
QT_MOC_LITERAL(43, 613, 4), // "arg1"
QT_MOC_LITERAL(44, 618, 15), // "onTakePhotoSlot"
QT_MOC_LITERAL(45, 634, 8), // "filepath"
QT_MOC_LITERAL(46, 643, 17), // "onUploadPhotoSlot"
QT_MOC_LITERAL(47, 661, 25), // "onUploadTakePhotoTaskSlot"
QT_MOC_LITERAL(48, 687, 4), // "jsFn"
QT_MOC_LITERAL(49, 692, 28), // "QList<UploadPhotoResponse*>*"
QT_MOC_LITERAL(50, 721, 4) // "list"

    },
    "MainWindow\0onTitleChanged\0\0title\0"
    "onUrlChanged\0url\0onLoadStarted\0"
    "onLoadFinished\0ok\0onNavStateChanged\0"
    "canGoBack\0canGoForward\0onJsMessage\0"
    "name\0args\0on_backButton_clicked\0"
    "on_forwardButton_clicked\0"
    "on_reloadButton_clicked\0on_stopButton_clicked\0"
    "on_lineEdit_returnPressed\0onTestDemoEvent\0"
    "onShowAddressEvent\0onShowDevToolsEvent\0"
    "changeDisplaySize\0delayInitWebView\0"
    "delayShowWebView\0showWebView\0"
    "onShowDownloadClicked\0checkVersionSlot\0"
    "isManual\0success\0msg\0softDownloadProgress\0"
    "progress\0downloadFinishSlot\0resultCode\0"
    "resultValue\0on_sysMenuBtn_clicked\0"
    "onCheckVersionClick\0onAboutClick\0"
    "onClearCacheEvent\0onDownloadCallBack\0"
    "state\0arg1\0onTakePhotoSlot\0filepath\0"
    "onUploadPhotoSlot\0onUploadTakePhotoTaskSlot\0"
    "jsFn\0QList<UploadPhotoResponse*>*\0"
    "list"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  164,    2, 0x08 /* Private */,
       4,    1,  167,    2, 0x08 /* Private */,
       6,    0,  170,    2, 0x08 /* Private */,
       7,    1,  171,    2, 0x08 /* Private */,
       9,    2,  174,    2, 0x08 /* Private */,
      12,    2,  179,    2, 0x08 /* Private */,
      15,    0,  184,    2, 0x08 /* Private */,
      16,    0,  185,    2, 0x08 /* Private */,
      17,    0,  186,    2, 0x08 /* Private */,
      18,    0,  187,    2, 0x08 /* Private */,
      19,    0,  188,    2, 0x08 /* Private */,
      20,    0,  189,    2, 0x08 /* Private */,
      21,    0,  190,    2, 0x08 /* Private */,
      22,    0,  191,    2, 0x08 /* Private */,
      23,    0,  192,    2, 0x08 /* Private */,
      24,    0,  193,    2, 0x08 /* Private */,
      25,    0,  194,    2, 0x08 /* Private */,
      26,    0,  195,    2, 0x08 /* Private */,
      27,    0,  196,    2, 0x08 /* Private */,
      28,    3,  197,    2, 0x08 /* Private */,
      32,    1,  204,    2, 0x08 /* Private */,
      34,    2,  207,    2, 0x08 /* Private */,
      37,    0,  212,    2, 0x08 /* Private */,
      38,    0,  213,    2, 0x08 /* Private */,
      39,    0,  214,    2, 0x08 /* Private */,
      40,    0,  215,    2, 0x08 /* Private */,
      41,    3,  216,    2, 0x08 /* Private */,
      44,    1,  223,    2, 0x08 /* Private */,
      46,    2,  226,    2, 0x08 /* Private */,
      47,    3,  231,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantList,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::QString,   29,   30,   31,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   35,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   42,   33,   43,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   30,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, 0x80000000 | 49,   48,   30,   50,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->onLoadStarted(); break;
        case 3: _t->onLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onNavStateChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->onJsMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantList(*)>(_a[2]))); break;
        case 6: _t->on_backButton_clicked(); break;
        case 7: _t->on_forwardButton_clicked(); break;
        case 8: _t->on_reloadButton_clicked(); break;
        case 9: _t->on_stopButton_clicked(); break;
        case 10: _t->on_lineEdit_returnPressed(); break;
        case 11: _t->onTestDemoEvent(); break;
        case 12: _t->onShowAddressEvent(); break;
        case 13: _t->onShowDevToolsEvent(); break;
        case 14: _t->changeDisplaySize(); break;
        case 15: _t->delayInitWebView(); break;
        case 16: _t->delayShowWebView(); break;
        case 17: _t->showWebView(); break;
        case 18: _t->onShowDownloadClicked(); break;
        case 19: _t->checkVersionSlot((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 20: _t->softDownloadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->downloadFinishSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 22: _t->on_sysMenuBtn_clicked(); break;
        case 23: _t->onCheckVersionClick(); break;
        case 24: _t->onAboutClick(); break;
        case 25: _t->onClearCacheEvent(); break;
        case 26: _t->onDownloadCallBack((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 27: _t->onTakePhotoSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->onUploadPhotoSlot((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 29: _t->onUploadTakePhotoTaskSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<UploadPhotoResponse*>*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
