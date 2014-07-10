/****************************************************************************
** Meta object code from reading C++ file 'dgdollartest2addressvalidator.h'
**
** Created: Tue Jul 8 09:37:26 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/dgdollartest2addressvalidator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dgdollartest2addressvalidator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dgdollartest2AddressValidator[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_Dgdollartest2AddressValidator[] = {
    "Dgdollartest2AddressValidator\0"
};

void Dgdollartest2AddressValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dgdollartest2AddressValidator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dgdollartest2AddressValidator::staticMetaObject = {
    { &QValidator::staticMetaObject, qt_meta_stringdata_Dgdollartest2AddressValidator,
      qt_meta_data_Dgdollartest2AddressValidator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dgdollartest2AddressValidator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dgdollartest2AddressValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dgdollartest2AddressValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dgdollartest2AddressValidator))
        return static_cast<void*>(const_cast< Dgdollartest2AddressValidator*>(this));
    return QValidator::qt_metacast(_clname);
}

int Dgdollartest2AddressValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
