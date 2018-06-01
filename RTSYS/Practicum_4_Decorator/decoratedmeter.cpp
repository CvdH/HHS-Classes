#include "decoratedmeter.h"

DecoratedMeter::DecoratedMeter(Meter* m) : component(m){}

void DecoratedMeter::toon(float w){
    component->toon(w);
}

