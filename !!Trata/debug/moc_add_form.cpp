/****************************************************************************
** Meta object code from reading C++ file 'add_form.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../_TraTa/TraTa/add_form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Add_Form_t {
    const uint offsetsAndSize[36];
    char stringdata0[366];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Add_Form_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Add_Form_t qt_meta_stringdata_Add_Form = {
    {
QT_MOC_LITERAL(0, 8), // "Add_Form"
QT_MOC_LITERAL(9, 12), // "tt_dao_ready"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 6), // "TT_Dao"
QT_MOC_LITERAL(30, 10), // "tt_storage"
QT_MOC_LITERAL(41, 27), // "on_Dep_LineEdit_textChanged"
QT_MOC_LITERAL(69, 4), // "arg1"
QT_MOC_LITERAL(74, 31), // "on_Arrival_LineEdit_textChanged"
QT_MOC_LITERAL(106, 35), // "on_Trave_lTime_LineEdit_textC..."
QT_MOC_LITERAL(142, 35), // "on_Seat_Amount_LineEdit_textC..."
QT_MOC_LITERAL(178, 33), // "on_Seat_Free_Lineedit_textCha..."
QT_MOC_LITERAL(212, 32), // "on_Dep_Date_dateEdit_dateChanged"
QT_MOC_LITERAL(245, 4), // "date"
QT_MOC_LITERAL(250, 32), // "on_Dep_Time_LineEdit_timeChanged"
QT_MOC_LITERAL(283, 4), // "time"
QT_MOC_LITERAL(288, 28), // "on_Cost_LineEdit_textChanged"
QT_MOC_LITERAL(317, 25), // "on_Discard_Button_clicked"
QT_MOC_LITERAL(343, 22) // "on_Save_Button_clicked"

    },
    "Add_Form\0tt_dao_ready\0\0TT_Dao\0tt_storage\0"
    "on_Dep_LineEdit_textChanged\0arg1\0"
    "on_Arrival_LineEdit_textChanged\0"
    "on_Trave_lTime_LineEdit_textChanged\0"
    "on_Seat_Amount_LineEdit_textChanged\0"
    "on_Seat_Free_Lineedit_textChanged\0"
    "on_Dep_Date_dateEdit_dateChanged\0date\0"
    "on_Dep_Time_LineEdit_timeChanged\0time\0"
    "on_Cost_LineEdit_textChanged\0"
    "on_Discard_Button_clicked\0"
    "on_Save_Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Add_Form[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   83,    2, 0x08,    2 /* Private */,
       7,    1,   86,    2, 0x08,    4 /* Private */,
       8,    1,   89,    2, 0x08,    6 /* Private */,
       9,    1,   92,    2, 0x08,    8 /* Private */,
      10,    1,   95,    2, 0x08,   10 /* Private */,
      11,    1,   98,    2, 0x08,   12 /* Private */,
      13,    1,  101,    2, 0x08,   14 /* Private */,
      15,    1,  104,    2, 0x08,   16 /* Private */,
      16,    0,  107,    2, 0x08,   18 /* Private */,
      17,    0,  108,    2, 0x08,   19 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QDate,   12,
    QMetaType::Void, QMetaType::QTime,   14,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Add_Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Add_Form *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tt_dao_ready((*reinterpret_cast< TT_Dao(*)>(_a[1]))); break;
        case 1: _t->on_Dep_LineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_Arrival_LineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_Trave_lTime_LineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_Seat_Amount_LineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_Seat_Free_Lineedit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_Dep_Date_dateEdit_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 7: _t->on_Dep_Time_LineEdit_timeChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 8: _t->on_Cost_LineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_Discard_Button_clicked(); break;
        case 10: _t->on_Save_Button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Add_Form::*)(TT_Dao );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Add_Form::tt_dao_ready)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Add_Form::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Add_Form.offsetsAndSize,
    qt_meta_data_Add_Form,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Add_Form_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<TT_Dao, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Add_Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Add_Form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Add_Form.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Add_Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Add_Form::tt_dao_ready(TT_Dao _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
