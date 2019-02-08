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
    void createAnimalTable();
    void addAnimal(Animal aAnimal);
    vector<int> getIDList();
    QString getNameByID();
    QString getTyoeByID();

private:
    QSqlDatabase _db;
};

#endif // DATABASE_H
