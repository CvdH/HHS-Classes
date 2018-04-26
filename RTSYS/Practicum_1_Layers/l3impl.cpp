#include "laag3.h"

void L3Impl::service(){
    cout << "Laag 3 service start..." << endl;
    laag2() -> service();
    cout << "Laag 3 service stop..." << endl;
}

void L3Impl::layerRequest(){
    cout << "Laag 3 layer request start..." << endl;
    //L2 -> layerRequest();
    cout << "Laag 3 layer request stop..." << endl;
}
