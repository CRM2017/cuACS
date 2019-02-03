#ifndef MAINWINDOWCONTROL_H
#define MAINWINDOWCONTROL_H

#include "mainwindowcontrol.h"
#include "mainwindow.h"
class MainWindowControl
{
public:
    MainWindowControl();
    ~MainWindowControl();

    void showMainWindow();

private:
    MainWindow mainWindowView;

};

#endif // MAINWINDOWCONTROL_H
