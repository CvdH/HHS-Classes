#ifndef OPERATINGSYSTEM_H
#define OPERATINGSYSTEM_H

//#include <stdio.h>
//#include <iostream>
//#include <list>

#include "item.h"

using namespace std;

class OperatingSystem{
public:
    virtual ~OperatingSystem(){}
    //virtual Item* makeItem() = 0;
    virtual Item* makeFile(string n, int s) = 0;
    virtual Item* makeDir(string n) = 0;
    //static void run();
    virtual void run();
};

#endif // OPERATINGSYSTEM_H
