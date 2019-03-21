//This is animal class with all animal attributes

#ifndef ANIMAL_H
#define ANIMAL_H
#include <QString>
#include <QStringList>
#include <vector>
#include "subject.h"
using namespace std;
class Animal : public Subject
{
public:
    Animal(const int id, const QString &name, const QString &type, const QString &breed, const QString &age, const QString &gender, const QString &color,
           const QString &weight, const QString &height, const QString & spayed, const QString &vaccine, const QString & aggressivity, const QString &trained,
           const QString &personality, const QString & feeding, const QString &food, const QString & appetite, const QString &source,
           const QString &exercise, const QString &skills, const QString &learning, const QString &space, const QString &fee, const QString &relativePhotoPath);

//    Animal(const int id, const QString &name, const QString &type, const QString &age);
    ~Animal();
    int getId() const;
    QString getName() const;
    QString getType() const;
    QString getAge() const;
    QStringList getAttributeList();


private:
    int _id;
    QString _name, _type,  _breed,_age, _gender, _color, _weight, _height, _spayed, _vaccine, _aggressivity, _trained,
            _personality, _feeding, _food, _appetite, _source, _exercise, _skills, _learning, _space, _fee, _relativePhotoPath;
     QStringList _attributeList;
};

#endif // ANIMAL_H
