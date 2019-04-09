#include "algorithm.h"
#include "QDebug"
#include "DatabaseManagement/database.h"



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

//    qDebug()<<"cliDATA: "<< CLIENT_DATA.size();
//    qDebug()<<"cliDATA: "<< CLIENT_DATA[0].size();


    qDebug()<<"aniSize: "<<  ANIMAL_SIZE;
   // qDebug()<<"clientSize: "<<  CLIENT_SIZE;
//    qDebug()<<"calcFinalGrade: "<<  _animalData.size();
//    qDebug()<<"calcFinalGrade: "<<  _clientInfo.size();
}

float Algorithm::calcFinalGrade (){

// attributes list

//    qDebug()<<"clientSize: "<<  CLIENT_SIZE;
//    for(int i=0; i< CLIENT_SIZE; i++){
//         QVector<float> temp;
//         for(int j=0; j< ANIMAL_SIZE; j++){

//             temp.push_back(calcTypeMatch(ANIMAL_DATA[1][j],CLIENT_DATA[7][i]));

//         }

//         MATCHING_GRADE.push_back(temp);

//    }

    calcTypeMatch();

    for(int i=0; i< CLIENT_SIZE; i++){
         for(int j=0; j< ANIMAL_SIZE; j++){
             qDebug()<<i<<j;
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[2][j],CLIENT_DATA[8][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[4][j],CLIENT_DATA[10][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[5][j],CLIENT_DATA[11][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[8][j],CLIENT_DATA[14][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[12][j],CLIENT_DATA[18][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[14][j],CLIENT_DATA[20][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[16][j],CLIENT_DATA[22][i]);
             MATCHING_GRADE[i][j]+=calcBasicMatch(ANIMAL_DATA[18][j],CLIENT_DATA[24][i]);
             qDebug()<< "-"<< MATCHING_GRADE[i][j];

         }
    }

//    MATCHING_GRADE[0][0] += calcTypeMatch(ANIMAL_DATA[1][0],CLIENT_DATA[7][0]);

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

float Algorithm::calcLevelMatch(QString animalVal, QString preferVal){
    int ani_level = 0;
    int prefer_level = 0;

}


