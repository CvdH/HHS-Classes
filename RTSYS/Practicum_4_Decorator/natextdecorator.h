#ifndef NATEXTDECORATOR_H
#define NATEXTDECORATOR_H

#include "decoratedmeter.h"

class NaTextDecorator : public DecoratedMeter{
private:
    //Meter* component;
    string natext;
public:
    NaTextDecorator(Meter* m, string s);
    void toon(float w);
};

#endif // NATEXTDECORATOR_H
