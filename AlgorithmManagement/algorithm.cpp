#include "algorithm.h"
#include "QDebug"
#include "DatabaseManagement/database.h"
#include   <stdlib.h>


QVector < QVector<float> > MATCHING_GRADE;
Algorithm::Algorithm()
{
    copyDataFromDB();
}
Algorithm::~Algorithm(){}


void Algorithm::copyDataFromDB(){

    DatabaseControl dbControl;
    vector < vector<QString> > _animalData= dbControl.getAnimalData();
    vector < vector<QString> > _clientInfo= dbControl.getClientInfo();
    ANIMAL_SIZE = _animalData[0].size();
    CLIENT_SIZE = _clientInfo[0].size();
    for(int i=0; i< _animalData.size(); i++){
        QVector<QString> temp;
         for(int j=0; j< _animalData[i].size(); j++){
             temp.push_back( _animalData[i][j]);
         }
         ANIMAL_DATA.push_back(temp);

    }

    for(int i=0; i< _clientInfo.size(); i++){
        QVector<QString> temp;
         for(int j=0; j< _clientInfo[i].size(); j++){
             temp.push_back( _clientInfo[i][j]);
         }
         CLIENT_DATA.push_back(temp);

    }




    qDebug()<<"aniSize: "<<  ANIMAL_SIZE;

}

