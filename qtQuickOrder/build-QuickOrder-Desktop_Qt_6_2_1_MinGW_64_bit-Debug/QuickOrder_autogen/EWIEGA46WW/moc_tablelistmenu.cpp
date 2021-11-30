/****************************************************************************
** Meta object code from reading C++ file 'tablelistmenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../QuickOrder/tablelistmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tablelistmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TableListMenu_t {
    const uint offsetsAndSize[12];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TableListMenu_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TableListMenu_t qt_meta_stringdata_TableListMenu = {
    {
QT_MOC_LITERAL(0, 13), // "TableListMenu"
QT_MOC_LITERAL(14, 25), // "on_backPushButton_clicked"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 24), // "on_addPushButton_clicked"
QT_MOC_LITERAL(66, 29), // "on_activatePushButton_clicked"
QT_MOC_LITERAL(96, 32) // "on_desactivatePushButton_clicked"

    },
    "TableListMenu\0on_backPushButton_clicked\0"
    "\0on_addPushButton_clicked\0"
    "on_activatePushButton_clicked\0"
    "on_desactivatePushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TableListMenu[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TableListMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TableListMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_backPushButton_clicked(); break;
        case 1: _t->on_addPushButton_clicked(); break;
        case 2: _t->on_activatePushButton_clicked(); break;
        case 3: _t->on_desactivatePushButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject TableListMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<Menu::staticMetaObject>(),
    qt_meta_stringdata_TableListMenu.offsetsAndSize,
    qt_meta_data_TableListMenu,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TableListMenu_t
, QtPrivate::TypeAndForceComplete<TableListMenu, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *TableListMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableListMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TableListMenu.stringdata0))
        return static_cast<void*>(this);
    return Menu::qt_metacast(_clname);
}

int TableListMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Menu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
