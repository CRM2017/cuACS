#############################################################################
# Makefile for building: cuACS
# Generated by qmake (3.1) (Qt 5.9.5)
# Project:  ../cuACS/cuACS.pro
# Template: app
# Command: /usr/lib/qt5/bin/qmake -o Makefile ../cuACS/cuACS.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
#############################################################################

MAKEFILE      = Makefile

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_DEPRECATED_WARNINGS -DQT_QML_DEBUG -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_SQL_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I../cuACS -I. -isystem /usr/include/x86_64-linux-gnu/qt5 -isystem /usr/include/x86_64-linux-gnu/qt5/QtWidgets -isystem /usr/include/x86_64-linux-gnu/qt5/QtGui -isystem /usr/include/x86_64-linux-gnu/qt5/QtSql -isystem /usr/include/x86_64-linux-gnu/qt5/QtCore -I. -isystem /usr/include/libdrm -I. -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++
QMAKE         = /usr/lib/qt5/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
QINSTALL      = /usr/lib/qt5/bin/qmake -install qinstall
QINSTALL_PROGRAM = /usr/lib/qt5/bin/qmake -install qinstall -exe
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = cuACS1.0.0
DISTDIR = /home/student/Desktop/build-cuACS-Desktop-Debug/.tmp/cuACS1.0.0
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS) -lQt5Widgets -lQt5Gui -lQt5Sql -lQt5Core -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../cuACS/client.cpp \
		../cuACS/main.cpp \
		../cuACS/mainwindow.cpp \
		../cuACS/maincontrol.cpp \
		../cuACS/staffwindow.cpp \
		../cuACS/staffcontrol.cpp \
		../cuACS/manageanimalwindow.cpp \
		../cuACS/manageanimalcontrol.cpp \
		../cuACS/animal.cpp \
		../cuACS/database.cpp \
		../cuACS/databasecontrol.cpp \
		../cuACS/manageclientwindow.cpp \
		../cuACS/manageclientcontrol.cpp \
		../cuACS/clientwindow.cpp \
		../cuACS/clientcontrol.cpp moc_mainwindow.cpp \
		moc_staffwindow.cpp \
		moc_manageanimalwindow.cpp \
		moc_manageclientwindow.cpp \
		moc_clientwindow.cpp
OBJECTS       = client.o \
		main.o \
		mainwindow.o \
		maincontrol.o \
		staffwindow.o \
		staffcontrol.o \
		manageanimalwindow.o \
		manageanimalcontrol.o \
		animal.o \
		database.o \
		databasecontrol.o \
		manageclientwindow.o \
		manageclientcontrol.o \
		clientwindow.o \
		clientcontrol.o \
		moc_mainwindow.o \
		moc_staffwindow.o \
		moc_manageanimalwindow.o \
		moc_manageclientwindow.o \
		moc_clientwindow.o
DIST          = /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3danimation.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dcore.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dextras.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dinput.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dlogic.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquick.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickanimation.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickextras.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickinput.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickrender.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3drender.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_egl_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_fb_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_glx_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_input_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_service_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_theme_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/toolchain.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qml_debug.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qmake_use.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/file_copies.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf \
		../cuACS/cuACS.pro ../cuACS/mainwindow.h \
		../cuACS/client.h \
		../cuACS/maincontrol.h \
		../cuACS/staffwindow.h \
		../cuACS/staffcontrol.h \
		../cuACS/manageanimalwindow.h \
		../cuACS/manageanimalcontrol.h \
		../cuACS/animal.h \
		../cuACS/database.h \
		../cuACS/databasecontrol.h \
		../cuACS/manageclientwindow.h \
		../cuACS/manageclientcontrol.h \
		../cuACS/clientwindow.h \
		../cuACS/clientcontrol.h ../cuACS/client.cpp \
		../cuACS/main.cpp \
		../cuACS/mainwindow.cpp \
		../cuACS/maincontrol.cpp \
		../cuACS/staffwindow.cpp \
		../cuACS/staffcontrol.cpp \
		../cuACS/manageanimalwindow.cpp \
		../cuACS/manageanimalcontrol.cpp \
		../cuACS/animal.cpp \
		../cuACS/database.cpp \
		../cuACS/databasecontrol.cpp \
		../cuACS/manageclientwindow.cpp \
		../cuACS/manageclientcontrol.cpp \
		../cuACS/clientwindow.cpp \
		../cuACS/clientcontrol.cpp
