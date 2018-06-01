#include "natextdecorator.h"

NaTextDecorator::NaTextDecorator(Meter* m, string s):component(m),natext(s)
{

}

void NaTextDecorator::toon(float w){
    component->toon(w);
    cout << natext;
}
