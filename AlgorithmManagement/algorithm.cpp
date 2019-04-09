#include "algorithm.h"
#include "QDebug"
#include "DatabaseManagement/database.h"

Algorithm::Algorithm()
{

}
Algorithm::~Algorithm(){}

double Algorithm::calcFinalGrade (){
    DatabaseControl dbControl;
    vector < vector<QString> > _clientInfo= dbControl.getClientInfo();
    vector < vector<QString> > _animalData= dbControl.getAnimalData();
//    qDebug()<<"calcFinalGrade: "<<  _animalData.size();
//    qDebug()<<"calcFinalGrade: "<<  _clientInfo.size();


}

double Algorithm::calcTypeMatch(QString animalVal, QString preferVal){

}

double Algorithm::calcBasicMatch(QString animalVal, QString preferVal){

}

