#ifndef AANVALLEND_H
#define AANVALLEND_H

#include "state.h"

class Aanvallend : public State
{
private:
    static Aanvallend* Instance;
public:
    static Aanvallend* get();
    void start(Robot* R);
    void stop(Robot* R);
    void win(Robot* R);
    void vind(Robot* R);
    void verlies(Robot* R);
    string toestand();
};

#endif // AANVALLEND_H
