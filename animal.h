#ifndef ANIMAL_H
#define ANIMAL_H
#include <QString>

using namespace std;
class Animal
{
public:
    Animal(int id, QString name, QString type);
    ~Animal();
    int getId() const;
    QString getName() const;
    QString getType() const;
    void setName(QString Name);
    void setType(QString Type);

private:
    int _id;
    QString _name;
    QString _type;
};

#endif // ANIMAL_H
