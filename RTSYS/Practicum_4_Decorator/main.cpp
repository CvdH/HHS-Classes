#include "borderdecorator.h"
#include "voortextdecorator.h"
#include "natextdecorator.h"
#include "analogemeter.h"
#include "digitalemeter.h"
#include "snelheid.h"
#include <time.h>
using namespace std;

int main()
{
    time_t rawtime;
    struct tm* timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    string s = asctime(timeinfo);

    Meter* M = new BorderDecorator(
        new VoorTextDecorator(
            new NaTextDecorator(
                new DigitaleMeter,
                //"Datum: 12 mei 2005\n"
                "Datum: " + s
            ),
            "De snelheid is:\n"
        )
    );
    Snelheid S ( M );
    S.meet ( );
    S.toon ( );
    //--------------------------------------------------
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    s = asctime(timeinfo);

    Meter* M2 = new BorderDecorator(
        new VoorTextDecorator(
            new NaTextDecorator(
                new AnalogeMeter,
                //"Datum: 12 mei 2005\n"
                "Datum: " + s
            ),
            "De snelheid is:\n"
        )
    );
    Snelheid S2 ( M2 );
    S2.meet ( );
    S2.toon ( );
    return 0;
}
