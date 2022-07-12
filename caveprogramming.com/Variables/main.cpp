#include <iostream>

using namespace std;

int main()
{

    int numberCamels = 10;
    int numberDeers = 3;
    int numberAnimals = numberCamels + numberDeers; //combine value in a bit memory

    cout << "number of Camel : " << numberCamels << endl;
    cout << "number of Deer : " << numberDeers << endl;

    cout << "total animal Camel and Deer : " << numberAnimals << endl;

    cout << "new Camel acquired !" << endl;

    numberCamels = numberCamels + 1; //label bit of memory

    cout << "new number of Camels : " << numberCamels << endl;

    return 0;
}
