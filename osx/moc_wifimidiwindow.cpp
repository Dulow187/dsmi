/****************************************************************************
** Meta object code from reading C++ file 'wifimidiwindow.h'
**
** Created: Wed May 2 23:51:17 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "wifimidiwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wifimidiwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_WifiMidiWindow[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_WifiMidiWindow[] = {
    "WifiMidiWindow\0"
};

const QMetaObject WifiMidiWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WifiMidiWindow,
      qt_meta_data_WifiMidiWindow, 0 }
};

const QMetaObject *WifiMidiWindow::metaObject() const
{
    return &staticMetaObject;
}

void *WifiMidiWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WifiMidiWindow))
	return static_cast<void*>(const_cast<WifiMidiWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int WifiMidiWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
