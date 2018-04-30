#include "headers.h"

Directory::Directory(String n){
    name = n;
}

void Directory::add(Item *item){
    list.push_front(x);
}

void Directory::rem(Item *item){
    list.remove(x);
}

List<Item*> Directory::getList(){
    return list;
}

void Directory::show(){
    //TODO
}

const String Directory::getName(){
    return name;
}

int Directory::getSize(){
    //TODO
}
