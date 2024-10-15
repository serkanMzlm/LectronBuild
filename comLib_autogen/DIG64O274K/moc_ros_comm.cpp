/****************************************************************************
** Meta object code from reading C++ file 'ros_comm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../inc/ros_comm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ros_comm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RosComm_t {
    QByteArrayData data[19];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RosComm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RosComm_t qt_meta_stringdata_RosComm = {
    {
QT_MOC_LITERAL(0, 0, 7), // "RosComm"
QT_MOC_LITERAL(1, 8, 14), // "joyDataChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 20), // "selectVehicleChanged"
QT_MOC_LITERAL(4, 45, 20), // "vehicleRxDataChanged"
QT_MOC_LITERAL(5, 66, 11), // "handControl"
QT_MOC_LITERAL(6, 78, 4), // "data"
QT_MOC_LITERAL(7, 83, 11), // "joyCallback"
QT_MOC_LITERAL(8, 95, 14), // "calibrationJoy"
QT_MOC_LITERAL(9, 110, 8), // "setCount"
QT_MOC_LITERAL(10, 119, 7), // "setMesh"
QT_MOC_LITERAL(11, 127, 8), // "setDebug"
QT_MOC_LITERAL(12, 136, 6), // "setLed"
QT_MOC_LITERAL(13, 143, 10), // "setTakeoff"
QT_MOC_LITERAL(14, 154, 12), // "setAvoidance"
QT_MOC_LITERAL(15, 167, 7), // "joyData"
QT_MOC_LITERAL(16, 175, 12), // "QVector<int>"
QT_MOC_LITERAL(17, 188, 13), // "vehicleRxData"
QT_MOC_LITERAL(18, 202, 13) // "selectVehicle"

    },
    "RosComm\0joyDataChanged\0\0selectVehicleChanged\0"
    "vehicleRxDataChanged\0handControl\0data\0"
    "joyCallback\0calibrationJoy\0setCount\0"
    "setMesh\0setDebug\0setLed\0setTakeoff\0"
    "setAvoidance\0joyData\0QVector<int>\0"
    "vehicleRxData\0selectVehicle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RosComm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       3,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   77,    2, 0x02 /* Public */,
       7,    0,   80,    2, 0x02 /* Public */,
       8,    0,   81,    2, 0x02 /* Public */,
       9,    0,   82,    2, 0x02 /* Public */,
      10,    1,   83,    2, 0x02 /* Public */,
      11,    1,   86,    2, 0x02 /* Public */,
      12,    2,   89,    2, 0x02 /* Public */,
      13,    1,   94,    2, 0x02 /* Public */,
      14,    1,   97,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x0049590b,
      17, 0x80000000 | 16, 0x0049590b,
      18, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       1,

       0        // eod
};

void RosComm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RosComm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->joyDataChanged(); break;
        case 1: _t->selectVehicleChanged(); break;
        case 2: _t->vehicleRxDataChanged(); break;
        case 3: _t->handControl((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->joyCallback(); break;
        case 5: _t->calibrationJoy(); break;
        case 6: _t->setCount(); break;
        case 7: _t->setMesh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setDebug((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setLed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->setTakeoff((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->setAvoidance((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RosComm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosComm::joyDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RosComm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosComm::selectVehicleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RosComm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RosComm::vehicleRxDataChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RosComm *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector<int>*>(_v) = _t->joyData(); break;
        case 1: *reinterpret_cast< QVector<int>*>(_v) = _t->vehicleRxData(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->selectVehicle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RosComm *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setJoyData(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 1: _t->setVehicleRxData(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 2: _t->setSelectVehicle(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RosComm::staticMetaObject = { {
    QMetaObject::SuperData::link<SerialComm::staticMetaObject>(),
    qt_meta_stringdata_RosComm.data,
    qt_meta_data_RosComm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RosComm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RosComm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RosComm.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "rclcpp::Node"))
        return static_cast< rclcpp::Node*>(this);
    return SerialComm::qt_metacast(_clname);
}

int RosComm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SerialComm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RosComm::joyDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RosComm::selectVehicleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RosComm::vehicleRxDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
