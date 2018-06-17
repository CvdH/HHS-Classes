#ifndef OBSERVERIMPL_H
#define OBSERVERIMPL_H

#include "observer.h"
#include "robot.h"
#include <iostream>

class ObserverImpl : public Observer
{
private:
    Robot* R;
protected:
    Robot* getSubject() const { return R;}
public:
    ObserverImpl(Robot* r);
    void update();
};

#endif // OBSERVERIMPL_H
