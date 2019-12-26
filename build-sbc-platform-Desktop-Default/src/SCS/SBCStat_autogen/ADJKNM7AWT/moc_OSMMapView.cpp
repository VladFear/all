/****************************************************************************
** Meta object code from reading C++ file 'OSMMapView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../sbc-platform/src/SCS/mapviewer/OSMMapView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OSMMapView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OSMMapView_t {
    QByteArrayData data[12];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OSMMapView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OSMMapView_t qt_meta_stringdata_OSMMapView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "OSMMapView"
QT_MOC_LITERAL(1, 11, 14), // "addMarkerEvent"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "latitude"
QT_MOC_LITERAL(4, 36, 9), // "longitude"
QT_MOC_LITERAL(5, 46, 9), // "Crossroad"
QT_MOC_LITERAL(6, 56, 9), // "crossroad"
QT_MOC_LITERAL(7, 66, 18), // "updateMarkerEvents"
QT_MOC_LITERAL(8, 85, 16), // "saveMarkerEvents"
QT_MOC_LITERAL(9, 102, 18), // "deleteMarkerEvents"
QT_MOC_LITERAL(10, 121, 21), // "showConfigPanelEvents"
QT_MOC_LITERAL(11, 143, 22) // "closeConfigPanelEvents"

    },
    "OSMMapView\0addMarkerEvent\0\0latitude\0"
    "longitude\0Crossroad\0crossroad\0"
    "updateMarkerEvents\0saveMarkerEvents\0"
    "deleteMarkerEvents\0showConfigPanelEvents\0"
    "closeConfigPanelEvents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OSMMapView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       7,    0,   51,    2, 0x06 /* Public */,
       8,    0,   52,    2, 0x06 /* Public */,
       9,    0,   53,    2, 0x06 /* Public */,
      10,    0,   54,    2, 0x06 /* Public */,
      11,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OSMMapView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OSMMapView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addMarkerEvent((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< Crossroad(*)>(_a[3]))); break;
        case 1: _t->updateMarkerEvents(); break;
        case 2: _t->saveMarkerEvents(); break;
        case 3: _t->deleteMarkerEvents(); break;
        case 4: _t->showConfigPanelEvents(); break;
        case 5: _t->closeConfigPanelEvents(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OSMMapView::*)(double , double , Crossroad );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OSMMapView::addMarkerEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OSMMapView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OSMMapView::updateMarkerEvents)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OSMMapView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OSMMapView::saveMarkerEvents)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OSMMapView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OSMMapView::deleteMarkerEvents)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OSMMapView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OSMMapView::showConfigPanelEvents)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OSMMapView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OSMMapView::closeConfigPanelEvents)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OSMMapView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_OSMMapView.data,
    qt_meta_data_OSMMapView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OSMMapView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OSMMapView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OSMMapView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OSMMapView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void OSMMapView::addMarkerEvent(double _t1, double _t2, Crossroad _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OSMMapView::updateMarkerEvents()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OSMMapView::saveMarkerEvents()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OSMMapView::deleteMarkerEvents()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OSMMapView::showConfigPanelEvents()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OSMMapView::closeConfigPanelEvents()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
