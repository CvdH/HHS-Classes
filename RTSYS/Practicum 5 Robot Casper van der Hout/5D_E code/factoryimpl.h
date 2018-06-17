#ifndef FACTORYIMPL_H
#define FACTORYIMPL_H

#include "factory.h"

class FactoryImpl : public Factory
{
public:
    virtual Robot* makeRobot();
    virtual Match* makeMatch(Robot * r);
};

#endif // FACTORYIMPL_H
