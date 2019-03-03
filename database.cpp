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
//    QString createAnimalTable = "CREATE TABLE animaltable ("
//                    "ID INTEGER PRIMARY KEY,"
//                    "Name VARCHAR(10),"
//                    "Breed VARCHAR(15),"
//                    "Age REAL,"
//                    "Gender,"
//                    "primary Color,"
//                    "Weight REAL,"
//                    "Height REAL,"
//                    "Spayed,"
//                    "Vaccine,"
//                    "Species VARCHAR(15));";

//    QSqlQuery qry;
//    qry.prepare(createAnimalTable);
//    if (!qry.exec())
//    {
//        qDebug()<<"Database create error: "<< qry.lastError();
//    }

}

void Database:: addAnimal(Animal *aAnimal){
/*    QStringList attributes = {"ID,"
                              "Name,"
                              "Species,"
                              "Breed,"
                              "Age,"
                              "gender,"
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
                              "Space Need,"
                              "Adoption_fee"};

    QString line = "INSERT INTO animaltable (" + attributes.join("") + ")" ; */

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
                           "Adoption_fee)"
                           "VALUES (:ID,:Name,:Species, :Breed,:Age,:Gender,:Primary_Color,:Weight,:Height,:Spayed,:Vaccine,:Aggressivity,:Trained,:Personality,:Feeding_Difficulty,:Food_Preference,:Appetite_Level,:Adoption_Source,:Exercise_Amount,:Special_Skills,:Learning_Speed,:Space_Need,:Adoption_fee)";
    QSqlQuery qry;
qry.prepare("INSERT INTO animaltable (ID,Name,Species,Breed,Age,Gender,Primary_Color,Weight,Height,Spayed,Vaccine,Aggressivity,Trained,Personality,Feeding_Difficulty,Food_Preference,Appetite_Level,Adoption_Source,Exercise_Amount,Special_Skills,Learning_Speed,Space_Need,Adoption_fee)"
            "VALUES (:ID,:Name,:Species, :Breed,:Age,:Gender,:Primary_Color,:Weight,:Height,:Spayed,:Vaccine,:Aggressivity,:Trained,:Personality,:Feeding_Difficulty,:Food_Preference,:Appetite_Level,:Adoption_Source,:Exercise_Amount,:Special_Skills,:Learning_Speed,:Space_Need,:Adoption_fee);");


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



//    for (int i=0; i<attributes.size(); i++){
//        qDebug()<<"Adding bindValue:"<<attributes.at(i);
//        qry.addBindValue(attributes.at(i));
//    }

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
            learning, space,fee;
    vector <vector<QString>> data;
    data = {names, types, breed, age,gender, color, weight, height, spayed, vaccine,
            aggressivity, trained, personality, feed, food, appetite, source, exercise, skills,
            learning, space,fee};

    QString selectID = "select * from animaltable;";
    QSqlQuery qry;

     if (!qry.exec(selectID))
     {
         qDebug()<<"selection Error"<< qry.lastError();
     }
     else
     {
         while(qry.next()){
//            qDebug()<<"select id: "<<qry.value(0).toInt();
           ids.push_back(qry.value(0).toInt());
           for (int unsigned i = 0; i < data.size(); i++){
               data[i].push_back(qry.value(i+1).toString());
           }
         }
     }

      _IDList = ids;
      _animalData = data;
//      _nameList = names;
//      _typeList = types;
//      _ageList = age;
}


vector<int> Database:: getIDList(){
    queryID();
    qDebug()<<"in databse: getid: "<< _IDList.at(0);
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

