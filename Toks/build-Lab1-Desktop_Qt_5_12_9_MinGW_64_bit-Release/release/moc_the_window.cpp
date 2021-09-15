/****************************************************************************
** Meta object code from reading C++ file 'the_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Lab1/the_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'the_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_The_Window_t {
    QByteArrayData data[11];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_The_Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_The_Window_t qt_meta_stringdata_The_Window = {
    {
QT_MOC_LITERAL(0, 0, 10), // "The_Window"
QT_MOC_LITERAL(1, 11, 15), // "openButton_Slot"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "closeButton_Slot"
QT_MOC_LITERAL(4, 45, 15), // "sendButton_Slot"
QT_MOC_LITERAL(5, 61, 24), // "PortSelect_ComboBox_Slot"
QT_MOC_LITERAL(6, 86, 10), // "pickedPort"
QT_MOC_LITERAL(7, 97, 25), // "SpeedSelect_ComboBox_Slot"
QT_MOC_LITERAL(8, 123, 11), // "pickedSpeed"
QT_MOC_LITERAL(9, 135, 14), // "checkData_Slot"
QT_MOC_LITERAL(10, 150, 9) // "Update_RX"

    },
    "The_Window\0openButton_Slot\0\0"
    "closeButton_Slot\0sendButton_Slot\0"
    "PortSelect_ComboBox_Slot\0pickedPort\0"
    "SpeedSelect_ComboBox_Slot\0pickedSpeed\0"
    "checkData_Slot\0Update_RX"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_The_Window[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void The_Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<The_Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openButton_Slot(); break;
        case 1: _t->closeButton_Slot(); break;
        case 2: _t->sendButton_Slot(); break;
        case 3: _t->PortSelect_ComboBox_Slot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->SpeedSelect_ComboBox_Slot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->checkData_Slot(); break;
        case 6: _t->Update_RX(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject The_Window::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_The_Window.data,
    qt_meta_data_The_Window,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *The_Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *The_Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_The_Window.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int The_Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
