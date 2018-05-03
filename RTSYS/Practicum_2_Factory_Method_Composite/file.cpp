#include "file.h"

#include <iostream>
#include <string>

File::File(string n, int s){
    name = n;
    size = s;
    cout << "Created File '" << name <<"' with size " << size << " Bytes\n";
}

const string File::getName(){
    return name;
}

int File::getSize(){
    return size;
}

void File::show(){
    cout << "Show File: " << name << " has size " << size << " Bytes\n";
}

void File::showVerbose(int level){
    cout << "Show File: " << name << " has size " << size << " Bytes\n";
}

void File::add(Item* item){
    //do nothing
}

void File::rem(Item *item){
    //do nothing
}
