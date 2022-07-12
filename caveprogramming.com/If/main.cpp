#include <iostream>
using namespace std;

int main()
{
    string password = "hello";
    cout << "Insert your password: " << flush;

    string input;
    cin >> input;

    if(input == password)
    {
        cout << "Password accpeted." << endl;
    }

    if(input != password)
    {
        cout << "Access denied: " << endl;
    }

    return 0;
}
