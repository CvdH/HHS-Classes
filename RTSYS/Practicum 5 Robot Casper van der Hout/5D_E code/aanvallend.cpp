#include "aanvallend.h"
#include "klaar.h"
#include "zwervend.h"
#include "verloren.h"

Aanvallend* Aanvallend::Instance;

Aanvallend* Aanvallend::get(){
    if(!Instance){
        Instance = new Aanvallend();
    }
    return Instance;
}

void Aanvallend::start(Robot *R){
    R->setState(Zwervend::get());
}

void Aanvallend::stop(Robot *R){
    R->setState(Klaar::get());
}

void Aanvallend::win(Robot *R){
    R->setState(Zwervend::get());
}

void Aanvallend::vind(Robot *R){
}

void Aanvallend::verlies(Robot *R){
    //opdracht 5D:
    //R->setState(Klaar::get());
    //opdracht 5E:
    R->setState(Verloren::get());
}

string Aanvallend::toestand(){
    return "Aanvallend ";
}
