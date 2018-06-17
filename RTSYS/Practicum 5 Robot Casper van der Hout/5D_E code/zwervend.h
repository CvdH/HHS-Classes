#ifndef ZWERVEND_H
#define ZWERVEND_H

#include "state.h"

class Zwervend : public State
{
private:
    static Zwervend* Instance;
public:
    static Zwervend* get();
    void start(Robot* R);
    void stop(Robot* R);
    void win(Robot* R);
    void vind(Robot* R);
    void verlies(Robot* R);
    string toestand();
};

#endif // ZWERVEND_H
