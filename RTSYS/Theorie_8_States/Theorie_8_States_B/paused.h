#ifndef PAUSED_H
#define PAUSED_H

#include "state.h"

class Paused : public State{
private:
    static Paused* Instance;
protected:
    //Paused() {}
    //~State();
    //Paused(const Paused&){}
    //Paused& operator=( const Paused&) {}
public:
    static Paused* get();
    void playButton(CDspeler* CD);
    void pauseButton(CDspeler* CD);
    void stopButton(CDspeler* CD);
};

#endif // PAUSED_H
