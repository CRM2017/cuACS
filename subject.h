#ifndef SUBJECT_H
#define SUBJECT_H
#include "observer.h"
#include <vector>
using namespace std;

class Subject
{
public:
    Subject();
    void attach(Observer * obs);
    void notify();

private:
    vector<Observer*> observers;

};

#endif // SUBJECT_H
