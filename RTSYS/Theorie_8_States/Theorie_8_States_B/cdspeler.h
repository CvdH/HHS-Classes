#ifndef CDSPELER_H
#define CDSPELER_H

//#include "state.h"
using namespace std;
class State;
#include <iostream>

class CDspeler
{
private:
    State* S;
public:
    CDspeler();
    void displayReady();
    void displayPaused();
    void playCD();

    void startPlaying();
    void stopPlaying();
    void pausePlaying();
    void resumePlaying();

    void playButton();
    void pauseButton();
    void stopButton();

    void setState(State* s);
};

#endif // CDSPELER_H
