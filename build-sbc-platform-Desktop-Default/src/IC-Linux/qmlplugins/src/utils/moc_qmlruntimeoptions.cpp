/****************************************************************************
** Meta object code from reading C++ file 'qmlruntimeoptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../sbc-platform/src/IC-Linux/qmlplugins/src/utils/qmlruntimeoptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlruntimeoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlRuntimeOptions_t {
    QByteArrayData data[9];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlRuntimeOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlRuntimeOptions_t qt_meta_stringdata_QmlRuntimeOptions = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QmlRuntimeOptions"
QT_MOC_LITERAL(1, 18, 7), // "qmlRoot"
QT_MOC_LITERAL(2, 26, 10), // "qmlImports"
QT_MOC_LITERAL(3, 37, 16), // "QVector<QString>"
QT_MOC_LITERAL(4, 54, 10), // "assetsPath"
QT_MOC_LITERAL(5, 65, 11), // "screenWidth"
QT_MOC_LITERAL(6, 77, 12), // "screenHeight"
QT_MOC_LITERAL(7, 90, 12), // "isFullscreen"
QT_MOC_LITERAL(8, 103, 14) // "isHiddenCursor"

    },
    "QmlRuntimeOptions\0qmlRoot\0qmlImports\0"
    "QVector<QString>\0assetsPath\0screenWidth\0"
    "screenHeight\0isFullscreen\0isHiddenCursor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlRuntimeOptions[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QUrl, 0x00095401,
       2, 0x80000000 | 3, 0x00095409,
       4, QMetaType::QUrl, 0x00095401,
       5, QMetaType::Int, 0x00095401,
       6, QMetaType::Int, 0x00095401,
       7, QMetaType::Bool, 0x00095401,
       8, QMetaType::Bool, 0x00095401,

       0        // eod
};

void QmlRuntimeOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QmlRuntimeOptions *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->qmlRoot(); break;
        case 1: *reinterpret_cast< QVector<QString>*>(_v) = _t->qmlImports(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = _t->assetsPath(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->screenWidth(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->screenHeight(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isFullscreen(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isHiddenCursor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject QmlRuntimeOptions::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QmlRuntimeOptions.data,
    qt_meta_data_QmlRuntimeOptions,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QmlRuntimeOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlRuntimeOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlRuntimeOptions.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlRuntimeOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
