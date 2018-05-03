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

    Item* f3 = makeFile("iets.rar", 12345);
    Item* f4 = makeFile("virus.exe", 1000);

    Item* D3 = makeDir("belasting");
    Item* f5 = makeFile("2017.xls",200);
    Item* f6 = makeFile("2018.xls",300);

    D->add(f3);
    D2->add(f4);

    D3->add(f5);
    D3->add(f6);
    D->add(D3);

    D->showVerbose(1);
}
