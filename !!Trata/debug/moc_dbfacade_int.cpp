/****************************************************************************
** Meta object code from reading C++ file 'dbfacade_int.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../_TraTa/TraTa/dbfacade_int.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbfacade_int.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DBFacade_int_t {
    const uint offsetsAndSize[2];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_DBFacade_int_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_DBFacade_int_t qt_meta_stringdata_DBFacade_int = {
    {
QT_MOC_LITERAL(0, 12) // "DBFacade_int"

    },
    "DBFacade_int"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBFacade_int[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DBFacade_int::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject DBFacade_int::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DBFacade_int.offsetsAndSize,
    qt_meta_data_DBFacade_int,
    qt_static_metacall,
    nullptr,
    nullptr,
    nullptr
} };


const QMetaObject *DBFacade_int::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBFacade_int::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DBFacade_int.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DBFacade_int::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
