#ifndef FILE_H
#define FILE_H

//#include <stdio.h>
//#include <iostream>
//#include <list>

#include "item.h"

using namespace std;


class File : public Item{
public:
    int size;
    File(string n, int s);
    virtual const string getName();
    virtual int getSize();
    virtual void show();
    virtual void showVerbose(int level);
    virtual void add( Item* item);
    virtual void rem( Item* item);
};

#endif // FILE_H
