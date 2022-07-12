#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float fValue = 76.6;

    cout << "size of float: " << sizeof(float) << endl;
    cout << "Fixed fValue:" << setprecision(20) << fixed << fValue << endl;
    cout << "scientific fValue:" << setprecision(20) << scientific << fValue << endl;


    double dValue = 123.45123;
    cout << "\nsize of float: " << sizeof(dValue) << endl;
    cout << "Fixed dValue: " << setprecision(20) << fixed << dValue << endl;
    cout << "scientific dValue: " << setprecision(20) << scientific << dValue << endl;


    long double lValue = 123.45625534;
    cout << "\nsize of float: " << sizeof(lValue) << endl;
    cout << "Fixed lValue: " << setprecision(20) << fixed << lValue << endl;
    cout << "scientific lValue: " << setprecision(20) << scientific << lValue << endl;



}
