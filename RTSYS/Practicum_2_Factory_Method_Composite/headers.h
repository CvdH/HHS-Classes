#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

class OperatingSystem{
public:
    static void run();
};

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

class File : public Item{
public:
    int size;
    File(string n, int s);
    virtual const string getName();
    virtual int getSize();
    virtual void show();
    virtual void add( Item* item);
    virtual void rem( Item* item);
};

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

#endif // HEADERS_H


