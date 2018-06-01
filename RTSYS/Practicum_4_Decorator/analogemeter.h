#ifndef ANALOGEMETER_H
#define ANALOGEMETER_H

#include "meter.h"

class AnalogeMeter : public Meter{
public:
    AnalogeMeter();
    virtual ~AnalogeMeter();
    void toon(float w);
};

#endif // ANALOGEMETER_H
