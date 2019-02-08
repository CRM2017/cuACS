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

    StuffControl st;
    st.show();


}



void MainControl::displayClientWindow(){
    //D1 do nothing
}

