#include <iostream>
#include <sstream>

using namespace std;

int main(){

    string name = "Andi";
    int age = 32;

    stringstream ss;

    ss << "Name is: ";
    ss << name;
    ss << "\n Age is: ";
    ss << age;

    string info = ss.str();

    cout << info << endl;
    // cout << ss.str() << endl;

    return 0;
}
