#ifndef DECORATEDMETER_H
#define DECORATEDMETER_H

#include "meter.h"

class DecoratedMeter : public Meter{
private:
    Meter* component;
public:
    //virtual ~DecoratedMeter();
    DecoratedMeter(Meter* m);
    void toon(float w);
};

#endif // DECORATEDMETER_H
