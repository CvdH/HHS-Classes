#include "headers.h"

File::File(String n, int s){
    name = n;
    size = s;
}

const String File::getName(){
    return name;
}

int File::getSize(){
    return size;
}

void File::show(){
    cout << name << " " << size << "B\n";
}

void File::add(Item* x){
    //do nothing
}

void File::rem(Item *item){
    //do nothing
}