float Algorithm::calcFinalGrade (){


    calcTypeMatch();
    calcAgeRangeMatch();
    calcWeightRangeMatch();
    calcHeightRangeMatch();
    calcSpaceRangeMatch();
    calcFeeRangeMatch();


    for(int i=0; i< CLIENT_SIZE; i++){
         for(int j=0; j< ANIMAL_SIZE; j++){
             qDebug()<<i<<j;

             // calculate basic matching rules grades
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[2][j],CLIENT_DATA[8][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[4][j],CLIENT_DATA[10][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[5][j],CLIENT_DATA[11][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[8][j],CLIENT_DATA[14][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[9][j],CLIENT_DATA[15][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[12][j],CLIENT_DATA[18][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[14][j],CLIENT_DATA[20][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[16][j],CLIENT_DATA[22][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[18][j],CLIENT_DATA[24][i]);

             // calculate level matching rules grades
             MATCHING_GRADE[i][j]+=calcLevelMatch(ANIMAL_DATA[10][j],CLIENT_DATA[16][i]);
             MATCHING_GRADE[i][j]+=calcLevelMatch(ANIMAL_DATA[11][j],CLIENT_DATA[17][i]);
             MATCHING_GRADE[i][j]+=calcLevelMatch(ANIMAL_DATA[13][j],CLIENT_DATA[19][i]);
             MATCHING_GRADE[i][j]+=calcLevelMatch(ANIMAL_DATA[15][j],CLIENT_DATA[21][i]);
             MATCHING_GRADE[i][j]+=calcLevelMatch(ANIMAL_DATA[17][j],CLIENT_DATA[23][i]);
             MATCHING_GRADE[i][j]+=calcLevelMatch(ANIMAL_DATA[19][j],CLIENT_DATA[25][i]);

             // calculate range matching rules grades
             qDebug()<< "-"<< MATCHING_GRADE[i][j];

         }
    }
    storeMatchResultWithID();



     qDebug()<< "mach result:" << MATCHING_GRADE.size();
     qDebug()<< "mach result:" << MATCHING_GRADE.at(19).size();




}

void Algorithm::calcTypeMatch(){

    for(int i=0; i< CLIENT_SIZE; i++){
         QVector<float> temp;
         for(int j=0; j< ANIMAL_SIZE; j++){
             QString animalVal;
             QString preferVal;
             animalVal = ANIMAL_DATA[1][j];
             preferVal = CLIENT_DATA[7][i];
             if (animalVal != preferVal){
                 temp.push_back(0);
             }
             else { temp.push_back(50.0);}
         }

         MATCHING_GRADE.push_back(temp);
    }

}

float Algorithm::calcBasicMatch(QString animalVal, QString preferVal){
    if (animalVal != preferVal){
        return 0;
    }
    else {return 2.0;}
}

/*
    weighted grade = ( 1 - |client’s preference - animal’s attribute| / number of levels) * proportion of the attribute * 100
*/
float Algorithm::calcLevelMatch(QString animalVal, QString preferVal){
    float ani_level = animalVal.left(1).toFloat();
    float prefer_level = preferVal.left(1).toFloat();
    float result;
    if (prefer_level == 0){return 2;}
    else {
         result = (1 - (abs(prefer_level - ani_level) / 4)) * 0.02 *100;
    }


    return result;

}

void Algorithm::calcAgeRangeMatch(){


    for(int i=0; i< CLIENT_SIZE; i++){
         for(int j=0; j< ANIMAL_SIZE; j++){
             QString animal_age = ANIMAL_DATA[3][j];
             QString prefer_age = CLIENT_DATA[9][i];

             if (prefer_age == "No Preference"){
                 MATCHING_GRADE[i][j] += 2;

             }
             else if (prefer_age == "Less Than a Year"){
                 if (animal_age.toFloat() <= 12){
                 }

             }
             else if (prefer_age == "1 - 3 Years"){
                 if (animal_age.toFloat() > 12 && animal_age.toFloat() < 36){
                     MATCHING_GRADE[i][j] += 2;
                 }

             }
             else if (prefer_age == "> 3 Years"){
                 if (animal_age.toFloat() >= 36){
                     MATCHING_GRADE[i][j] += 2;
                 }
             }
         }

    }
}

void Algorithm::calcWeightRangeMatch(){


    for(int i=0; i< CLIENT_SIZE; i++){
         for(int j=0; j< ANIMAL_SIZE; j++){
             QString animal_weight = ANIMAL_DATA[6][j];
             QString prefer_weight = CLIENT_DATA[12][i];


             if (prefer_weight == "No Preference"){
                 MATCHING_GRADE[i][j] += 2;

             }
             else if (prefer_weight == "Less Than 500 g"){
                 if (animal_weight.toFloat() <= 0.5){
                 }

             }
             else if (prefer_weight == "500 g - 2 KG"){
                 if (animal_weight.toFloat() > 0.5 && animal_weight.toFloat() < 2){
                     MATCHING_GRADE[i][j] += 2;
                 }

             }
             else if (prefer_weight== "> 2 KG"){
                 if (animal_weight.toFloat() >= 2){
                     MATCHING_GRADE[i][j] += 2;
                 }
             }
         }

    }
}

void Algorithm::calcHeightRangeMatch(){


    for(int i=0; i< CLIENT_SIZE; i++){
         for(int j=0; j< ANIMAL_SIZE; j++){
             QString animal_height = ANIMAL_DATA[7][j];
             QString prefer_height = CLIENT_DATA[13][i];

             if (prefer_height == "No Preference"){
                 MATCHING_GRADE[i][j] += 2;

             }
             else if (prefer_height == "Less Than 20 cm"){
                 if (animal_height.toFloat() <= 0.2){

                 }

             }
             else if (prefer_height == "20 cm - 1 m"){

                 if (animal_height.toFloat() > 0.2 && animal_height.toFloat() < 1){
                     MATCHING_GRADE[i][j] += 2;
                 }

             }
             else if (prefer_height== "> 1 m"){
                 if (animal_height.toFloat() >= 1){
                     MATCHING_GRADE[i][j] += 2;
                 }
             }
         }

    }
}

void Algorithm::calcSpaceRangeMatch(){


    for(int i=0; i< CLIENT_SIZE; i++){
         for(int j=0; j< ANIMAL_SIZE; j++){
             QString ani_space_need = ANIMAL_DATA[20][j];
             QString prefer_space = CLIENT_DATA[26][i];

             if (prefer_space == "No Preference"){
                 MATCHING_GRADE[i][j] += 2;


             }
             else if (prefer_space == "0 - 60 m square"){

                 if (ani_space_need.toFloat() <= 60){

                 }

             }
             else if (prefer_space == "60 - 150 m square"){

                 if (ani_space_need.toFloat() > 60 && ani_space_need.toFloat() < 150){
                     MATCHING_GRADE[i][j] += 2;
                 }

             }
             else if (prefer_space == "> 150 square"){
                 if (ani_space_need.toFloat() >= 150){
                     MATCHING_GRADE[i][j] += 2;

                 }
             }
         }

    }
}

void Algorithm::calcFeeRangeMatch(){


    for(int i=0; i< CLIENT_SIZE; i++){
         for(int j=0; j< ANIMAL_SIZE; j++){
             QString ani_fee = ANIMAL_DATA[21][j];
             QString prefer_fee = CLIENT_DATA[27][i];

             if (prefer_fee== "No Preference"){
                 MATCHING_GRADE[i][j] += 2;

             }
             else if (prefer_fee == "0 - 100"){

                 if (ani_fee <= 100){

                 }

             }
             else if (prefer_fee == "100 - 300"){

                 if (ani_fee > 100 && ani_fee < 300){
                     MATCHING_GRADE[i][j] += 2;
                 }

             }
             else if (prefer_fee == "> 300 - 500"){
                 if (ani_fee > 300 && ani_fee < 500){
                     MATCHING_GRADE[i][j] += 2;

                 }
             }
             else if (prefer_fee == "> 500"){
                 if (ani_fee >= 500){
                     MATCHING_GRADE[i][j] += 2;

                 }
             }
         }

    }
}
void Algorithm::adjustGradeByPriorityAttributes(){
    for(int i=0; i< CLIENT_SIZE; i++){
        QString prefer_prior1 = CLIENT_DATA[28][i];
        QString prefer_prior2 = CLIENT_DATA[29][i];
        QString prefer_prior3 = CLIENT_DATA[30][i];
        QString prefer_prior4 = CLIENT_DATA[31][i];
        QString prefer_prior5 = CLIENT_DATA[32][i];
    }

}
void Algorithm::adjustGradeByWorkHours(){
    for(int i=0; i< CLIENT_SIZE; i++){
         for(int j=0; j< ANIMAL_SIZE; j++){
             float work_hour = CLIENT_DATA[33][i].toFloat();

             if (work_hour > 20){
                 MATCHING_GRADE[i][j] += 1.7;

             }
             else if (work_hour >30 ){

                MATCHING_GRADE[i][j] += 1.6;

             }
             else if (work_hour >40 ){
                MATCHING_GRADE[i][j] += 1.48;

             }
             else if (work_hour >50 ){
                MATCHING_GRADE[i][j] += 1.3;
             }
             else if (work_hour >60 ){
                 MATCHING_GRADE[i][j] += 1;

             }
         }

    }

}

QVector<int> Algorithm :: storeMatchResultWithID(){

    for(int i=0; i< CLIENT_SIZE; i++){
        float highestGrade = 0;
        int animalIndex = 0;
         for(int j=0; j< ANIMAL_SIZE; j++){
             if (MATCHING_GRADE[i][j] > highestGrade){
                 highestGrade = MATCHING_GRADE[i][j];
                 animalIndex = j;
             }

         }
         ANIMAL_INDEX.push_back(animalIndex);
    }

    for (int i=0; i<ANIMAL_INDEX.size(); i++){
        qDebug()<< "animal Index:--"<<ANIMAL_INDEX.at(i);
    }
    return ANIMAL_INDEX;
}
