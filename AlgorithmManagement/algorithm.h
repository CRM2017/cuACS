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
    Vaccine        |           9            |           15
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
    Age            |           3            |           9
    Weight         |           6            |           12
    Height         |           7            |           13
    Space Need     |           20           |           26
    Adoption Price |           21           |           27
    ---------------------------------------------------------------
*/

using namespace std;
class Algorithm
{
public:
    Algorithm();
    ~Algorithm();
    void copyDataFromDB();
    float calcBasicMatch (QString animalVal, QString preferVal);

    /*
        Level Based Rule Formular:
        grade = ( 1 - |client’s preference - animal’s attribute| / number of levels) * proportion of the attribute * 100
    */
    float calcLevelMatch (QString animalVal, QString preferVal);

    void calcAgeRangeMatch();
    void calcWeightRangeMatch();
    void calcHeightRangeMatch();
    void calcSpaceRangeMatch();
    void calcFeeRangeMatch();
    void calcTypeMatch ();
    float calcFinalGrade ();
    void adjustGradeByPriorityAttributes();
    QVector<int> storeMatchResultWithID();



private:

    QVector <QVector<QString>> ANIMAL_DATA;
    QVector <QVector<QString>> CLIENT_DATA;
    QVector <int> ANIMAL_INDEX;


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
