#include "headers.h"

File::File(string n, int s){
    name = n;
    size = s;
    cout << "File '" << name <<"' created with size " << size << " Bytes\n";
}

const string File::getName(){
    return name;
}

int File::getSize(){
    return size;
}

void File::show(){
    cout << name << " " << size << " Bytes\n";
}

void File::add(Item* item){
    //do nothing
}

void File::rem(Item *item){
    //do nothing
}
