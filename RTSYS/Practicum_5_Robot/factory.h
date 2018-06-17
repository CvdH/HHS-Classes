#ifndef FACTORY
#define FACTORY

#include "match.h"
#include "robot.h"

class Factory {
public:
    virtual Robot* makeRobot() = 0;
    virtual Match* makeMatch(Robot*) = 0;
};

#endif // FACTORY

