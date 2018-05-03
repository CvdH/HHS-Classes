#ifndef DIRECTORY_H
#define DIRECTORY_H

//#include <stdio.h>
//#include <iostream>
//#include <list>

#include "item.h"

using namespace std;


class Directory : public Item{
private:
    list<Item*> fileList;
public:
    Directory(string naam);
    list<Item*> getList();
    virtual const string getName();
    virtual int getSize();
    virtual void show();
    virtual void add( Item* item);
    virtual void rem( Item* item);
};

#endif // DIRECTORY_H
