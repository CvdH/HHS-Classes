#ifndef SUBSYSTEM_H
#define SUBSYSTEM_H

#include <map>
#include <list>
#include <string>

using namespace std;

class Member;
class Book;

class Loan{
private:
    string  Date;
    int     Weeks;
    Member* M;
    Book*   B;
public:
    Loan(Member* m, Book* b, string d, int w) : M(m), B(b), Date(d), Weeks(w){}
    virtual ~Loan(){}

    virtual string getDate()    const {return Date; }
    virtual int getWeeks()      const {return Weeks; }
    virtual Member* getMember() const {return M; }
    virtual Book* getBook()     const {return B; }
};

class Member{
private:
    int Nr;
    list<Loan*> L;
    static map<int,Member*> M;
protected:
    Member(int n) : Nr(n){M[Nr] = this;}
public:
    virtual ~Member(){}
    virtual int nr() const          {return Nr;}
    virtual void addLoan(Loan* l)   {L.push_front(l);}
    virtual void remLoan(Loan* l)   {L.remove(l);}
    virtual void showBooks();

    static Member* getMember(int nr);
    static void remMember(Member* m);
};

class Book{
private:
    int Nr;
    Loan* L;
    static map<int,Book*> B;
protected:
    Book(int n) : Nr(n), L(0) { B[Nr] = this;}
public:
    virtual ~Book(){}
    virtual int getNr() const       {return Nr;}
    virtual Loan* getLoan() const   {return L;}
    virtual void loanBook(Loan* l)  {L = l;}
    virtual void returnBook()       {L = 0;}
    static Book* getBook(int n);
    static void remBook(Book* b);
};

#endif // SUBSYSTEM_H
