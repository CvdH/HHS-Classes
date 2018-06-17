#include "verloren.h"
#include "aanvallend.h"
#include "klaar.h"
#include "zwervend.h"

Verloren* Verloren::Instance;

Verloren* Verloren::get(){
    if(!Instance){
        Instance = new Verloren();
    }
    return Instance;
}

void Verloren::start(Robot *R){
    R->setState(Zwervend::get());
}

void Verloren::stop(Robot *R){
    R->setState(Klaar::get());
}

void Verloren::win(Robot *R){
}

void Verloren::vind(Robot *R){
}

void Verloren::verlies(Robot *R){
}

string Verloren::toestand(){
    return "Verloren ";
}
