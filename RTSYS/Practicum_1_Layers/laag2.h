#ifndef __laag2_H
#define __laag2_H

#include "laag1.h"

using namespace std;

class L2Facade{
private:
    L1Facade* L1;
public:
    virtual ~L2Facade(){}
    virtual void service() = 0;
    virtual L1Facade* laag1(){ return L1; }
    virtual void connectLow(L1Facade* l1){ L1 = l1; }
};

class L2Server{
public:
    virtual ~L2Server(){}
    virtual void layerRequest() = 0;
};

class L2Impl : public L2Facade, public L1Server{
private:
    L2Server* L2;
public:
    virtual void service();
    virtual void layerRequest();
    virtual void connectHigh(L2Server* s);
};

#endif
