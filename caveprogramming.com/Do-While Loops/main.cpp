#include <iostream>
using namespace std;

int main()
{
    const string code = "Secret";

    string input;

    do
    {
        cout << "Enter your code: "; // menampilkan
        cin >> input;

        if (input != code)
        {
            cout << "Code Denied" << endl;
        }
    }

    while(input != code);

    cout << "Code Accepted" << endl;

    return 0;
}
