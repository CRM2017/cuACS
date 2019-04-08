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
    Storage/client.cpp \
    main.cpp \
    mainwindow.cpp \
    maincontrol.cpp \
    StaffInterface/staffwindow.cpp \
    StaffInterface/staffcontrol.cpp \
    AnimalManagement/manageanimalwindow.cpp \
    AnimalManagement/manageanimalcontrol.cpp \
    Storage/animal.cpp \
    DatabaseManagement/database.cpp \
    DatabaseManagement/databasecontrol.cpp \
    ClientManagement/manageclientwindow.cpp \
    ClientManagement/manageclientcontrol.cpp \
    ClientInterface/clientwindow.cpp \
    ClientInterface/clientcontrol.cpp \
    DatabaseManagement/databasecontrolfactory.cpp \
    AnimalManagement/manageanimalcontrolfactory.cpp \
    subject.cpp \
    observer.cpp \
    AlgorithmManagement/algorithm.cpp

HEADERS += \
    mainwindow.h \
    Storage/client.h \
    maincontrol.h \
    StaffInterface/staffwindow.h \
    StaffInterface/staffcontrol.h \
    AnimalManagement/manageanimalwindow.h \
    AnimalManagement/manageanimalcontrol.h \
    Storage/animal.h \
    DatabaseManagement/database.h \
    DatabaseManagement/databasecontrol.h \
    ClientManagement/manageclientwindow.h \
    ClientManagement/manageclientcontrol.h \
    ClientInterface/clientwindow.h \
    ClientInterface/clientcontrol.h \
    DatabaseManagement/databasecontrolfactory.h \
    AnimalManagement/manageanimalcontrolfactory.h \
    subject.h \
    observer.h \
    AlgorithmManagement/algorithm.h


FORMS += \
    mainwindow.ui \
    StaffInterface/staffwindow.ui \
    AnimalManagement/manageanimalwindow.ui \
    ClientManagement/manageclientwindow.ui \
    ClientInterface/clientwindow.ui

