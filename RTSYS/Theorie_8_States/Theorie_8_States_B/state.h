#ifndef STATE
#define STATE

#include "cdspeler.h"

class State{
private:
    static State* Instance;
    //CDspeler* CD;
protected:
    State() {}
    //~State();
    State(const State&) {}
    //virtual State& operator=( const State&) = 0;
public:
    static State* get();
    virtual void playButton(CDspeler* CD)=0;
    virtual void pauseButton(CDspeler* CD)=0;
    virtual void stopButton(CDspeler* CD)=0;
};

#endif // STATE

