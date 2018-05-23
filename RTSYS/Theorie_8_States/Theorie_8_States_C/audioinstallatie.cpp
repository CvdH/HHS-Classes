#include "audioinstallatie.h"
#include <iostream>
using namespace std;

void AudioInstallatie::playCD(CDspeler* CD){
    char c;
    cin >> c;
    while (c!='e'){
        if(c=='p')      CD->event(CDspeler::PlayButton);
        else if(c=='s') CD->event(CDspeler::StopButton);
        else if(c=='a') CD->event(CDspeler::PauseButton);
        cin >> c;
    }
}
