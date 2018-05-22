#include "paused.h"
#include "stopped.h"
Paused* Paused::Instance;

Paused* Paused::get(){
    if(!Instance){
        Instance = new Paused();
    }
    return Instance;
}

void Paused::playButton(CDspeler* CD){
    CD->resumePlaying();
}

void Paused::pauseButton(CDspeler* CD){
    CD->displayPaused();
}

void Paused::stopButton(CDspeler* CD){
    CD->setState(Stopped::get());
    CD->displayReady();
}
