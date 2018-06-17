#include "zwervend.h"
#include "aanvallend.h"
#include "klaar.h"
#include "verloren.h"

Zwervend* Zwervend::Instance;

Zwervend* Zwervend::get(){
    if(!Instance){
        Instance = new Zwervend();
    }
    return Instance;
}

void Zwervend::start(Robot *R){
}

void Zwervend::stop(Robot *R){
    R->setState(Klaar::get());
}

void Zwervend::win(Robot *R){
}

void Zwervend::vind(Robot *R){
    R->setState(Aanvallend::get());
}

void Zwervend::verlies(Robot *R){
    //5D: niks
    //5E:
    R->setState(Verloren::get());
}

string Zwervend::toestand(){
    return "Zwervend ";
}