QMAKE_TARGET  = cuACS
DESTDIR       = 
TARGET        = cuACS


first: all
####### Build rules

$(TARGET): ui_mainwindow.h ui_staffwindow.h ui_manageanimalwindow.h ui_manageclientwindow.h ui_clientwindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: ../cuACS/cuACS.pro /usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++/qmake.conf /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3danimation.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dcore.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dextras.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dinput.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dlogic.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquick.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickanimation.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickextras.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickinput.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickrender.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3drender.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_egl_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_fb_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_glx_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_input_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_kms_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quickwidgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_service_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_theme_support_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++/qmake.conf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/toolchain.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qml_debug.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qmake_use.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/file_copies.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf \
		/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf \
		../cuACS/cuACS.pro \
		/usr/lib/x86_64-linux-gnu/libQt5Widgets.prl \
		/usr/lib/x86_64-linux-gnu/libQt5Gui.prl \
		/usr/lib/x86_64-linux-gnu/libQt5Sql.prl \
		/usr/lib/x86_64-linux-gnu/libQt5Core.prl
	$(QMAKE) -o Makefile ../cuACS/cuACS.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_pre.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/linux.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/sanitize.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/gcc-base-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-base.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/common/g++-unix.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/qconfig.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3danimation.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dcore.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dextras.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dinput.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dlogic.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquick.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickanimation.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickextras.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickinput.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickrender.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3dquickscene2d.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_3drender.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_accessibility_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_core_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_egl_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfs_kms_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eglfsdeviceintegration_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_fb_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_glx_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_gui_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_input_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_kms_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_linuxaccessibility_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_network_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qml.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_qmltest.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quick.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_quickwidgets.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_service_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_sql_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_theme_support_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/modules/qt_lib_xml_private.pri:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_functions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++/qmake.conf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/spec_post.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exclusive_builds.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/toolchain.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_pre.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resolve_config.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/default_post.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qml_debug.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/warn_on.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qt.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/resources.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/moc.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/opengl.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/uic.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/unix/thread.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/qmake_use.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/file_copies.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/testcase_targets.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/exceptions.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/yacc.prf:
/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/lex.prf:
../cuACS/cuACS.pro:
/usr/lib/x86_64-linux-gnu/libQt5Widgets.prl:
/usr/lib/x86_64-linux-gnu/libQt5Gui.prl:
/usr/lib/x86_64-linux-gnu/libQt5Sql.prl:
/usr/lib/x86_64-linux-gnu/libQt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile ../cuACS/cuACS.pro -spec linux-g++ CONFIG+=debug CONFIG+=qml_debug

qmake_all: FORCE


