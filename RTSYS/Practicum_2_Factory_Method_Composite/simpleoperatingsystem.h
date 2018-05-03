#ifndef SIMPLEOPERATINGSYSTEM_H
#define SIMPLEOPERATINGSYSTEM_H

//#include <stdio.h>
#include <iostream>
//#include <list>

#include "operatingsystem.h"
#include "file.h"
#include "directory.h"

using namespace std;


class SimpleOperatingSystem : public OperatingSystem{
public:
    virtual Item* makeFile(string n, int s);
    virtual Item* makeDir(string n);
    //virtual void run();
};

#endif // SIMPLEOPERATINGSYSTEM_H
