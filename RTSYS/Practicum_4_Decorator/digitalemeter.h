#ifndef DIGITALEMETER_H
#define DIGITALEMETER_H

#include "meter.h"

class DigitaleMeter : public Meter{
public:
    DigitaleMeter();
    virtual ~DigitaleMeter();
    void toon(float w);
};

#endif // DIGITALEMETER_H
