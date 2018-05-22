#include "stopped.h"
Stopped* Stopped::Instance;

Stopped* Stopped::get(){
    if(!Instance){
        Instance = new Stopped();
    }
    return Instance;
}

void Stopped::playButton(CDspeler* CD){
    CD->startPlaying();
}

void Stopped::pauseButton(CDspeler* CD){
    // do nothing
}

void Stopped::stopButton(CDspeler* CD){
    CD->displayReady();
}
