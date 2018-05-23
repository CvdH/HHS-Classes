#include "cdspeler.h"

CDspeler::CDspeler() : S(Stopped)
{
    //TRANSITION TABLE:
    //              oldState    event       newState    action                      activity
    addTransition(  Stopped,    PlayButton, Playing,    &CDspeler::startPlaying,    &CDspeler::playCD);
    addTransition(  Stopped,    StopButton, Stopped,    &CDspeler::noCommand,       &CDspeler::displayReady);
    addTransition(  Stopped,    PauseButton,Stopped,    &CDspeler::noCommand,       &CDspeler::displayReady);
    addTransition(  Playing,    PlayButton, Playing,    &CDspeler::noCommand,       &CDspeler::playCD);
    addTransition(  Playing,    StopButton, Stopped,    &CDspeler::stopPlaying,     &CDspeler::displayReady);
    addTransition(  Playing,    PauseButton,Paused,     &CDspeler::pausePlaying,    &CDspeler::displayPaused);
    addTransition(  Paused,     PlayButton, Playing,    &CDspeler::resumePlaying,   &CDspeler::playCD);
    addTransition(  Paused,     StopButton, Stopped,    &CDspeler::noCommand,       &CDspeler::displayReady);
    addTransition(  Paused,     PauseButton,Paused,     &CDspeler::noCommand,       &CDspeler::displayPaused);

    //start in Stopped state
    displayReady();
}

CDspeler::~CDspeler(){
    for(Transition* T : Table){
        delete T;
    }
}

// ACTIVITIES:

void CDspeler::displayReady(){
    cout << "Activity: Stopped/Ready" << endl;
}

void CDspeler::displayPaused(){
    cout << "Activity: Paused" << endl;
}

void CDspeler::playCD(){
    cout << "Activity: Playing CD" << endl;
}

// ACTIONS:

void CDspeler::startPlaying(){
    cout << "Action: Starting" << endl;
    //playCD();
}

void CDspeler::stopPlaying(){
    cout << "Action: Stopping" << endl;
    //displayReady();
}

void CDspeler::pausePlaying(){
    cout << "Action: Pausing" << endl;
    //displayPaused();
}

void CDspeler::resumePlaying(){
    cout << "Action: Resuming" << endl;
    //playCD();
}

// ???
void CDspeler::event(Event E){
    for(Transition* T : Table){
        if(T->oldState==S && T->event==E){
            Command C;
            C = T->action;      (this->*C)();
            S = T->newState;
            C = T->activity;    (this->*C)();
            return;
        }
    }
}

void CDspeler::addTransition(State o, Event e, State n, Command an, Command ay){
    Table.push_back(new Transition(o,e,n,an,ay));
}

void CDspeler::noCommand(){
    //nothing
}

