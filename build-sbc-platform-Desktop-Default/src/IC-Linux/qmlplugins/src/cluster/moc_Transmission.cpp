/****************************************************************************
** Meta object code from reading C++ file 'Transmission.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../sbc-platform/src/IC-Linux/qmlplugins/src/cluster/Transmission.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Transmission.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Transmission_t {
    QByteArrayData data[9];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Transmission_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Transmission_t qt_meta_stringdata_Transmission = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Transmission"
QT_MOC_LITERAL(1, 13, 8), // "toString"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "Type"
QT_MOC_LITERAL(4, 28, 5), // "value"
QT_MOC_LITERAL(5, 34, 4), // "PARK"
QT_MOC_LITERAL(6, 39, 7), // "REVERSE"
QT_MOC_LITERAL(7, 47, 5), // "DRIVE"
QT_MOC_LITERAL(8, 53, 7) // "NEUTRAL"

    },
    "Transmission\0toString\0\0Type\0value\0"
    "PARK\0REVERSE\0DRIVE\0NEUTRAL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Transmission[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   22, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, 0x80000000 | 3,    4,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    4,   27,

 // enum data: key, value
       5, uint(Transmission::PARK),
       6, uint(Transmission::REVERSE),
       7, uint(Transmission::DRIVE),
       8, uint(Transmission::NEUTRAL),

       0        // eod
};

void Transmission::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<Transmission *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->toString((*reinterpret_cast< Type(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Transmission::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_Transmission.data,
    qt_meta_data_Transmission,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
