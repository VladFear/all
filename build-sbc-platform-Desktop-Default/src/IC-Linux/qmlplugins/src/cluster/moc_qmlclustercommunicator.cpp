/****************************************************************************
** Meta object code from reading C++ file 'qmlclustercommunicator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../sbc-platform/src/IC-Linux/qmlplugins/src/cluster/qmlclustercommunicator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlclustercommunicator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlClusterCommunicator_t {
    QByteArrayData data[27];
    char stringdata0[380];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlClusterCommunicator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlClusterCommunicator_t qt_meta_stringdata_QmlClusterCommunicator = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QmlClusterCommunicator"
QT_MOC_LITERAL(1, 23, 18), // "trafficLightStatus"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 6), // "status"
QT_MOC_LITERAL(4, 50, 11), // "onEmergency"
QT_MOC_LITERAL(5, 62, 14), // "warningArrowId"
QT_MOC_LITERAL(6, 77, 16), // "onWarningExpired"
QT_MOC_LITERAL(7, 94, 19), // "vehicleSpeedChanged"
QT_MOC_LITERAL(8, 114, 12), // "vehicleSpeed"
QT_MOC_LITERAL(9, 127, 12), // "speedChanged"
QT_MOC_LITERAL(10, 140, 11), // "skinChanged"
QT_MOC_LITERAL(11, 152, 4), // "skin"
QT_MOC_LITERAL(12, 157, 10), // "rpmChanged"
QT_MOC_LITERAL(13, 168, 3), // "rev"
QT_MOC_LITERAL(14, 172, 11), // "gearChanged"
QT_MOC_LITERAL(15, 184, 4), // "gear"
QT_MOC_LITERAL(16, 189, 19), // "parkingSpotsChanged"
QT_MOC_LITERAL(17, 209, 5), // "spots"
QT_MOC_LITERAL(18, 215, 25), // "beginControlMessagesBatch"
QT_MOC_LITERAL(19, 241, 26), // "commitControlMessagesBatch"
QT_MOC_LITERAL(20, 268, 28), // "batchAccelerationForceChange"
QT_MOC_LITERAL(21, 297, 5), // "delta"
QT_MOC_LITERAL(22, 303, 21), // "batchBreakForceChange"
QT_MOC_LITERAL(23, 325, 21), // "batchWheelAngleChange"
QT_MOC_LITERAL(24, 347, 22), // "batchWheelAngleSetting"
QT_MOC_LITERAL(25, 370, 5), // "angle"
QT_MOC_LITERAL(26, 376, 3) // "run"

    },
    "QmlClusterCommunicator\0trafficLightStatus\0"
    "\0status\0onEmergency\0warningArrowId\0"
    "onWarningExpired\0vehicleSpeedChanged\0"
    "vehicleSpeed\0speedChanged\0skinChanged\0"
    "skin\0rpmChanged\0rev\0gearChanged\0gear\0"
    "parkingSpotsChanged\0spots\0"
    "beginControlMessagesBatch\0"
    "commitControlMessagesBatch\0"
    "batchAccelerationForceChange\0delta\0"
    "batchBreakForceChange\0batchWheelAngleChange\0"
    "batchWheelAngleSetting\0angle\0run"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlClusterCommunicator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       6,    1,  100,    2, 0x06 /* Public */,
       7,    1,  103,    2, 0x06 /* Public */,
       9,    1,  106,    2, 0x06 /* Public */,
      10,    1,  109,    2, 0x06 /* Public */,
      12,    1,  112,    2, 0x06 /* Public */,
      14,    1,  115,    2, 0x06 /* Public */,
      16,    1,  118,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  121,    2, 0x0a /* Public */,
      19,    0,  122,    2, 0x0a /* Public */,
      20,    1,  123,    2, 0x0a /* Public */,
      22,    1,  126,    2, 0x0a /* Public */,
      23,    1,  129,    2, 0x0a /* Public */,
      24,    1,  132,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      26,    0,  135,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    5,
    QMetaType::Void, QMetaType::QVariant,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::QVariant,   11,
    QMetaType::Void, QMetaType::QReal,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::UInt,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Double, QMetaType::Double,   21,
    QMetaType::Double, QMetaType::Double,   21,
    QMetaType::Double, QMetaType::Double,   21,
    QMetaType::Double, QMetaType::Double,   25,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void QmlClusterCommunicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QmlClusterCommunicator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->trafficLightStatus((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->onEmergency((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->onWarningExpired((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 3: _t->vehicleSpeedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->speedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->skinChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 6: _t->rpmChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->gearChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->parkingSpotsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 9: _t->beginControlMessagesBatch(); break;
        case 10: _t->commitControlMessagesBatch(); break;
        case 11: { double _r = _t->batchAccelerationForceChange((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 12: { double _r = _t->batchBreakForceChange((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 13: { double _r = _t->batchWheelAngleChange((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 14: { double _r = _t->batchWheelAngleSetting((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->run(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QmlClusterCommunicator::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlClusterCommunicator::trafficLightStatus)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QmlClusterCommunicator::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlClusterCommunicator::onEmergency)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QmlClusterCommunicator::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlClusterCommunicator::onWarningExpired)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QmlClusterCommunicator::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlClusterCommunicator::vehicleSpeedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QmlClusterCommunicator::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlClusterCommunicator::speedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QmlClusterCommunicator::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlClusterCommunicator::skinChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QmlClusterCommunicator::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlClusterCommunicator::rpmChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QmlClusterCommunicator::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlClusterCommunicator::gearChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QmlClusterCommunicator::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlClusterCommunicator::parkingSpotsChanged)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QmlClusterCommunicator::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QmlClusterCommunicator.data,
    qt_meta_data_QmlClusterCommunicator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QmlClusterCommunicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlClusterCommunicator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlClusterCommunicator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlClusterCommunicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void QmlClusterCommunicator::trafficLightStatus(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlClusterCommunicator::onEmergency(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlClusterCommunicator::onWarningExpired(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QmlClusterCommunicator::vehicleSpeedChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QmlClusterCommunicator::speedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QmlClusterCommunicator::skinChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QmlClusterCommunicator::rpmChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QmlClusterCommunicator::gearChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QmlClusterCommunicator::parkingSpotsChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
