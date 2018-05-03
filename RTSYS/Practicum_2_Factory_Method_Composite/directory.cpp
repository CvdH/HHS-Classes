#include "directory.h"

Directory::Directory(string n){
    name = n;
    cout << "Directory '" << name << "' created with default size 1024 Bytes\n";
}

void Directory::add(Item *item){
    fileList.push_front(item);
    cout << "Item '" << item->getName() << "' with size " << item->getSize() << " Bytes added to Directory '" << name << "'\n\n";
}

void Directory::rem(Item *item){
    fileList.remove(item);
    cout << "Item '" << item->getName() << "' with size " << item->getSize() << " Bytes removed from Directory '" << name << "'\n\n";
}

list<Item*> Directory::getList(){
    return fileList;
}

void Directory::show(){
    cout << "Directory '" << name << "' has size " << getSize() << " Bytes\n";
}

const string Directory::getName(){
    return name;
}

int Directory::getSize(){
    int temp = 0;

    for(Item* i : fileList){
        temp += i->getSize();
    }

    return temp + 1024;
}
