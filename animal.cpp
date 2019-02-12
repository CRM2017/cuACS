#include "animal.h"
#include "databasecontrol.h"


Animal::Animal(const int id, const QString& name, const QString &type): _id(id), _name(name), _type(type)
{

}

Animal::~Animal(){
}

int Animal::getId()const{
    return _id;
}

QString Animal::getName()const{
    return _name;
}


QString Animal::getType()const{
    return _type;
}



