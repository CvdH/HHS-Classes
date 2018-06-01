#ifndef LIBRARYFACADE
#define LIBRARYFACADE

#include "subsystem.h"

class LibraryFacade{
private:
    //static LibraryFacade* instance;
protected:
    //LibraryFacade(){}
    //LibraryFacade(const LibraryFacade&);
    //LibraryFacade& operator=( const LibraryFacade&);
public:
    virtual ~LibraryFacade(){}
    //static LibraryFacade* getInstance();
    virtual void loanBook(int memNr, int bookNr, string date, int weeks) = 0;
    virtual void returnBook(int bookNr) = 0;
    virtual void showLoans(int memNr) = 0;
};


#endif // LIBRARYFACADE

