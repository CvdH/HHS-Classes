#ifndef LIBRARYFACADE
#define LIBRARYFACADE

#include "subsystem.h"

class LibraryFacade{
private:
    static LibraryFacade* Instance;
protected:
    LibraryFacade();
    ~LibraryFacade();
    LibraryFacade(const LibraryFacade&);
    virtual LibraryFacade& operator=( const LibraryFacade&) = 0;
public:
    static LibraryFacade* getInstance();
    virtual void loanBook(int memNr, int bookNr, string date, int weeks) = 0;
    virtual void returnBook(int bookNr) = 0;
    virtual void showLoans(int memNr) = 0;
};


#endif // LIBRARYFACADE

