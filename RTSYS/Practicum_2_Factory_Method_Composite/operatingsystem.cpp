#include "headers.h"

void OperatingSystem::run ( ){
    Item* f = new File ("1.txt", 1000);
    Item* D = new Directory ("dir A");
    D->add ( f );
    D->show ( );
}
