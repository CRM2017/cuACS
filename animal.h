#ifndef ANIMAL_H
#define ANIMAL_H
#include <QString>

using namespace std;
class Animal
{
public:
    Animal(const int id, const QString &name, const QString &type);
    ~Animal();
    int getId() const;
    QString getName() const;
    QString getType() const;


private:
    int _id;
    QString _name;
    QString _type;
};

#endif // ANIMAL_H
