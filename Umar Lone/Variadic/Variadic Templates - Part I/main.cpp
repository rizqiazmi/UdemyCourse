#include <iostream>

using namespace std;
/*template<typename T>
void Print(initializer_list<T> args) {
    for (const auto &x : args) {
        cout << x << " ";
    }
}*/

void Print() {

}

//Template parameter pack
template<typename T, typename...Params>
//Function parameter pack
void Print(T a, Params... args) {
    Print(args...);
}
int main() {
    //Print({ 1,2.5,3,4 });
    Print(1, 2.5, 3, "4");
    return 0;
}
/*
1. Print(1, 2.5, 3, "4") ;
2. Print(2.5, 3, "4") ;
3. Print(3, "4") ;
4. Print("4") ;
5. Print() ;
*/
