#include "playing.h"
Playing* Playing::Instance;

Playing* Playing::get(){
    if(!Instance){
        Instance = new Playing();
    }
    return Instance;
}

void Playing::playButton(CDspeler* CD){
    CD->playCD();
}

void Playing::pauseButton(CDspeler* CD){
    CD->pausePlaying();
}

void Playing::stopButton(CDspeler* CD){
    CD->stopPlaying();
}

