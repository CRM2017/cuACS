#ifndef DATABASECONTROLFACTORY_H
#define DATABASECONTROLFACTORY_H

#include "databasecontrol.h"

class DataBaseControlFactory
{
public:
    DataBaseControlFactory();
    static DatabaseControl getDatabaseControl();

private:
    DatabaseControl db;
};

#endif // DATABASECONTROLFACTORY_H
