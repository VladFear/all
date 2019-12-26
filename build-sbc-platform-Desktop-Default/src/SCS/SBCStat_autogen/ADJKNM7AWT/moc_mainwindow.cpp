/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../sbc-platform/src/SCS/mapviewer/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "readDatagrams"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "createMarker"
QT_MOC_LITERAL(4, 39, 8), // "latitude"
QT_MOC_LITERAL(5, 48, 9), // "longitude"
QT_MOC_LITERAL(6, 58, 9), // "Crossroad"
QT_MOC_LITERAL(7, 68, 9), // "crossroad"
QT_MOC_LITERAL(8, 78, 13), // "updateMarkers"
QT_MOC_LITERAL(9, 92, 16), // "deleteAllMarkers"
QT_MOC_LITERAL(10, 109, 20), // "saveAllMarkersToFile"
QT_MOC_LITERAL(11, 130, 14), // "setConfigPanel"
QT_MOC_LITERAL(12, 145, 18), // "setTextConfigPanel"
QT_MOC_LITERAL(13, 164, 18), // "getTextConfigPanel"
QT_MOC_LITERAL(14, 183, 15), // "showConfigPanel"
QT_MOC_LITERAL(15, 199, 16), // "closeConfigPanel"
QT_MOC_LITERAL(16, 216, 8), // "slotType"
QT_MOC_LITERAL(17, 225, 3), // "idx"
QT_MOC_LITERAL(18, 229, 8), // "slotSkin"
QT_MOC_LITERAL(19, 238, 19) // "slotAutopilotRepeat"

    },
    "MainWindow\0readDatagrams\0\0createMarker\0"
    "latitude\0longitude\0Crossroad\0crossroad\0"
    "updateMarkers\0deleteAllMarkers\0"
    "saveAllMarkersToFile\0setConfigPanel\0"
    "setTextConfigPanel\0getTextConfigPanel\0"
    "showConfigPanel\0closeConfigPanel\0"
    "slotType\0idx\0slotSkin\0slotAutopilotRepeat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    3,   80,    2, 0x0a /* Public */,
       8,    0,   87,    2, 0x0a /* Public */,
       9,    0,   88,    2, 0x0a /* Public */,
      10,    0,   89,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x0a /* Public */,
      12,    0,   91,    2, 0x0a /* Public */,
      13,    0,   92,    2, 0x0a /* Public */,
      14,    0,   93,    2, 0x0a /* Public */,
      15,    0,   94,    2, 0x0a /* Public */,
      16,    1,   95,    2, 0x0a /* Public */,
      18,    1,   98,    2, 0x0a /* Public */,
      19,    1,  101,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readDatagrams(); break;
        case 1: _t->createMarker((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< Crossroad(*)>(_a[3]))); break;
        case 2: _t->updateMarkers(); break;
        case 3: _t->deleteAllMarkers(); break;
        case 4: _t->saveAllMarkersToFile(); break;
        case 5: _t->setConfigPanel(); break;
        case 6: _t->setTextConfigPanel(); break;
        case 7: _t->getTextConfigPanel(); break;
        case 8: _t->showConfigPanel(); break;
        case 9: _t->closeConfigPanel(); break;
        case 10: _t->slotType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->slotSkin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->slotAutopilotRepeat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
