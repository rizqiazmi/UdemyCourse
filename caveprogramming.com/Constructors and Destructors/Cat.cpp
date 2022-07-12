#include <iostream>
#include "cat.h"

using namespace std;

Cat::Cat() {
    cout << "Cat created." << endl;

    happy = true;
}

Cat::~Cat() {
    cout << "Cat Destroyed" << endl;
}

void Cat::speak() {
    if(happy) {
        cout << "Meow!" << endl;
    }
    else {
        cout << "Sssss!" << endl;
    }
}