all: Makefile $(TARGET)

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/
	$(COPY_FILE) --parents /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/data/dummy.cpp $(DISTDIR)/
	$(COPY_FILE) --parents ../cuACS/mainwindow.h ../cuACS/client.h ../cuACS/maincontrol.h ../cuACS/staffwindow.h ../cuACS/staffcontrol.h ../cuACS/manageanimalwindow.h ../cuACS/manageanimalcontrol.h ../cuACS/animal.h ../cuACS/database.h ../cuACS/databasecontrol.h ../cuACS/manageclientwindow.h ../cuACS/manageclientcontrol.h ../cuACS/clientwindow.h ../cuACS/clientcontrol.h $(DISTDIR)/
	$(COPY_FILE) --parents ../cuACS/client.cpp ../cuACS/main.cpp ../cuACS/mainwindow.cpp ../cuACS/maincontrol.cpp ../cuACS/staffwindow.cpp ../cuACS/staffcontrol.cpp ../cuACS/manageanimalwindow.cpp ../cuACS/manageanimalcontrol.cpp ../cuACS/animal.cpp ../cuACS/database.cpp ../cuACS/databasecontrol.cpp ../cuACS/manageclientwindow.cpp ../cuACS/manageclientcontrol.cpp ../cuACS/clientwindow.cpp ../cuACS/clientcontrol.cpp $(DISTDIR)/
	$(COPY_FILE) --parents ../cuACS/mainwindow.ui ../cuACS/staffwindow.ui ../cuACS/manageanimalwindow.ui ../cuACS/manageclientwindow.ui ../cuACS/clientwindow.ui $(DISTDIR)/


clean: compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) .qmake.stash
	-$(DEL_FILE) Makefile


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

benchmark: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_predefs_make_all: moc_predefs.h
compiler_moc_predefs_clean:
	-$(DEL_FILE) moc_predefs.h
moc_predefs.h: /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/data/dummy.cpp
	g++ -pipe -g -Wall -W -dM -E -o moc_predefs.h /usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/data/dummy.cpp

compiler_moc_header_make_all: moc_mainwindow.cpp moc_staffwindow.cpp moc_manageanimalwindow.cpp moc_manageclientwindow.cpp moc_clientwindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_staffwindow.cpp moc_manageanimalwindow.cpp moc_manageclientwindow.cpp moc_clientwindow.cpp
moc_mainwindow.cpp: ../cuACS/maincontrol.h \
		../cuACS/mainwindow.h \
		../cuACS/staffwindow.h \
		../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		../cuACS/staffcontrol.h \
		../cuACS/manageanimalcontrol.h \
		../cuACS/manageanimalwindow.h \
		../cuACS/manageclientcontrol.h \
		../cuACS/manageclientwindow.h \
		../cuACS/mainwindow.h \
		moc_predefs.h \
		/usr/lib/qt5/bin/moc
	/usr/lib/qt5/bin/moc $(DEFINES) --include ./moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++ -I/home/student/Desktop/cuACS -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtSql -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I. -I/usr/include/c++/7 -I/usr/include/x86_64-linux-gnu/c++/7 -I/usr/include/c++/7/backward -I/usr/lib/gcc/x86_64-linux-gnu/7/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include ../cuACS/mainwindow.h -o moc_mainwindow.cpp

moc_staffwindow.cpp: ../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		../cuACS/staffwindow.h \
		moc_predefs.h \
		/usr/lib/qt5/bin/moc
	/usr/lib/qt5/bin/moc $(DEFINES) --include ./moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++ -I/home/student/Desktop/cuACS -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtSql -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I. -I/usr/include/c++/7 -I/usr/include/x86_64-linux-gnu/c++/7 -I/usr/include/c++/7/backward -I/usr/lib/gcc/x86_64-linux-gnu/7/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include ../cuACS/staffwindow.h -o moc_staffwindow.cpp

moc_manageanimalwindow.cpp: ../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		../cuACS/manageanimalwindow.h \
		moc_predefs.h \
		/usr/lib/qt5/bin/moc
	/usr/lib/qt5/bin/moc $(DEFINES) --include ./moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++ -I/home/student/Desktop/cuACS -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtSql -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I. -I/usr/include/c++/7 -I/usr/include/x86_64-linux-gnu/c++/7 -I/usr/include/c++/7/backward -I/usr/lib/gcc/x86_64-linux-gnu/7/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include ../cuACS/manageanimalwindow.h -o moc_manageanimalwindow.cpp

