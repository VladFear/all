/****************************************************************************
** Meta object code from reading C++ file 'qmlwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../sbc-platform/src/IC-Linux/qmlplugins/src/utils/qmlwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlMainWindow_t {
    QByteArrayData data[13];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlMainWindow_t qt_meta_stringdata_QmlMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QmlMainWindow"
QT_MOC_LITERAL(1, 14, 10), // "keyPressed"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "key"
QT_MOC_LITERAL(4, 30, 11), // "keyReleased"
QT_MOC_LITERAL(5, 42, 25), // "increaseAccelerationForce"
QT_MOC_LITERAL(6, 68, 25), // "decreaseAccelerationForce"
QT_MOC_LITERAL(7, 94, 18), // "increaseBreakForce"
QT_MOC_LITERAL(8, 113, 18), // "decreaseBreakForce"
QT_MOC_LITERAL(9, 132, 14), // "holdWheelFixed"
QT_MOC_LITERAL(10, 147, 14), // "turnWheelRight"
QT_MOC_LITERAL(11, 162, 13), // "turnWheelLeft"
QT_MOC_LITERAL(12, 176, 12) // "setWheelFree"

    },
    "QmlMainWindow\0keyPressed\0\0key\0keyReleased\0"
    "increaseAccelerationForce\0"
    "decreaseAccelerationForce\0increaseBreakForce\0"
    "decreaseBreakForce\0holdWheelFixed\0"
    "turnWheelRight\0turnWheelLeft\0setWheelFree"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    0,   70,    2, 0x06 /* Public */,
       6,    0,   71,    2, 0x06 /* Public */,
       7,    0,   72,    2, 0x06 /* Public */,
       8,    0,   73,    2, 0x06 /* Public */,
       9,    0,   74,    2, 0x06 /* Public */,
      10,    0,   75,    2, 0x06 /* Public */,
      11,    0,   76,    2, 0x06 /* Public */,
      12,    0,   77,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
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

void QmlMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QmlMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->keyReleased((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->increaseAccelerationForce(); break;
        case 3: _t->decreaseAccelerationForce(); break;
        case 4: _t->increaseBreakForce(); break;
        case 5: _t->decreaseBreakForce(); break;
        case 6: _t->holdWheelFixed(); break;
        case 7: _t->turnWheelRight(); break;
        case 8: _t->turnWheelLeft(); break;
        case 9: _t->setWheelFree(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QmlMainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlMainWindow::keyPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QmlMainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlMainWindow::keyReleased)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QmlMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlMainWindow::increaseAccelerationForce)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QmlMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlMainWindow::decreaseAccelerationForce)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QmlMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlMainWindow::increaseBreakForce)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QmlMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlMainWindow::decreaseBreakForce)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QmlMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlMainWindow::holdWheelFixed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QmlMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlMainWindow::turnWheelRight)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QmlMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlMainWindow::turnWheelLeft)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QmlMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlMainWindow::setWheelFree)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QmlMainWindow::staticMetaObject = { {
    &QQuickWindow::staticMetaObject,
    qt_meta_stringdata_QmlMainWindow.data,
    qt_meta_data_QmlMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QmlMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QQuickWindow::qt_metacast(_clname);
}

int QmlMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QmlMainWindow::keyPressed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlMainWindow::keyReleased(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlMainWindow::increaseAccelerationForce()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QmlMainWindow::decreaseAccelerationForce()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QmlMainWindow::increaseBreakForce()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QmlMainWindow::decreaseBreakForce()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QmlMainWindow::holdWheelFixed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QmlMainWindow::turnWheelRight()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QmlMainWindow::turnWheelLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QmlMainWindow::setWheelFree()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
