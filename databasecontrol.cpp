#include "databasecontrol.h"
#include "animal.h"

DatabaseControl::DatabaseControl() :_db (new Database())
{


}

DatabaseControl:: ~DatabaseControl()
{
    _db->disconnectDB();
    delete _db;
}



vector<int> DatabaseControl::getIDList(){
    return _db->getIDList();
}
vector<QString> DatabaseControl::getNameList(){
    return _db->getNameList();
}
vector<QString> DatabaseControl::getTypeList(){
    return _db->getTypeList();
}

vector<QString> DatabaseControl::getAgeList(){
    return _db->getAgeList();
}

vector <vector<QString>> DatabaseControl::getAnimalData(){
    return _db->getAnimalData();
}
vector <vector<QString>> DatabaseControl::getClientInfo(){
    return _db->getClientInfo();
}

void DatabaseControl::insertAnimal(Animal *a){
    _db->addAnimal(a);
}

void DatabaseControl::insertClient(Client*c){
    _db->addClient(c);
}
