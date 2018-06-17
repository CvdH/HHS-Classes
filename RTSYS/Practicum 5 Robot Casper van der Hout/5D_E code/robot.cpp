#include "robot.h"
#include "klaar.h"
#include "zwervend.h"
#include "aanvallend.h"
#include <iostream>

Robot::Robot()
{
    setState(Zwervend::get());
    notify();
}

void Robot::start(){
    S->start(this);
    notify();
}

void Robot::stop(){
    S->stop(this);
    notify();
}

void Robot::vind(){
    S->vind(this);
    notify();
}

void Robot::win(){
    S->win(this);
    notify();
}

void Robot::verlies(){
    S->verlies(this);
    notify();
}

string Robot::toestand(){
    return S->toestand();
}

void Robot::setState(State* s){
    S = s;
}
