#include "databasecontrolfactory.h"
#include"databasecontrol.h"

//DatabaseControl DataBaseControlFactory::db;

DataBaseControlFactory::DataBaseControlFactory()
{
}

DatabaseControl DataBaseControlFactory::getDatabaseControl(){
    DatabaseControl db;
    return db;
}
