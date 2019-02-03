#ifndef MAINCONTROL_H
#define MAINCONTROL_H

#include "mainwindow.h"
#include "stuffwindow.h"
#include "stuffcontrol.h"
#include <memory>
class MainWindow;

class MainControl
{
public:
    MainControl();
    ~MainControl();
    void displayStuffWindow();
    void displayClinetWindow();

private:
    std::unique_ptr<MainWindow> _view;
};

#endif // MAINCONTROL_H
