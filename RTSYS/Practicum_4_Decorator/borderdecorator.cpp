#include "borderdecorator.h"

BorderDecorator::BorderDecorator(Meter* m) : component(m)
{

}

void BorderDecorator::toon(float w){
    cout << "----------------------------" << endl;
    component->toon(w);
    cout << "----------------------------" << endl;
}
