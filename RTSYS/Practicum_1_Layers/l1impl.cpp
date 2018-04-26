#include "laag1.h"

void L1Impl::service(){
    cout << "Laag 1 service start..." << endl;
	L1 -> layerRequest();
    cout << "Laag 1 service stop..." << endl;
}

void L1Impl::connectHigh(L1Server* s){
    L1 = s;
}