moc_manageclientwindow.cpp: ../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		../cuACS/manageclientwindow.h \
		moc_predefs.h \
		/usr/lib/qt5/bin/moc
	/usr/lib/qt5/bin/moc $(DEFINES) --include ./moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++ -I/home/student/Desktop/cuACS -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtSql -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I. -I/usr/include/c++/7 -I/usr/include/x86_64-linux-gnu/c++/7 -I/usr/include/c++/7/backward -I/usr/lib/gcc/x86_64-linux-gnu/7/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include ../cuACS/manageclientwindow.h -o moc_manageclientwindow.cpp

moc_clientwindow.cpp: ../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		../cuACS/clientwindow.h \
		moc_predefs.h \
		/usr/lib/qt5/bin/moc
	/usr/lib/qt5/bin/moc $(DEFINES) --include ./moc_predefs.h -I/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++ -I/home/student/Desktop/cuACS -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtSql -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I. -I/usr/include/c++/7 -I/usr/include/x86_64-linux-gnu/c++/7 -I/usr/include/c++/7/backward -I/usr/lib/gcc/x86_64-linux-gnu/7/include -I/usr/local/include -I/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed -I/usr/include/x86_64-linux-gnu -I/usr/include ../cuACS/clientwindow.h -o moc_clientwindow.cpp

compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_staffwindow.h ui_manageanimalwindow.h ui_manageclientwindow.h ui_clientwindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_staffwindow.h ui_manageanimalwindow.h ui_manageclientwindow.h ui_clientwindow.h
ui_mainwindow.h: ../cuACS/mainwindow.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic ../cuACS/mainwindow.ui -o ui_mainwindow.h

ui_staffwindow.h: ../cuACS/staffwindow.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic ../cuACS/staffwindow.ui -o ui_staffwindow.h

ui_manageanimalwindow.h: ../cuACS/manageanimalwindow.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic ../cuACS/manageanimalwindow.ui -o ui_manageanimalwindow.h

ui_manageclientwindow.h: ../cuACS/manageclientwindow.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic ../cuACS/manageclientwindow.ui -o ui_manageclientwindow.h

ui_clientwindow.h: ../cuACS/clientwindow.ui \
		/usr/lib/qt5/bin/uic
	/usr/lib/qt5/bin/uic ../cuACS/clientwindow.ui -o ui_clientwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_predefs_clean compiler_moc_header_clean compiler_uic_clean 

####### Compile

client.o: ../cuACS/client.cpp ../cuACS/client.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o client.o ../cuACS/client.cpp

main.o: ../cuACS/main.cpp ../cuACS/mainwindow.h \
		../cuACS/maincontrol.h \
		../cuACS/staffwindow.h \
		../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		../cuACS/staffcontrol.h \
		../cuACS/manageanimalcontrol.h \
		../cuACS/manageanimalwindow.h \
		../cuACS/manageclientcontrol.h \
		../cuACS/manageclientwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o ../cuACS/main.cpp

mainwindow.o: ../cuACS/mainwindow.cpp ../cuACS/mainwindow.h \
		../cuACS/maincontrol.h \
		../cuACS/staffwindow.h \
		../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		../cuACS/staffcontrol.h \
		../cuACS/manageanimalcontrol.h \
		../cuACS/manageanimalwindow.h \
		../cuACS/manageclientcontrol.h \
		../cuACS/manageclientwindow.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o ../cuACS/mainwindow.cpp

maincontrol.o: ../cuACS/maincontrol.cpp ../cuACS/maincontrol.h \
		../cuACS/mainwindow.h \
		../cuACS/staffwindow.h \
		../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		../cuACS/staffcontrol.h \
		../cuACS/manageanimalcontrol.h \
		../cuACS/manageanimalwindow.h \
		../cuACS/manageclientcontrol.h \
		../cuACS/manageclientwindow.h \
		../cuACS/clientcontrol.h \
		../cuACS/clientwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o maincontrol.o ../cuACS/maincontrol.cpp

