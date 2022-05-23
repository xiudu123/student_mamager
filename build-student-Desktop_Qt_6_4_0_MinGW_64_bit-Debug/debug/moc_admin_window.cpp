/****************************************************************************
** Meta object code from reading C++ file 'admin_window.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../student/admin_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_admin_window_t {
    const uint offsetsAndSize[20];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_admin_window_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_admin_window_t qt_meta_stringdata_admin_window = {
    {
QT_MOC_LITERAL(0, 12), // "admin_window"
QT_MOC_LITERAL(13, 24), // "on_btn_total_add_clicked"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 26), // "on_btn_total_delet_clicked"
QT_MOC_LITERAL(66, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(90, 28), // "on_btn_admin_Confirm_clicked"
QT_MOC_LITERAL(119, 25), // "on_btn_total_view_clicked"
QT_MOC_LITERAL(145, 27), // "on_btn_total_modify_clicked"
QT_MOC_LITERAL(173, 6), // "choose"
QT_MOC_LITERAL(180, 20) // "on_btn_clear_clicked"

    },
    "admin_window\0on_btn_total_add_clicked\0"
    "\0on_btn_total_delet_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_btn_admin_Confirm_clicked\0"
    "on_btn_total_view_clicked\0"
    "on_btn_total_modify_clicked\0choose\0"
    "on_btn_clear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_admin_window[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,

       0        // eod
};

void admin_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<admin_window *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_total_add_clicked(); break;
        case 1: _t->on_btn_total_delet_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_btn_admin_Confirm_clicked(); break;
        case 4: _t->on_btn_total_view_clicked(); break;
        case 5: _t->on_btn_total_modify_clicked(); break;
        case 6: { int _r = _t->choose();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_btn_clear_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject admin_window::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_admin_window.offsetsAndSize,
    qt_meta_data_admin_window,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_admin_window_t
, QtPrivate::TypeAndForceComplete<admin_window, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *admin_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *admin_window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_admin_window.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int admin_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
