#include "factoryimpl.h"
#include <iostream>

Robot* FactoryImpl::makeRobot(){
    Robot* R = new Robot();
    cout << "Robot made" << endl;
    return R;
}

Match* FactoryImpl::makeMatch(Robot *r){
    Match* M = new Match(r);
    cout << "Match made" << endl;
    return M;
}

