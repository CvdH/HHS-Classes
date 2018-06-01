#include "voortextdecorator.h"

VoorTextDecorator::VoorTextDecorator(Meter* m,string s) : component(m),voortext(s)
{

}

void VoorTextDecorator::toon(float w){
    cout << voortext << endl;
    component->toon(w);
}
