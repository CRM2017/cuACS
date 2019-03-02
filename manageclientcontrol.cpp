#include "manageclientcontrol.h"
#include "client.h"
#include "QDebug"

ManageClientControl::ManageClientControl() : _view(*this)
{
    //_view = new ManageClientWindow(*this);
    //_view->exec();
    _view.exec();
}

ManageClientControl::~ManageClientControl(){}

/*ManageClientControl::show(){
    qDebug()<<"client creating window opened";
    _view->show();
}

ManageClientControl::close(){
    qDebug()<<"client creating window closed";
    _view->close();

}*/

//void ManageClientControl::hideSubmitButton(){}
