#include "borderdecorator.h"
#include "voortextdecorator.h"
#include "natextdecorator.h"
#include "analogemeter.h"
#include "digitalemeter.h"
#include "snelheid.h"


int main()
{
    Meter* M = new BorderDecorator(
        new VoorTextDecorator(
            new NaTextDecorator(
                new DigitaleMeter,
                "Datum: 12 mei 2005\n"
            ),
            "De snelheid is:\n"
        )
    );
    Snelheid S ( M );
    S.meet ( );
    S.toon ( );
    return 0;
}
