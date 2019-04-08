#ifndef OBSERVER_H
#define OBSERVER_H

class Subject;
class Observer
{
public:
    Observer();
    virtual void update() = 0;

};

#endif // OBSERVER_H
