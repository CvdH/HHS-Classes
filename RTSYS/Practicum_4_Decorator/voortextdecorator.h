#ifndef VOORTEXTDECORATOR_H
#define VOORTEXTDECORATOR_H

#include "decoratedmeter.h"

class VoorTextDecorator : public DecoratedMeter
{
private:
    //Meter* component;
    string voortext;
public:
    VoorTextDecorator(Meter* m, string s);
    void toon(float w);
};

#endif // VOORTEXTDECORATOR_H
