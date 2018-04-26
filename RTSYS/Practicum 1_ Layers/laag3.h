#ifndef __laag3_H
#define __laag3_H

#include "laag2.h"

using namespace std;

class Facade3{
	public Facade2;
};

class Laag3Impl : public Facade3, public L2Server{
};