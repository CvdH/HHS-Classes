#ifndef BORDERDECORATOR_H
#define BORDERDECORATOR_H

#include "decoratedmeter.h"

class BorderDecorator : public DecoratedMeter{
private:
    //Meter* component;
public:
    BorderDecorator(Meter* m);
    void toon(float w);
};

#endif // BORDERDECORATOR_H
