#include "laag1.h"

void service(){
	cout << "Laag 1 start..." << endl;
	L1 -> layerRequest();
	cout << "Laag 1 stop..." < endl;
}

void connectHigh(L1Server* s){
	