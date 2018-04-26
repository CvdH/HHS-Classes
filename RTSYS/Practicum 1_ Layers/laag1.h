#ifndef __laag1_H
#define __laag1_H
using namespace std;

class Facade1{
	public:	virtual ~Facade1(){}
			virtual void service() = 0;
};

class L1Server{
	public:	virtual ~L1Server(){}
			virtual void layerRequest() = 0;
};

class Laag1Impl : public Facade1{
	private L1Server* L1;
	
	public: virtual void service();
			virtual void connectHigh(L1Server* s);
};