#ifndef ROBOT_H
#define ROBOT_H

#include "observer.h"

#include "iostream"

using namespace std;
class State;

class Robot : public Subject
{
private:
    State* S;
public:
    Robot();
    void start();
    void stop();
    void vind();
    void win();
    void verlies();
    string toestand();

    void setState(State* s);
};

#endif // ROBOT_H
