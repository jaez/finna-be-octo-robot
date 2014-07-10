/****************************************************************************
** Meta object code from reading C++ file 'dgdollartest2gui.h'
**
** Created: Tue Jul 8 09:37:18 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/dgdollartest2gui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dgdollartest2gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dgdollartest2GUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x0a,
      66,   47,   17,   17, 0x0a,
      95,   88,   17,   17, 0x0a,
     144,  120,   17,   17, 0x0a,
     200,  180,   17,   17, 0x2a,
     250,  230,   17,   17, 0x0a,
     278,  271,   17,   17, 0x0a,
     327,  297,   17,   17, 0x0a,
     383,   17,   17,   17, 0x08,
     402,   17,   17,   17, 0x08,
     420,   17,   17,   17, 0x08,
     442,   17,   17,   17, 0x08,
     470,  465,   17,   17, 0x08,
     497,   17,   17,   17, 0x28,
     517,  465,   17,   17, 0x08,
     545,   17,   17,   17, 0x28,
     566,  465,   17,   17, 0x08,
     596,   17,   17,   17, 0x28,
     619,   17,   17,   17, 0x08,
     636,   17,   17,   17, 0x08,
     658,  651,   17,   17, 0x08,
     725,  711,   17,   17, 0x08,
     753,   17,   17,   17, 0x28,
     777,   17,   17,   17, 0x08,
     792,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dgdollartest2GUI[] = {
    "Dgdollartest2GUI\0\0count\0setNumConnections(int)\0"
    "count,nTotalBlocks\0setNumBlocks(int,int)\0"
    "status\0setEncryptionStatus(int)\0"
    "title,message,style,ret\0"
    "message(QString,QString,uint,bool*)\0"
    "title,message,style\0message(QString,QString,uint)\0"
    "nFeeRequired,payFee\0askFee(qint64,bool*)\0"
    "strURI\0handleURI(QString)\0"
    "date,unit,amount,type,address\0"
    "incomingTransaction(QString,int,qint64,QString,QString)\0"
    "gotoOverviewPage()\0gotoHistoryPage()\0"
    "gotoAddressBookPage()\0gotoReceiveCoinsPage()\0"
    "addr\0gotoSendCoinsPage(QString)\0"
    "gotoSendCoinsPage()\0gotoSignMessageTab(QString)\0"
    "gotoSignMessageTab()\0gotoVerifyMessageTab(QString)\0"
    "gotoVerifyMessageTab()\0optionsClicked()\0"
    "aboutClicked()\0reason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "fToggleHidden\0showNormalIfMinimized(bool)\0"
    "showNormalIfMinimized()\0toggleHidden()\0"
    "detectShutdown()\0"
};

void Dgdollartest2GUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dgdollartest2GUI *_t = static_cast<Dgdollartest2GUI *>(_o);
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4]))); break;
        case 4: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 5: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 6: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->incomingTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 8: _t->gotoOverviewPage(); break;
        case 9: _t->gotoHistoryPage(); break;
        case 10: _t->gotoAddressBookPage(); break;
        case 11: _t->gotoReceiveCoinsPage(); break;
        case 12: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->gotoSendCoinsPage(); break;
        case 14: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->gotoSignMessageTab(); break;
        case 16: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->gotoVerifyMessageTab(); break;
        case 18: _t->optionsClicked(); break;
        case 19: _t->aboutClicked(); break;
        case 20: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 21: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->showNormalIfMinimized(); break;
        case 23: _t->toggleHidden(); break;
        case 24: _t->detectShutdown(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dgdollartest2GUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dgdollartest2GUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Dgdollartest2GUI,
      qt_meta_data_Dgdollartest2GUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dgdollartest2GUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dgdollartest2GUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dgdollartest2GUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dgdollartest2GUI))
        return static_cast<void*>(const_cast< Dgdollartest2GUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Dgdollartest2GUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
