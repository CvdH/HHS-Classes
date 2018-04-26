#ifndef __laag2_H
#define __laag2_H

#include "laag1.h"

using namespace std;

class Facade2{
	public Facade1
};

class L2Server{
};

class Laag2Impl : public Facade2, public L1Server{
	public L2Server;
};