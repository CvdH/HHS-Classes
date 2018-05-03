#include "simpleoperatingsystem.h"

#include <iostream>
//#include <string.h>

Item* SimpleOperatingSystem::makeFile(string n, int s){
    return new File(n, s);
}

Item* SimpleOperatingSystem::makeDir(string n){
    return new Directory(n);
}
