#include "database.h"
#include "QDebug"
#include <QVariant>
#include <QString>
#include <QStringList>

Database::Database()
{
    _db = QSqlDatabase::addDatabase("QSQLITE");
    _db.setDatabaseName("./cuACSdb.sqlite");
    openDatabase();

}

Database:: ~Database()
{
    disconnectDB();
}

void Database:: disconnectDB(){
    if (!_db.open()){
        _db.close();
         qDebug()<<"Database closed: ";
    }

}

void Database:: openDatabase(){
    if (!_db.open())
    {
        qDebug()<<"Fail to open database";
    }
    else{
        qDebug()<<"database opened";
    }


}

void Database:: addAnimal(Animal *aAnimal){

    QString insertAnimal = "INSERT INTO animaltable ("
                              "ID,"
                              "Name,"
                            "Species,"
                           "Breed,"
                           "Age,"
                           "Gender,"
                           "Primary_Color,"
                           "Weight,"
                           "Height,"
                           "Spayed,"
                           "Vaccine,"
                           "Aggressivity,"
                           "Trained,"
                           "Personality,"
                           "Feeding_Difficulty,"
                           "Food_Preference,"
                           "Appetite_Level,"
                           "Adoption_Source,"
                           "Exercise_Amount,"
                           "Special_Skills,"
                           "Learning_Speed,"
                           "Space_Need,"
                           "Adoption_fee,"
                            "relative_Photo_Path)"
                           "VALUES (:ID,:Name,:Species, :Breed,:Age,:Gender,:Primary_Color,:Weight,:Height,:Spayed,:Vaccine,:Aggressivity,:Trained,:Personality,:Feeding_Difficulty,:Food_Preference,:Appetite_Level,:Adoption_Source,:Exercise_Amount,:Special_Skills,:Learning_Speed,:Space_Need,:Adoption_fee,:relative_Photo_Path)";
    QSqlQuery qry;
qry.prepare("INSERT INTO animaltable (ID,Name,Species,Breed,Age,Gender,Primary_Color,Weight,Height,Spayed,Vaccine,Aggressivity,Trained,Personality,Feeding_Difficulty,Food_Preference,Appetite_Level,Adoption_Source,Exercise_Amount,Special_Skills,Learning_Speed,Space_Need,Adoption_fee,relative_Photo_Path)"
            "VALUES (:ID,:Name,:Species, :Breed,:Age,:Gender,:Primary_Color,:Weight,:Height,:Spayed,:Vaccine,:Aggressivity,:Trained,:Personality,:Feeding_Difficulty,:Food_Preference,:Appetite_Level,:Adoption_Source,:Exercise_Amount,:Special_Skills,:Learning_Speed,:Space_Need,:Adoption_fee,:relative_Photo_Path);");


    QStringList attributes = aAnimal->getAttributeList();
    qry.bindValue(":ID",aAnimal->getId());
    qry.bindValue(":Name",attributes.at(0));
    qry.bindValue(":Species",attributes.at(1));
    qry.bindValue(":Breed",attributes.at(2));
    qry.bindValue(":Age",attributes.at(3));
    qry.bindValue(":Gender",attributes.at(4));
    qry.bindValue(":Primary_Color",attributes.at(5));
    qry.bindValue(":Weight",attributes.at(6));
    qry.bindValue(":Height",attributes.at(7));
    qry.bindValue(":Spayed",attributes.at(8));
    qry.bindValue(":Vaccine",attributes.at(9));
    qry.bindValue(":Aggressivity",attributes.at(10));
    qry.bindValue(":Trained",attributes.at(11));
    qry.bindValue(":Personality",attributes.at(12));
    qry.bindValue(":Feeding_Difficulty",attributes.at(13));
    qry.bindValue(":Food_Preference",attributes.at(14));
    qry.bindValue(":Appetite_Level",attributes.at(15));
    qry.bindValue(":Adoption_Source",attributes.at(16));
    qry.bindValue(":Exercise_Amount",attributes.at(17));
    qry.bindValue(":Special_Skills",attributes.at(18));
    qry.bindValue(":Learning_Speed",attributes.at(19));
    qry.bindValue(":Space_Need",attributes.at(20));
    qry.bindValue(":Adoption_fee",attributes.at(21));
    qry.bindValue(":relative_Photo_Path",attributes.at(22));




    if (!qry.exec())
     {
        qDebug()<<"attributes size"<< attributes.size();
        qDebug()<<"Adding Error"<< qry.lastError();
    }

}




void Database::queryID(){
    vector<int> ids;
    vector<QString> names, types, breed, age,gender, color, weight, height, spayed, vaccine,
            aggressivity, trained, personality, feed, food, appetite, source, exercise, skills,
            learning, space,fee, relativePhotoPath;
    vector <vector<QString>> data;
    data = {names, types, breed, age,gender, color, weight, height, spayed, vaccine,
            aggressivity, trained, personality, feed, food, appetite, source, exercise, skills,
            learning, space,fee, relativePhotoPath};

    QString selectID = "select * from animaltable;";
    QSqlQuery qry;

     if (!qry.exec(selectID))
     {
         qDebug()<<"selection Error"<< qry.lastError();
     }
     else
     {
         while(qry.next()){
           ids.push_back(qry.value(0).toInt());
           for (int unsigned i = 0; i < data.size(); i++){
               data[i].push_back(qry.value(i+1).toString());
           }
         }
     }

      _IDList = ids;
      _animalData = data;

}

void Database:: addClient(Client *aClient){
    QStringList info = aClient->getClientInfo();
    QString insertClient = "INSERT INTO clienttable (ID,Name, Phone,Email,Address,Age,Gender)"
                           "VALUES (:ID,:Name,:Phone, :Email,:Address,:Age,:Gender)";
    qDebug()<<"info size"<< info;
    QSqlQuery qry;
    qry.prepare(insertClient);
    qry.bindValue(":ID",info.at(0));
    qry.bindValue(":Name",info.at(1));
    qry.bindValue(":Phone",info.at(2));
    qry.bindValue(":Email",info.at(3));
    qry.bindValue(":Address",info.at(4));
    qry.bindValue(":Age",info.at(5));
    qry.bindValue(":Gender",info.at(6));
    if (!qry.exec())
     {
        qDebug()<<"Client Adding Error"<< qry.lastError();
    }

}

void Database:: update(){}

void Database::queryClientTable(){
    vector<QString> id, name, phone, email, address,age, gender;
    vector <vector<QString>> data;
    data = {id, name, phone, email, address,age, gender};

    QString selectTable = "select * from clienttable;";
    QSqlQuery qry;

     if (!qry.exec( selectTable))
     {
         qDebug()<<"database:: Client Table Selection Error"<< qry.lastError();
     }
     else
     {
         while(qry.next()){
           for (int unsigned i = 0; i < data.size(); i++){
               data[i].push_back(qry.value(i).toString());
           }
         }
     }
      _clientInfo = data;
}

vector<int> Database:: getIDList(){
    queryID();
    return _IDList;
}
vector<QString> Database:: getNameList(){

    return _nameList;
}
vector<QString> Database:: getTypeList(){

    return _typeList;
}

vector<QString> Database:: getAgeList(){

    return _ageList;
}

vector < vector<QString> > Database::getAnimalData(){
    return _animalData;
}

vector < vector<QString> > Database::getClientInfo(){
    queryClientTable();
    return _clientInfo;
}
