#include "client.h"

Client::Client(const QString &id, const QString &name, const QString &phone, const QString &email,
               const QString &address,  const QString &age, const QString &gender, const QString &Animaltype, const QString &Animalbreed, const QString &Animalage, const QString &Animalgender,
               const QString &Animalcolor,const QString &Animalweight, const QString &Animalheight, const QString &Animalspayed, const QString &Animalvaccine, const QString &Animalaggressivity,
               const QString &Animaltrained,const QString &Animalpersonality, const QString & Animalfeeding, const QString &Animalfood, const QString &Animalappetite,
               const QString &Animalsource,const QString &Animalexercise, const QString &Animalskills, const QString &Animallearning, const QString &Animalspace, const QString &Animalfee,
               const QString &PriorAttribute1, const QString &PriorAttribute2, const QString &PriorAttribute3, const QString &PriorAttribute4, const QString &PriorAttribute5, const QString &WorkHour, const QString &HouseSize):
         _id(id),_name(name),_phone(phone), _email(email), _address(address), _age(age), _gender(gender), _Animaltype(Animaltype), _Animalbreed(Animalbreed),_Animalage(Animalage), _Animalgender(Animalgender), _Animalcolor(Animalcolor), _Animalweight(Animalweight), _Animalheight(Animalheight), _Animalspayed(Animalspayed),
         _Animalvaccine(Animalvaccine), _Animalaggressivity(Animalaggressivity), _Animaltrained(Animaltrained), _Animalpersonality(Animalpersonality), _Animalfeeding(Animalfeeding),_Animalfood(Animalfood), _Animalappetite(Animalappetite),
         _Animalsource(Animalsource), _Animalexercise(Animalexercise), _Animalskills(Animalskills), _Animallearning(Animallearning), _Animalspace(Animalspace), _Animalfee(Animalfee),
         _PriorAttribute1(PriorAttribute1), _PriorAttribute2(PriorAttribute2), _PriorAttribute3(PriorAttribute3), _PriorAttribute4(PriorAttribute4), _PriorAttribute5(PriorAttribute5), _WorkHour(WorkHour), _HouseSize(HouseSize)
{
    QStringList clientData = {_id,_name, _phone, _email,_address ,_age, _gender, _Animaltype, _Animalbreed, _Animalage, _Animalgender , _Animalcolor, _Animalweight, _Animalheight, _Animalspayed, _Animalvaccine, _Animalaggressivity, _Animaltrained,
                              _Animalpersonality, _Animalfeeding, _Animalfood, _Animalappetite, _Animalsource, _Animalexercise, _Animalskills, _Animallearning, _Animalspace, _Animalfee, _PriorAttribute1, _PriorAttribute2, _PriorAttribute3, _PriorAttribute4,
                              _PriorAttribute5, _HouseSize, _WorkHour };
    _clientInfo = clientData;

}


QString Client::getName()const{
    return _name;
}

QString Client::getId()const{
    return _id;
}
QStringList Client::getClientInfo(){
    return _clientInfo;
}
