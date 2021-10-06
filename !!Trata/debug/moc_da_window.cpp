/****************************************************************************
** Meta object code from reading C++ file 'da_window.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../_TraTa/TraTa/da_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'da_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Da_window_t {
    const uint offsetsAndSize[28];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Da_window_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Da_window_t qt_meta_stringdata_Da_window = {
    {
QT_MOC_LITERAL(0, 9), // "Da_window"
QT_MOC_LITERAL(10, 21), // "on_Submit_All_clicked"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 24), // "on_Revert_Button_clicked"
QT_MOC_LITERAL(58, 21), // "on_Add_Button_clicked"
QT_MOC_LITERAL(80, 24), // "on_Delete_Button_clicked"
QT_MOC_LITERAL(105, 14), // "recieve_tt_dao"
QT_MOC_LITERAL(120, 6), // "TT_Dao"
QT_MOC_LITERAL(127, 4), // "arg1"
QT_MOC_LITERAL(132, 39), // "on_Sort_By_ComboBox_currentIn..."
QT_MOC_LITERAL(172, 5), // "index"
QT_MOC_LITERAL(178, 18), // "on_Show_On_clicked"
QT_MOC_LITERAL(197, 12), // "clr_combobox"
QT_MOC_LITERAL(210, 1) // "i"

    },
    "Da_window\0on_Submit_All_clicked\0\0"
    "on_Revert_Button_clicked\0on_Add_Button_clicked\0"
    "on_Delete_Button_clicked\0recieve_tt_dao\0"
    "TT_Dao\0arg1\0on_Sort_By_ComboBox_currentIndexChanged\0"
    "index\0on_Show_On_clicked\0clr_combobox\0"
    "i"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Da_window[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    0 /* Private */,
       3,    0,   63,    2, 0x08,    1 /* Private */,
       4,    0,   64,    2, 0x08,    2 /* Private */,
       5,    0,   65,    2, 0x08,    3 /* Private */,
       6,    1,   66,    2, 0x08,    4 /* Private */,
       9,    1,   69,    2, 0x08,    6 /* Private */,
      11,    0,   72,    2, 0x08,    8 /* Private */,
      12,    1,   73,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void Da_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Da_window *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Submit_All_clicked(); break;
        case 1: _t->on_Revert_Button_clicked(); break;
        case 2: _t->on_Add_Button_clicked(); break;
        case 3: _t->on_Delete_Button_clicked(); break;
        case 4: _t->recieve_tt_dao((*reinterpret_cast< TT_Dao(*)>(_a[1]))); break;
        case 5: _t->on_Sort_By_ComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_Show_On_clicked(); break;
        case 7: _t->clr_combobox((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Da_window::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Da_window.offsetsAndSize,
    qt_meta_data_Da_window,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Da_window_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<TT_Dao, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *Da_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Da_window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Da_window.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Da_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
