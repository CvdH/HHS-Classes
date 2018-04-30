#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

class OperatingSystem{
public:
    OperatingSystem();
    void run();
};

class Item{
public:
    String name;
    virtual ~Item(){}
    virtual const String getName() = 0;
    virtual int getSize() = 0;
    virtual void show() = 0;
    virtual void add( Item* item) = 0;
    virtual void rem( Item* item) = 0;
};

class File : public Item{
public:
    int size;
    File(String n, int s);
};

class Directory : public Item{
private:
    List<Item*> list;
public:
    Directory(String naam);
    List<Item*> getList();
};

#endif // HEADERS_H


