#ifndef ITEM_H
#define ITEM_H

#include <stdio.h>
#include <iostream>
#include <list>
#include <string>
using namespace std;


class Item{
public:
    string name;
    virtual ~Item(){}
    virtual const string getName() = 0;
    virtual int getSize() = 0;
    virtual void show() = 0;
    virtual void add( Item* item) = 0;
    virtual void rem( Item* item) = 0;
};

#endif // ITEM_H
