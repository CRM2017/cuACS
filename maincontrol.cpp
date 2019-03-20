#include "maincontrol.h"
#include "mainwindow.h"
#include "StaffInterface/staffcontrol.h"
#include "ClientInterface/clientcontrol.h"


MainControl::MainControl()
    : _view(new MainWindow(*this))
{
    _view->show();
}

MainControl::~MainControl(){}

void MainControl::displayStaffWindow(){

    StaffControl st;
    st.show();


}


void MainControl::displayClientWindow(){
    ClientControl cc;
    cc.show();

}

