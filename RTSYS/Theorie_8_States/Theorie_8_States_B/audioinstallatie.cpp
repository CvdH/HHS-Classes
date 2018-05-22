#include "audioinstallatie.h"
#include <iostream>
using namespace std;

AudioInstallatie::AudioInstallatie()
{
    CD = new CDspeler();
}

void AudioInstallatie::playCD(){
    char c;
    cin >> c;
    while (c!='e'){
        if(c=='p')      CD->playButton();
        else if(c=='s') CD->stopButton();
        else if(c=='a') CD->pauseButton();
        cin >> c;
    }
}
