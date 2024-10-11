/****************************************************************************
** Meta object code from reading C++ file 'computer_info.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../computer_info.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'computer_info.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSComputerInfoENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSComputerInfoENDCLASS = QtMocHelpers::stringData(
    "ComputerInfo",
    "calenderChanged",
    "",
    "clockChanged",
    "chargeChanged",
    "calender",
    "clock",
    "charge"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSComputerInfoENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[14];
    char stringdata5[9];
    char stringdata6[6];
    char stringdata7[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSComputerInfoENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSComputerInfoENDCLASS_t qt_meta_stringdata_CLASSComputerInfoENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "ComputerInfo"
        QT_MOC_LITERAL(13, 15),  // "calenderChanged"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 12),  // "clockChanged"
        QT_MOC_LITERAL(43, 13),  // "chargeChanged"
        QT_MOC_LITERAL(57, 8),  // "calender"
        QT_MOC_LITERAL(66, 5),  // "clock"
        QT_MOC_LITERAL(72, 6)   // "charge"
    },
    "ComputerInfo",
    "calenderChanged",
    "",
    "clockChanged",
    "chargeChanged",
    "calender",
    "clock",
    "charge"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSComputerInfoENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    4 /* Public */,
       3,    0,   33,    2, 0x06,    5 /* Public */,
       4,    0,   34,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00015903, uint(0), 0,
       6, QMetaType::QString, 0x00015903, uint(1), 0,
       7, QMetaType::QString, 0x00015903, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ComputerInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSComputerInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSComputerInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSComputerInfoENDCLASS_t,
        // property 'calender'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'clock'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'charge'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ComputerInfo, std::true_type>,
        // method 'calenderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clockChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'chargeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ComputerInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComputerInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->calenderChanged(); break;
        case 1: _t->clockChanged(); break;
        case 2: _t->chargeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComputerInfo::*)();
            if (_t _q_method = &ComputerInfo::calenderChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComputerInfo::*)();
            if (_t _q_method = &ComputerInfo::clockChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ComputerInfo::*)();
            if (_t _q_method = &ComputerInfo::chargeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ComputerInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->calender(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->clock(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->charge(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ComputerInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCalender(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setClock(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setCharge(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *ComputerInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComputerInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSComputerInfoENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ComputerInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ComputerInfo::calenderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ComputerInfo::clockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ComputerInfo::chargeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
