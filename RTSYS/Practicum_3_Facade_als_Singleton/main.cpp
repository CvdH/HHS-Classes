#include <iostream>
#include "subsystem.h"

int main()
{
    Application A;
    A.use(Library::get());
    return 0;
}
