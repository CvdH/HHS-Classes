#ifndef MATCH_H
#define MATCH_H

#include "robot.h"

class Match
{
private:
    Robot* R;
public:
    Match( Robot* r );
    void runRobot();
};

#endif // MATCH_H
