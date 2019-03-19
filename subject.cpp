#include "subject.h"

Subject::Subject()
{

}

void  Subject::attach(Observer * obs) {

    obs->update();

}

void Subject::notify() {


}
