#ifndef __laag3_H
#define __laag3_H

#include "laag2.h"

using namespace std;

class L3Facade{
private:
    L2Facade* L2;
public:
    virtual ~L3Facade(){}
    virtual void service() = 0;
    virtual L2Facade* laag2(){ return L2; }
    virtual void connectLow(L2Facade* l2){ L2 = l2; }
};

class L3Impl : public L3Facade, public L2Server{
public:
    virtual void service();
    virtual void layerRequest();
};

#endif
