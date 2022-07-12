#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float digit1 = 1.1;

    if(digit1 < 1.11) // == 1.1 not equals
    {
        cout << "equals" << endl;
    }
    else
    {
        cout << "not equals" << endl;
    }

    cout << setprecision(10) << digit1 << endl;

    return 0;
}
