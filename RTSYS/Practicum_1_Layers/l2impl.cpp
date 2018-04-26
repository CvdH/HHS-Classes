#include "laag2.h"

void L2Impl::service(){
    cout << "Laag 2 service start..." << endl;
    laag1() -> service();
    cout << "Laag 2 service stop..." << endl;
}

void L2Impl::layerRequest(){
    cout << "Laag 2 layer request start..." << endl;
    L2 -> layerRequest();
    cout << "Laag 2 layer request stop..." << endl;
}

void L2Impl::connectHigh(L2Server* s){
    L2 = s;
}
