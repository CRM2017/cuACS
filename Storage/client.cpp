#include "client.h"

Client::Client(const QString &id, const QString &name, const QString &phone, const QString &email,
               const QString &address,  const QString &age, const QString &gender):
         _id(id),_name(name),_phone(phone), _email(email), _address(address), _age(age), _gender(gender)
{
    QStringList clientData = {_id,_name, _phone, _email,_address ,_age, _gender};
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
