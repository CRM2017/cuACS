#include "animal.h"
#include "databasecontrol.h"


Animal::Animal(int id, QString name, QString type): _id(id), _name(name), _type(type)
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

void Animal::setName(QString Name){
    _name = Name;
}

void Animal::setType(QString Type){
    _type = Type;
}

