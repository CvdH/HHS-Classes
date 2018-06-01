#ifndef VOORTEXTDECORATOR_H
#define VOORTEXTDECORATOR_H

#include "meter.h"

class VoorTextDecorator : public Meter
{
private:
    Meter* component;
    string voortext;
public:
    VoorTextDecorator(Meter* m, string s);
    void toon(float w);
};

#endif // VOORTEXTDECORATOR_H
