#include "cdspeler.h"
#include "stopped.h"
#include "playing.h"
#include "paused.h"

CDspeler::CDspeler()
{
    //S = Stopped::get();
    setState(Stopped::get());
    displayReady();
}

void CDspeler::displayReady(){
    cout << "Ready" << endl;
}

void CDspeler::displayPaused(){
    cout << "Paused" << endl;
}

void CDspeler::playCD(){
    cout << "Playing CD" << endl;
}


void CDspeler::startPlaying(){
    setState(Playing::get());
    cout << "Starting" << endl;
    playCD();
}

void CDspeler::stopPlaying(){
    setState(Stopped::get());
    cout << "Stopping" << endl;
    displayReady();
}

void CDspeler::pausePlaying(){
    setState(Paused::get());
    cout << "Pausing" << endl;
    displayPaused();
}

void CDspeler::resumePlaying(){
    setState(Playing::get());
    cout << "Resuming" << endl;
    playCD();
}


void CDspeler::playButton(){
    S->playButton(this);
}

void CDspeler::pauseButton(){
    S->pauseButton(this);
}

void CDspeler::stopButton(){
    S->stopButton(this);
}

void CDspeler::setState(State* s){
    S = s;
}
