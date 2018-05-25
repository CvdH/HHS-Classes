#include "subsystem.h"
#include <iostream>

map<int,Member*> Member::M = {};
map<int,Book*> Book::B = {};

Member* Member::getMember(int nr){
    if( M.count(nr)){
        return M[nr];
    } else{
        return M[nr] = new Member(nr);
    }
}

void Member::remMember(Member *m){
    //L.erase(m->nr());
    M.erase(m->nr());
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
    cout << "Member Nr " << Nr << " has loaned the following books:" << endl;
    for(Loan* l : L){
        if(l->getMember() == this){
            cout << "Book Nr " << l->getBook()->getNr() << " on " << l->getDate() << " for " << l->getWeeks() << " weeks" << endl;
        }
    }
    cout << endl;
}
