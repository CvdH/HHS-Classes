#include "borderdecorator.h"

BorderDecorator::BorderDecorator(Meter* m) : DecoratedMeter(m)
{

}

void BorderDecorator::toon(float w){
    cout << "----------------------------------------" << endl;
    DecoratedMeter::toon(w);
    cout << "----------------------------------------" << endl;
}
