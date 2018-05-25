#include "libraryfacadeimpl.h"

class Application{
public:
    virtual void use(LibraryFacade* F){
        F->loanBook(7,13,"10 may 2003", 2);
        F->loanBook(7,17,"15 may 2003",3);
        F->loanBook(7,999,"24 may 2018", 9);
        F->loanBook(8,1,"1 january 2000", 1);
        F->returnBook(17);
        F->showLoans(7);
        F->showLoans(8);
    }
};

int main()
{
    Application A;
    A.use(LibraryFacadeImpl::getInstance());
    return 0;
}
