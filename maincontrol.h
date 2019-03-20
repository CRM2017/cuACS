// used to control main window

#ifndef MAINCONTROL_H
#define MAINCONTROL_H

#include "mainwindow.h"
#include "StaffInterface/staffwindow.h"
#include "StaffInterface/staffcontrol.h"
#include <memory>
class MainWindow;

class MainControl
{
public:
    MainControl();
    ~MainControl();
    void displayStaffWindow();
    void displayClientWindow();

private:
    std::unique_ptr<MainWindow> _view;

};

#endif // MAINCONTROL_H
