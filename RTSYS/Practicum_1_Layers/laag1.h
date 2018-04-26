#ifndef __laag1_H
#define __laag1_H

#include <stdio.h>
#include <iostream>

using namespace std;

class L1Facade{
    public:	virtual ~L1Facade(){}
			virtual void service() = 0;
};

class L1Server{
	public:	virtual ~L1Server(){}
			virtual void layerRequest() = 0;
};

class L1Impl : public L1Facade{
    private: L1Server* L1;
	
	public: virtual void service();
			virtual void connectHigh(L1Server* s);
};

#endif
