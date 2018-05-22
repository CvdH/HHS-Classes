#ifndef AUDIOINSTALLATIE_H
#define AUDIOINSTALLATIE_H

#include "cdspeler.h"
#include <iostream>

class AudioInstallatie
{
public:
    CDspeler* CD;
    AudioInstallatie();
    void playCD();
};

#endif // AUDIOINSTALLATIE_H
