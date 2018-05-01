#include "headers.h"

void OperatingSystem::run ( ){
    Item* f = new File ("1.txt", 1000);
    Item* D = new Directory ("dir A");
    D->add ( f );
    cout << endl;

    D->show ( );
    cout << endl;

    Item* f2 = new File("2.jpg", 120579);
    Item* D2 = new Directory("dir B");
    D2->add(f2);
    cout << endl;

    D2->show();
    cout << endl;

    D->add(D2);
    cout << endl;

    D->show();
}
