#ifndef VERLOREN_H
#define VERLOREN_H

#include "state.h"

class Verloren : public State
{
private:
    static Verloren* Instance;
public:
    static Verloren* get();
    void start(Robot* R);
    void stop(Robot* R);
    void win(Robot* R);
    void vind(Robot* R);
    void verlies(Robot* R);
    string toestand();
};

#endif // VERLOREN_H
