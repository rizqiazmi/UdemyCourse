#include <iostream>
#include "Cat.h"

using namespace std;

int main(){
    Cat jim;
    jim.makehappy();
    jim.speak();

    Cat bob;
    bob.makeSad();
    bob.speak();

    return 0;
}
