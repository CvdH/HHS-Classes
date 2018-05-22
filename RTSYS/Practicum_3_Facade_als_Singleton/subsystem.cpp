#include "subsystem.h"
#include <iostream>

Member* Member::getMember(int nr){
    if (L.count(nr)){
        return L[nr];
    } else{
        return L[nr] = new Member(nr);
    }
}

void Member::remMember(Member *m){
    L.erase(m->nr());
    delete m;
}

Book* Book::getBook(int nr){
    if(B.count(nr)){
        return B[nr];
    } else{
        return B[nr] = new Book(nr);
    }
}

void Book::remBook(Book *b){
    B.erase(b->getNr());
    delete b;
}

void Member::showBooks(){
    for(Loan* l : L){
        if(l->getMember() == this){
            cout << l->getBook()->getNr() << " " << l->getDate() << " " << l->getWeeks() << endl;
        }
    }
}
