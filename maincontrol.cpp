#include "maincontrol.h"
#include "mainwindow.h"
#include "stuffcontrol.h"


MainControl::MainControl()
    : _view(new MainWindow(*this))
{
    _view->show();
}

MainControl::~MainControl(){}

void MainControl::displayStuffWindow(){
    _view->close();
    StuffControl st;

}

void MainControl::displayClinetWindow(){
    //D1 do nothing
}

