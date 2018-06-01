#include "voortextdecorator.h"

VoorTextDecorator::VoorTextDecorator(Meter* m,string s) : DecoratedMeter(m),voortext(s){}

void VoorTextDecorator::toon(float w){
    cout << voortext;
    DecoratedMeter::toon(w);
}
