#ifndef METER_H
#define METER_H

#include <iostream>
#include <string>

using namespace std;

class Meter{
public:
    virtual ~Meter();
    virtual void toon(float w) = 0;
};

#endif // METER_H
