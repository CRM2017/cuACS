#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include "animal.h"
#include <vector>
class Database
{
public:
    Database();
    ~Database();
    void disconnectDB();
    void openDatabase();
    void addAnimal(Animal *aAnimal);
    void queryID();
    vector <int> getIDList();
    vector<QString> getNameList();
    vector<QString> getTypeList();
    vector<QString> getAgeList();
    vector < vector<QString> > getAnimalData();

private:
    QSqlDatabase _db;
    vector <int> _IDList;
    vector <QString> _nameList;
    vector <QString> _typeList;
    vector <QString> _ageList;
    vector < vector<QString> > _animalData;
};

#endif // DATABASE_H
