#include "match.h"
#include <iostream>

Match::Match( Robot* r) : R(r) { }

void Match::runRobot(){
    cout << "Match: run robot" << endl;
    cout << "Match: robot vind" << endl;
    R->vind();
    cout << "Match: robot verlies" << endl;
    R->verlies();
    cout << "Match: robot stop" << endl;
    R->stop();
}


