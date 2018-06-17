#ifndef KLAAR_H
#define KLAAR_H

#include "state.h"

class Klaar : public State
{
private:
    static Klaar* Instance;
public:
    static Klaar* get();
    void start(Robot* R);
    void stop(Robot* R);
    void win(Robot* R);
    void vind(Robot* R);
    void verlies(Robot* R);
    string toestand();
};

#endif // KLAAR_H
