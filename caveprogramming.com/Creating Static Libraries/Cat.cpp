#include "Cat.h"

#include <iostream>

using namespace std;

void saySomething(){
    std::cout << "Hello there!!!" << std::endl;
}

namespace apple {

Cat::Cat() {

}

void speak(){
    std::cout << "Meewowww!!!" << std::endl;
}

Cat::~Cat() {

}

}
