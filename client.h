//This is client class with all client basic infomation

#ifndef CLIENT_H
#define CLIENT_H

#include <QString>
#include <QStringList>
class Client
{
public:
    Client(const QString &id, const QString &name, const QString &phone, const QString &email,
           const QString &address,  const QString &age, const QString &gender);
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
    QString _id, _name, _phone,_email, _address, _age, _gender;
    QStringList _clientInfo;

};

#endif // CLIENT_H
