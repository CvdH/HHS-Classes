#ifndef PLAYING_H
#define PLAYING_H

#include "state.h"

class Playing : public State{
private:
    static Playing* Instance;
protected:
    //Playing() {}
    //~State();
    //Playing(const Playing&){}
    //Playing& operator=( const Playing&) {}
public:
    static Playing* get();
    void playButton(CDspeler* CD);
    void pauseButton(CDspeler* CD);
    void stopButton(CDspeler* CD);
};

#endif // PLAYING_H
