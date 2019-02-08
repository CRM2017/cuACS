#include "database.h"
#include "QDebug"

Database::Database()
{
    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("./cuACSdb.sqlite");
    createAnimalTable();


}

Database:: ~Database()
{

}

void Database:: disconnectDB(){
    if (!_db.open()){
        _db.close();
         qDebug()<<"Database closed: ";
    }

}

void Database:: createAnimalTable(){
    if (!_db.open())
    {
        qDebug()<<"Fail to open database";
    }
    QString createAnimalTable = "CREATE TABLE animaltable ("
                    "ID INTEGER PRIMARY KEY,"
                    "Name VARCHAR(10),"
                    "Type VARCHAR(15));";

    QSqlQuery qry;
    qry.prepare(createAnimalTable);
    if (!qry.exec())
    {
        qDebug()<<"Database create error: "<< qry.lastError();
    }

}

void Database:: addAnimal(Animal *aAnimal){

    QString insertAnimal = "INSERT INTO animaltable ("
                           "ID,"
                           "Name,"
                           "Type)"
                           "VALUES (:ID,:Name,:Type);";
    QSqlQuery qry;
    qry.prepare(insertAnimal);
    qry.addBindValue(aAnimal->getId());
    qry.addBindValue(aAnimal->getName());
    qry.addBindValue(aAnimal->getType());
    if (!qry.exec())
    {
        qDebug()<<"Adding Error"<< qry.lastError();
    }
}

void Database::queryID(){
    vector<int> ids;
     QString selectID = "select ID from animaltable;";
     QSqlQuery qry;

     if (!qry.exec(selectID))
     {
         qDebug()<<"selection Error"<< qry.lastError();
     }
     else
     {
         while(qry.next()){
            qDebug()<<"select id: "<<qry.value(0).toInt();
           ids.push_back(qry.value(0).toInt());
         }
     }

      _IDList = ids;
}

vector<int> Database:: getIDList(){
    queryID();
    qDebug()<<"in databse: getid:"<< _IDList.at(0);
    return _IDList;
}
QString Database:: getNameByID(){}
QString Database:: getTyoeByID(){}



