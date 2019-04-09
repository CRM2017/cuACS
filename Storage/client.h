//This is client class with all client basic infomation

#ifndef CLIENT_H
#define CLIENT_H

#include <QString>
#include <QStringList>
class Client
{
public:
    Client(const QString &id, const QString &name, const QString &phone, const QString &email,
           const QString &address,  const QString &age, const QString &gender, const QString &Animaltype, const QString &Animalbreed, const QString &Animalage, const QString &Animalgender, const QString &Animalcolor,
           const QString &Animalweight, const QString &Animalheight, const QString & Animalspayed, const QString &Animalvaccine, const QString & Animalaggressivity, const QString &Animaltrained,
           const QString &Animalpersonality, const QString & Animalfeeding, const QString &Animalfood, const QString &Animalappetite, const QString &Animalsource,
           const QString &Animalexercise, const QString &Animalskills, const QString &Animallearning, const QString &Animalspace, const QString &Animalfee, const QString &PriorAttribute1, const QString &PriorAttribute2,
           const QString &PriorAttribute3, const QString &PriorAttribute4, const QString &PriorAttribute5, const QString &WorkHour, const QString &HouseSize);
    ~Client();
    QString getId() const;
    QString getName() const;
    QString getPhone() const;
    QString getEmail() const;
    QString getAddress() const;
    QString getAge() const;
    QString getGender() const;
    QStringList getClientInfo();

private:
    QString _id, _name, _phone,_email, _address, _age, _gender, _Animaltype, _Animalbreed, _Animalage, _Animalgender , _Animalcolor, _Animalweight, _Animalheight, _Animalspayed, _Animalvaccine, _Animalaggressivity, _Animaltrained,
    _Animalpersonality, _Animalfeeding, _Animalfood, _Animalappetite, _Animalsource, _Animalexercise, _Animalskills, _Animallearning, _Animalspace, _Animalfee, _PriorAttribute1, _PriorAttribute2, _PriorAttribute3, _PriorAttribute4,
    _PriorAttribute5, _WorkHour, _HouseSize;
    QStringList _clientInfo;

};

#endif // CLIENT_H