staffwindow.o: ../cuACS/staffwindow.cpp ../cuACS/staffwindow.h \
		../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		ui_staffwindow.h \
		../cuACS/staffcontrol.h \
		../cuACS/manageanimalcontrol.h \
		../cuACS/manageanimalwindow.h \
		../cuACS/manageclientcontrol.h \
		../cuACS/manageclientwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o staffwindow.o ../cuACS/staffwindow.cpp

staffcontrol.o: ../cuACS/staffcontrol.cpp ../cuACS/staffcontrol.h \
		../cuACS/staffwindow.h \
		../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		../cuACS/manageanimalcontrol.h \
		../cuACS/manageanimalwindow.h \
		../cuACS/manageclientcontrol.h \
		../cuACS/manageclientwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o staffcontrol.o ../cuACS/staffcontrol.cpp

manageanimalwindow.o: ../cuACS/manageanimalwindow.cpp ../cuACS/manageanimalwindow.h \
		../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		ui_manageanimalwindow.h \
		../cuACS/staffwindow.h \
		../cuACS/staffcontrol.h \
		../cuACS/manageanimalcontrol.h \
		../cuACS/manageclientcontrol.h \
		../cuACS/manageclientwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o manageanimalwindow.o ../cuACS/manageanimalwindow.cpp

manageanimalcontrol.o: ../cuACS/manageanimalcontrol.cpp ../cuACS/manageanimalcontrol.h \
		../cuACS/manageanimalwindow.h \
		../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o manageanimalcontrol.o ../cuACS/manageanimalcontrol.cpp

animal.o: ../cuACS/animal.cpp ../cuACS/animal.h \
		../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/client.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o animal.o ../cuACS/animal.cpp

database.o: ../cuACS/database.cpp ../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o database.o ../cuACS/database.cpp

databasecontrol.o: ../cuACS/databasecontrol.cpp ../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o databasecontrol.o ../cuACS/databasecontrol.cpp

manageclientwindow.o: ../cuACS/manageclientwindow.cpp ../cuACS/manageclientwindow.h \
		../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		ui_manageclientwindow.h \
		../cuACS/staffwindow.h \
		../cuACS/staffcontrol.h \
		../cuACS/manageanimalcontrol.h \
		../cuACS/manageanimalwindow.h \
		../cuACS/manageclientcontrol.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o manageclientwindow.o ../cuACS/manageclientwindow.cpp

manageclientcontrol.o: ../cuACS/manageclientcontrol.cpp ../cuACS/manageclientcontrol.h \
		../cuACS/manageclientwindow.h \
		../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o manageclientcontrol.o ../cuACS/manageclientcontrol.cpp

clientwindow.o: ../cuACS/clientwindow.cpp ../cuACS/clientwindow.h \
		../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		ui_clientwindow.h \
		../cuACS/clientcontrol.h \
		../cuACS/manageanimalcontrol.h \
		../cuACS/manageanimalwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o clientwindow.o ../cuACS/clientwindow.cpp

clientcontrol.o: ../cuACS/clientcontrol.cpp ../cuACS/clientcontrol.h \
		../cuACS/clientwindow.h \
		../cuACS/databasecontrol.h \
		../cuACS/database.h \
		../cuACS/animal.h \
		../cuACS/client.h \
		../cuACS/manageanimalcontrol.h \
		../cuACS/manageanimalwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o clientcontrol.o ../cuACS/clientcontrol.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_staffwindow.o: moc_staffwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_staffwindow.o moc_staffwindow.cpp

moc_manageanimalwindow.o: moc_manageanimalwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_manageanimalwindow.o moc_manageanimalwindow.cpp

moc_manageclientwindow.o: moc_manageclientwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_manageclientwindow.o moc_manageclientwindow.cpp

moc_clientwindow.o: moc_clientwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_clientwindow.o moc_clientwindow.cpp

####### Install

install:  FORCE

uninstall:  FORCE

FORCE:
