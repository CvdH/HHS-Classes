#ifndef LIBRARYFACADEIMPL
#define LIBRARYFACADEIMPL

#include "libraryfacade.h"

class LibraryFacadeImpl : public LibraryFacade{
private:
    static LibraryFacadeImpl* Instance;
protected:
    LibraryFacadeImpl();
    LibraryFacadeImpl(const LibraryFacadeImpl&);
    LibraryFacadeImpl& operator=( const LibraryFacadeImpl&);
public:
    static LibraryFacadeImpl* getInstance();
    void loanBook(int memNr, int bookNr, string date, int weeks);
    void returnBook(int bookNr);
    void showLoans(int memNr);
};

#endif // LIBRARYFACADEIMPL

