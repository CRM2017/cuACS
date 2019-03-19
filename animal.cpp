#include "animal.h"
#include "databasecontrol.h"


Animal::Animal(const int id, const QString& name, const QString &type, const QString &breed, const QString &age, const QString &gender,
               const QString &color,const QString &weight, const QString &height, const QString &spayed, const QString &vaccine, const QString &aggressivity,
               const QString &trained,const QString &personality, const QString & feeding, const QString &food, const QString &appetite,
               const QString &source,const QString &exercise, const QString &skills, const QString &learning, const QString &space, const QString &fee, const QString &relativePhotoPath):

        _id(id), _name(name), _type(type), _breed(breed),_age(age), _gender(gender), _color(color), _weight(weight), _height(height), _spayed(spayed),
        _vaccine(vaccine), _aggressivity(aggressivity), _trained(trained), _personality(personality), _feeding(feeding),_food(food), _appetite(appetite),
        _source(source), _exercise(exercise), _skills(skills), _learning(learning), _space(space), _fee(fee), _relativePhotoPath(relativePhotoPath)
{

    QStringList attributeList = {_name, _type, _breed, _age, _gender , _color, _weight, _height, _spayed, _vaccine, _aggressivity, _trained,
                      _personality, _feeding, _food, _appetite, _source, _exercise, _skills, _learning, _space, _fee, _relativePhotoPath};
    _attributeList = attributeList;
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
QString Animal::getAge()const{
    return _age;
}

QStringList Animal:: getAttributeList(){
    return _attributeList;
}



