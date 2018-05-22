#ifndef STOPPED
#define STOPPED

#include "state.h"

class Stopped : public State{
private:
    static Stopped* Instance;
protected:
    //Stopped() {}
    //~State();
    //Stopped(const Stopped&){}
    //Stopped& operator=( const Stopped&) {}
public:
    static Stopped* get();
    void playButton(CDspeler* CD);
    void pauseButton(CDspeler* CD);
    void stopButton(CDspeler* CD);
};

#endif // STOPPED

