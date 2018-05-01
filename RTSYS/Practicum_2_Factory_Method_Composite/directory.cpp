#include "headers.h"

Directory::Directory(string n){
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
    cout << name << " " << getSize() << "B\n";
}

/*const string Directory::getName(){
    return name;
}*/

int Directory::getSize(){
    int temp = 0;

    for(Item* i : list){
        temp += i->getSize();
    }

    return temp + 1024;
}
