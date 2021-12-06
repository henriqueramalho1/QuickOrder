/****************************************************************************
** Meta object code from reading C++ file 'billmenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../QuickOrder/billmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'billmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BillMenu_t {
    const uint offsetsAndSize[20];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BillMenu_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BillMenu_t qt_meta_stringdata_BillMenu = {
    {
QT_MOC_LITERAL(0, 8), // "BillMenu"
QT_MOC_LITERAL(9, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 36), // "on_tableSelection_currentText..."
QT_MOC_LITERAL(69, 4), // "arg1"
QT_MOC_LITERAL(74, 32), // "on_costumerSelection_itemClicked"
QT_MOC_LITERAL(107, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(124, 4), // "item"
QT_MOC_LITERAL(129, 21), // "on_billButton_clicked"
QT_MOC_LITERAL(151, 23) // "on_removeButton_clicked"

    },
    "BillMenu\0on_pushButton_clicked\0\0"
    "on_tableSelection_currentTextChanged\0"
    "arg1\0on_costumerSelection_itemClicked\0"
    "QListWidgetItem*\0item\0on_billButton_clicked\0"
    "on_removeButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BillMenu[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    1,   45,    2, 0x08,    2 /* Private */,
       5,    1,   48,    2, 0x08,    4 /* Private */,
       8,    0,   51,    2, 0x08,    6 /* Private */,
       9,    0,   52,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BillMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BillMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_tableSelection_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_costumerSelection_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_billButton_clicked(); break;
        case 4: _t->on_removeButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject BillMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<Menu::staticMetaObject>(),
    qt_meta_stringdata_BillMenu.offsetsAndSize,
    qt_meta_data_BillMenu,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BillMenu_t
, QtPrivate::TypeAndForceComplete<BillMenu, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *BillMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BillMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BillMenu.stringdata0))
        return static_cast<void*>(this);
    return Menu::qt_metacast(_clname);
}

int BillMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Menu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
