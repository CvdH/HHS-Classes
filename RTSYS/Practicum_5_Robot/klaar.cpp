#include "klaar.h"
#include "zwervend.h"

Klaar* Klaar::Instance;

Klaar* Klaar::get(){
    if(!Instance){
        Instance = new Klaar();
    }
    return Instance;
}

void Klaar::start(Robot *R){
    R->setState(Zwervend::get());
}

void Klaar::stop(Robot *R){
}

void Klaar::win(Robot *R){
}

void Klaar::vind(Robot *R){
}

void Klaar::verlies(Robot *R){
}

string Klaar::toestand(){
    return "Klaar ";
}
