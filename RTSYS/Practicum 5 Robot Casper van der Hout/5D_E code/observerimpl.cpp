#include "observerimpl.h"

ObserverImpl::ObserverImpl(Robot* r) : R(r),Observer(r)
{

}

void ObserverImpl::update(){
    cout << "Observer: subject is " << getSubject()->toestand() << endl;
}

