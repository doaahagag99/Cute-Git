/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_readyReadStandardOutput",
    "",
    "on_readyReadStandardError",
    "on_process_finished",
    "exitCode",
    "QProcess::ExitStatus",
    "exitStatus",
    "setPath",
    "p",
    "on_pushButtonRun_clicked",
    "on_pushButtonAddFile_clicked",
    "on_pushButtonAddAll_clicked",
    "on_pushButtonStatus_clicked",
    "on_pushButtonBrowse_clicked",
    "on_pushButtonInit_clicked",
    "on_pushButtonClone_clicked",
    "on_pushButtonCommit_clicked",
    "on_pushButtonDiff_clicked",
    "on_pushButtonDiffStaged_clicked",
    "on_pushButtonReset_clicked",
    "on_pushButtonBranchAll_clicked",
    "on_pushButtonCheckout_clicked",
    "on_pushButtonLog_clicked",
    "on_pushButtonBranch_clicked",
    "on_pushButtonMerge_clicked",
    "on_pushButtonFetch_clicked",
    "on_pushButtonMerge_2_clicked",
    "on_pushButtonPush_clicked",
    "on_pushButtonPull_clicked",
    "on_pushButtonRemoteAdd_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  164,    2, 0x08,    1 /* Private */,
       3,    0,  165,    2, 0x08,    2 /* Private */,
       4,    2,  166,    2, 0x08,    3 /* Private */,
       8,    1,  171,    2, 0x08,    6 /* Private */,
      10,    0,  174,    2, 0x08,    8 /* Private */,
      11,    0,  175,    2, 0x08,    9 /* Private */,
      12,    0,  176,    2, 0x08,   10 /* Private */,
      13,    0,  177,    2, 0x08,   11 /* Private */,
      14,    0,  178,    2, 0x08,   12 /* Private */,
      15,    0,  179,    2, 0x08,   13 /* Private */,
      16,    0,  180,    2, 0x08,   14 /* Private */,
      17,    0,  181,    2, 0x08,   15 /* Private */,
      18,    0,  182,    2, 0x08,   16 /* Private */,
      19,    0,  183,    2, 0x08,   17 /* Private */,
      20,    0,  184,    2, 0x08,   18 /* Private */,
      21,    0,  185,    2, 0x08,   19 /* Private */,
      22,    0,  186,    2, 0x08,   20 /* Private */,
      23,    0,  187,    2, 0x08,   21 /* Private */,
      24,    0,  188,    2, 0x08,   22 /* Private */,
      25,    0,  189,    2, 0x08,   23 /* Private */,
      26,    0,  190,    2, 0x08,   24 /* Private */,
      27,    0,  191,    2, 0x08,   25 /* Private */,
      28,    0,  192,    2, 0x08,   26 /* Private */,
      29,    0,  193,    2, 0x08,   27 /* Private */,
      30,    0,  194,    2, 0x08,   28 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_readyReadStandardOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_readyReadStandardError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_process_finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>,
        // method 'setPath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_pushButtonRun_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonAddFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonAddAll_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonStatus_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonBrowse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonInit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonClone_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonCommit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDiff_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDiffStaged_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonReset_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonBranchAll_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonCheckout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonLog_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonBranch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonMerge_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonFetch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonMerge_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonPush_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonPull_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonRemoteAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_readyReadStandardOutput(); break;
        case 1: _t->on_readyReadStandardError(); break;
        case 2: _t->on_process_finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 3: _t->setPath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_pushButtonRun_clicked(); break;
        case 5: _t->on_pushButtonAddFile_clicked(); break;
        case 6: _t->on_pushButtonAddAll_clicked(); break;
        case 7: _t->on_pushButtonStatus_clicked(); break;
        case 8: _t->on_pushButtonBrowse_clicked(); break;
        case 9: _t->on_pushButtonInit_clicked(); break;
        case 10: _t->on_pushButtonClone_clicked(); break;
        case 11: _t->on_pushButtonCommit_clicked(); break;
        case 12: _t->on_pushButtonDiff_clicked(); break;
        case 13: _t->on_pushButtonDiffStaged_clicked(); break;
        case 14: _t->on_pushButtonReset_clicked(); break;
        case 15: _t->on_pushButtonBranchAll_clicked(); break;
        case 16: _t->on_pushButtonCheckout_clicked(); break;
        case 17: _t->on_pushButtonLog_clicked(); break;
        case 18: _t->on_pushButtonBranch_clicked(); break;
        case 19: _t->on_pushButtonMerge_clicked(); break;
        case 20: _t->on_pushButtonFetch_clicked(); break;
        case 21: _t->on_pushButtonMerge_2_clicked(); break;
        case 22: _t->on_pushButtonPush_clicked(); break;
        case 23: _t->on_pushButtonPull_clicked(); break;
        case 24: _t->on_pushButtonRemoteAdd_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    return _id;
}
QT_WARNING_POP
