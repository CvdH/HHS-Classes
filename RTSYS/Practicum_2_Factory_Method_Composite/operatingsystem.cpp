#include "operatingsystem.h"

void OperatingSystem::run ( ){
    Item* f = makeFile("1.txt", 1000);
    Item* D = makeDir("dir A");
    D->add ( f );
    D->show ( );

    Item* f2 = makeFile("2.jpg", 120579);
    Item* D2 = makeDir("dir B");
    D2->add(f2);

    D2->show();
    D->add(D2);
    D->show();
}
