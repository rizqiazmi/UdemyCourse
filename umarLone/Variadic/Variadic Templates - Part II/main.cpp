#include <iostream>
#include "Integer.h"
using namespace std;

void Print(){
    cout << endl;
}

//Template parameter pack
template<typename T, typename...Params>
//Function parameter pack
void Print(T &&a, Params&&... args) {
    //cout << sizeof...(args) << endl;
    //cout << sizeof...(Params) << endl;
    cout << a;
    if(sizeof...(args) != 0){
        cout << ",";
    }
    Print(forward<Params>(args)...);
}

int main(){
    //Print({ 1,2.5,3,4 });
    //Print(1, 2.5, 3, "4");
    Integer val{ 1 };
    Print(0, val, Integer{ 2 });
    return 0;
}
/*
1. Print(1, 2.5, 3, "4");
2. Print(2.5, 3, "4");
3. Print(3, "4");
4. Print("4");
5. Print();
*/
