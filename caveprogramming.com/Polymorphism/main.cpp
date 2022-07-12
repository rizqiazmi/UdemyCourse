#include <iostream>
using namespace std;

class Animal  {
public:
    virtual void speak()=0;

    virtual ~Animal() {};
};

class Cat: public Animal {
public:
    virtual void speak() {
        cout << "RrrrrRRRrrrr" << endl;
    }

    virtual ~Cat(){};
};

class HouseCat: public Cat {
public:
    virtual void speak() {
        cout << "Meeouww" << endl;
    }

    virtual ~HouseCat() {};
};

int main(){

    Animal *pAnimal = new HouseCat;

    pAnimal->speak();

    delete pAnimal;

    return 0;
}
