#include "libraryfacadeimpl.h"

LibraryFacadeImpl::LibraryFacade(){

}

LibraryFacadeImpl::LibraryFacade(const LibraryFacade &){

}

LibraryFacadeImpl::LibraryFacade& operator=( const LibraryFacade&){

}

static LibraryFacadeImpl* LibraryFacadeImpl::getInstance(){
    if(!Instance){
        Instance = new LibraryFacadeImpl();
    }
    return Instance;
}

void LibraryFacadeImpl::loanBook(int memNr, int bookNr, String date, int weeks){
    Loan* l = new Loan(Member.getMember(memNr),Book.getBook(bookNr),date,weeks);
    l->getMember()->addLoan(l);
    l->getBook()->loanBook(l);
}

void LibraryFacadeImpl::returnBook(int bookNr){
    Book* b = Book.getBook(bookNr);
    Loan* l = b->getLoan();
    l->getMember()->remLoan(l);
    b->returnBook();
    delete l;
}

void LibraryFacadeImpl::showLoans(int memNr){
    Member.getMember(memNr)->showBooks();
}
