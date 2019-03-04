#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include "animal.h"
#include "client.h"
#include <vector>
class Database
{
public:
    Database();
    ~Database();
    void disconnectDB();
    void openDatabase();
    void addAnimal(Animal *aAnimal);
    void addClient(Client *aClient);
    void queryID();
    void queryClientTable();
    vector <int> getIDList();
    vector<QString> getNameList();
    vector<QString> getTypeList();
    vector<QString> getAgeList();
    vector < vector<QString> > getAnimalData();
    vector < vector<QString> > getClientInfo();

private:
    QSqlDatabase _db;
    vector <int> _IDList;
    vector <QString> _nameList;
    vector <QString> _typeList;
    vector <QString> _ageList;
    vector < vector<QString> > _animalData;
    vector < vector<QString> > _clientInfo;
};

#endif // DATABASE_H
