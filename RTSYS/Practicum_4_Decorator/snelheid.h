#ifndef SNELHEID_H
#define SNELHEID_H

#include "meter.h"

class Snelheid
{
private:
    float waarde;
    Meter* M;
public:
    Snelheid(Meter* m) : waarde(0), M(m){}
    virtual ~Snelheid(){}
    virtual void meet() {cout << "Geef waarde: \n"; cin>>waarde;}
    virtual void toon() {M->toon(waarde);}
};

#endif // SNELHEID_H
