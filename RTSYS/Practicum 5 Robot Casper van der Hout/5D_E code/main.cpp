#include <iostream>
#include "observerimpl.h"
#include "factoryimpl.h"
#include "match.h"

using namespace std;

int main()
{
    FactoryImpl* F = new FactoryImpl();
    Robot* R = F->makeRobot();
    Match* M = F->makeMatch( R );
    ObserverImpl* O = new ObserverImpl(R);

    M->runRobot();
    //return 0;
}

