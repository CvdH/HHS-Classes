#ifndef STATE
#define STATE

#include "robot.h"

class State{
private:
    static State* Instance;
protected:
    State(){}
    State(const State&){}
public:
    static State* get();
    virtual void start(Robot* R)=0;
    virtual void stop(Robot* R)=0;
    virtual void win(Robot* R)=0;
    virtual void vind(Robot* R)=0;
    virtual void verlies(Robot* R)=0;
    virtual string toestand()=0;
};

#endif // STATE

