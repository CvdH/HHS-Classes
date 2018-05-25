#include "libraryfacadeimpl.h"


LibraryFacadeImpl* LibraryFacadeImpl::instance = 0;

LibraryFacadeImpl* LibraryFacadeImpl::getInstance(){
    if(instance == 0){
        instance = new LibraryFacadeImpl;
    }
    return instance;
}

void LibraryFacadeImpl::loanBook(int memNr, int bookNr, string date, int weeks){
    Loan* l = new Loan(Member::getMember(memNr),Book::getBook(bookNr),date,weeks);
    l->getMember()->addLoan(l);
    l->getBook()->loanBook(l);
}

void LibraryFacadeImpl::returnBook(int bookNr){
    Book* b = Book::getBook(bookNr);
    Loan* l = b->getLoan();
    l->getMember()->remLoan(l);
    b->returnBook();
    delete l;
}

void LibraryFacadeImpl::showLoans(int memNr){
    Member::getMember(memNr)->showBooks();
}
