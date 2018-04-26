#include <iostream>
#include "laag3.h"

using namespace std;

int main ( ){
    L1Impl L1;
    L2Impl L2;
    L3Impl L3;
    L1.connectHigh( &L2 );
    L2.connectLow( &L1 );
    L2.connectHigh( &L3 );
    L3.connectLow( &L2 );
    L3.service();
return 0;
}
