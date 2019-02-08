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
    void addAnimal(Animal aAnimal);
    void queryID();
    vector <int> getIDList();
    QString getNameByID();
    QString getTyoeByID();

private:
    QSqlDatabase _db;
    vector <int> _IDList;
};

#endif // DATABASE_H
