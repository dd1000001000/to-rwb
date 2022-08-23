QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addworker.cpp \
    cmp.cpp \
    confirm.cpp \
    inputid.cpp \
    main.cpp \
    mainwindow.cpp \
    mana.cpp \
    readonlydelegate.cpp \
    salary.cpp \
    showdiff.cpp \
    sign_in.cpp \
    work.cpp \
    worker.cpp \
    workerlist.cpp

HEADERS += \
    addworker.h \
    cmp.h \
    confirm.h \
    inputid.h \
    mainwindow.h \
    mana.h \
    readonlydelegate.h \
    salary.h \
    showdiff.h \
    sign_in.h \
    work.h \
    worker.h \
    workerlist.h

FORMS += \
    addworker.ui \
    cmp.ui \
    confirm.ui \
    inputid.ui \
    mainwindow.ui \
    mana.ui \
    showdiff.ui \
    sign_in.ui \
    work.ui

TRANSLATIONS += \
    manager_fucking_plus_maybe_it_is_over_but_not_for_me_fub_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
