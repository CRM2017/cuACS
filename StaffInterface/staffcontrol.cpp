#include "StaffInterface/staffcontrol.h"
#include "AnimalManagement/manageanimalcontrolfactory.h"
#include <QDebug>
#include "AlgorithmManagement/algorithm.h"
#include <vector>

//using namespace std;

StaffControl::StaffControl()
{
    _view = new StaffWindow(*this);

}

StaffControl::~StaffControl(){

}

void StaffControl::update(){
    _view->update();
     qDebug()<< "StaffWindow updated";
}

void StaffControl::close(){
    _view->close();
    qDebug()<< "StaffWindow closed";
}
void StaffControl::show(){
    _view->show();
     qDebug()<< "StaffWindow opened";
}

void StaffControl::displayAddAnimalWindow(){
    ManageAnimalControl m;
    m.show();
    m.hideEditButton();
    m.hideSaveButton();
}
void StaffControl::displayAddClientWindow(){
    ManageClientControl m;
    m.hideEditButton();
    m.hideSaveButton();
    m.show();
}


void StaffControl::displayViewAnimalWindow(int col){
    ManageAnimalControl m = ManageAnimalControlFactory::getManageAnimalControl();
    m.hideSubmitButton();
    m.hideSaveButton();
    m.hideUploadPhotoButton();
    m.updateAnimalDetailsFromDB(col);
    m.show();

}

void StaffControl::displayViewClientWindow(int col, int animalIndex){
    ManageClientControl m;
    m.hideSubmitButton();
    m.hideEditButton();
    m.hideSaveButton();
    m.updateClientInfoFromDB(col);

    if(animalIndex<0){
        m.disableACMResultButton();
    }
    else {
        m.showACMResultButton();
    }

    m.updateAnimalIndex(animalIndex);
    m.show();

}

void StaffControl::executeACM(){
//    DatabaseControl dbcontrol = DataBaseControlFactory::getDatabaseControl();
//    vector < vector<QString> _animalData = dbcontrol.getAnimalData();
//    vector < vector<QString> _clientInfo = dbcontrol.getClientInfo();
//    qDebug()<<"calcFinalGrade: "<<  _animalData.size();
//    Algorithm acm = new Algorithm(_animalData,_clientInfo);
//    acm.calcFinalGrade();
}

