#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <memory>
#include "DatabaseManagement/databasecontrolfactory.h"
#include "DatabaseManagement/databasecontrol.h"
#include <vector>
#include <QString>
#include <QVector>

/*
    Basic Maching Rule Attributes
    ---------------------------------------------------------------
   |Attribute Name | Index in Animal Vector |Index in Client Vector|
    ---------------|------------------------|----------------------
    Breed          |           2            |           8
    Gender         |           4            |           10
    Primary Color  |           5            |           11
    Spayed         |           8            |           14
    Personality    |           12           |           18
    Food Preference|           14           |           20
    Adoption Source|           16           |           22
    Special Skills |           18           |           24
    ----------------------------------------------------------------

*************************************************************************
    Level Based Maching Rule Attributes
    ---------------------------------------------------------------
   |Attribute Name | Index in Animal Vector |Index in Client Vector|
    ---------------|------------------------|----------------------
    Vaccine        |           9           |           15
    Aggressivity   |           10           |           16
    Trained        |           11           |           17
    Feed Difficulty|           13           |           19
    Appetite Level |           15           |           21
    Exercise Amount|           17           |           23
    Learning Speed |           19           |           25
    ----------------------------------------------------------------

*************************************************************************
    Range Based Maching Rule Attributes
    ---------------------------------------------------------------
   |Attribute Name | Index in Animal Vector |Index in Client Vector|
    ---------------|------------------------|----------------------
    Age            |           2            |           5
    Weight         |           6            |           12
    Height         |           7            |           13
    Space Need     |           20           |           26
    Adoption Price |           21           |           27
    ---------------------------------------------------------------
*/

using namespace std;
QVector < QVector<float> > MATCHING_GRADE;
class Algorithm
{
public:
    Algorithm();
    ~Algorithm();
    void copyDataFromDB();
    float calcBasicMatch (QString animalVal, QString preferVal);
    float calcLevelMatch (QString animalVal, QString preferVal);
    float calcRangeMatch (QString animalVal, QString preferVal);
    void calcTypeMatch ();
    float calcFinalGrade ();


private:

    QVector <QVector<QString>> ANIMAL_DATA;
    QVector <QVector<QString>> CLIENT_DATA;


/*
    n = # of clients, m = # of animals
    MATCHING_GRADE = {
        {g11.g12,g13...gm},
        {g21,g22,g23...gm},
            ....
        {gn1, gn2, gn3...gnm}
    }
*/

    int ANIMAL_SIZE;
    int CLIENT_SIZE;
    //QVector2D machingGradest;



};

#endif // ALGORITHM_H
