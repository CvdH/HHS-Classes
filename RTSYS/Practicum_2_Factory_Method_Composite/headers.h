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
    string name;
    virtual ~Item(){}
    virtual const string getName() {return name;}
    virtual int getSize() = 0;
    virtual void show() = 0;
    virtual void add( Item* item) = 0;
    virtual void rem( Item* item) = 0;
};

class File : public Item{
public:
    int size;
    File(string n, int s);
};

class Directory : public Item{
private:
    list<Item*> fileList;
public:
    Directory(string naam);
    list<Item*> getList();
};

#endif // HEADERS_H


