#ifndef BORDERDECORATOR_H
#define BORDERDECORATOR_H

#include "meter.h"

class BorderDecorator : public Meter{
private:
    Meter* component;
public:
    BorderDecorator(Meter* m);
    void toon(float w);
};

#endif // BORDERDECORATOR_H
