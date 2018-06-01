#include "natextdecorator.h"

NaTextDecorator::NaTextDecorator(Meter* m, string s): DecoratedMeter(m),natext(s){}

void NaTextDecorator::toon(float w){
    DecoratedMeter::toon(w);
    cout << natext;
}
