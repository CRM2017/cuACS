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
    void createAnimalTable();
    void addAnimal(Animal *aAnimal);
    void queryID();
    vector <int> getIDList();
    vector<QString> getNameList();
    vector<QString> getTypeList();

private:
    QSqlDatabase _db;
    vector <int> _IDList;
    vector <QString> _nameList;
    vector <QString> _typeList;
};

#endif // DATABASE_H
