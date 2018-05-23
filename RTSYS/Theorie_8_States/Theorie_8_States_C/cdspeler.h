#ifndef CDSPELER_H
#define CDSPELER_H

using namespace std;
#include <iostream>
#include <vector>

class CDspeler
{
public:
    enum Event{PlayButton,StopButton,PauseButton};
    CDspeler();
    virtual ~CDspeler();
private:
    enum State{Stopped, Playing, Paused};
    //State* S;
    State S;

    typedef void (CDspeler::*Command)();
    struct Transition{
        State oldState;
        Event event;
        State newState;
        Command action;
        Command activity;
        Transition (State o, Event e, State n, Command an, Command ay)
                : oldState(o),event(e),newState(n),action(an),activity(ay){}
    };
    vector<Transition*> Table;
    virtual void addTransition(State o, Event e, State n, Command an, Command ay);
    virtual void noCommand();

public:
    // ACTIVITIES:
    virtual void displayReady();
    virtual void displayPaused();
    virtual void playCD();

    // ACTIONS:
    virtual void startPlaying();
    virtual void stopPlaying();
    virtual void pausePlaying();
    virtual void resumePlaying();

    virtual void event(Event E);
};

#endif // CDSPELER_H
