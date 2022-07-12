#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int value = 9956965;

    cout << value << endl;

    cout << "Max int value: " << INT_MAX << endl;
    cout << "Min int value: " << INT_MIN << endl;

    long int lValue = 70707504023;
    cout << lValue << endl;

    short int sValue = 1231213;
    cout << sValue << endl;

    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of int: " << sizeof(short int) << endl;

    unsigned int uValue = 123122;
    cout << uValue << endl;

    signed int siValue = 123122;
    cout << siValue << endl;

    return 0;
}
