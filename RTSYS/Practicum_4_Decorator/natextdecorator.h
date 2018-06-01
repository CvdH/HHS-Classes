#ifndef NATEXTDECORATOR_H
#define NATEXTDECORATOR_H

#include "meter.h"

class NaTextDecorator : public Meter{
private:
    Meter* component;
    string natext;
public:
    NaTextDecorator(Meter* m, string s);
    void toon(float w);
};

#endif // NATEXTDECORATOR_H
