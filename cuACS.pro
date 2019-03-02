#-------------------------------------------------
#
# Project created by QtCreator 2019-01-27T20:57:27
#
#-------------------------------------------------
QT       += core sql
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cuACS
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    client.cpp \
    main.cpp \
    mainwindow.cpp \
    maincontrol.cpp \
    staffwindow.cpp \
    staffcontrol.cpp \
    manageanimalwindow.cpp \
    manageanimalcontrol.cpp \
    animal.cpp \
    database.cpp \
    databasecontrol.cpp \
    manageclientwindow.cpp \
    manageclientcontrol.cpp \
    clientwindow.cpp \
    clientcontrol.cpp

HEADERS += \
    mainwindow.h \
    client.h \
    maincontrol.h \
    staffwindow.h \
    staffcontrol.h \
    storgePtrCollection.h \
    manageanimalwindow.h \
    manageanimalcontrol.h \
    animal.h \
    database.h \
    databasecontrol.h \
    manageclientwindow.h \
    manageclientcontrol.h \
    clientwindow.h \
    clientcontrol.h


FORMS += \
        mainwindow.ui \
    Staffwindow.ui \
    manageanimalwindow.ui \
    animalviewwindow.ui \
    manageclientwindow.ui \
    clientwindow.ui

