#include <iostream>
#include <string.h>

//Primary Template
template<typename T>
T Max(T x, T y) {
    std::cout << typeid(T).name() << std::endl;
    return x > y ? x : y;
}
//Explicit Instantiation
template char Max(char x, char y);

//Explicit Specialization
template<> const char * Max<const char*>(const char *x, const char *y){
    std::cout << "Max<const char*>()" << std::endl;
    return strcmp(x, y) > 0 ? x : y;
}

template<int size>
void Print() {
    char buffer[size];
    std::cout << size << std::endl;
}
/*template<typename T>
T Sum(T *parr, int size) {
    T sum{};
    for (int i = 0; i < size; ++i) {
        sum += parr[i];
    }
    return sum;
}*/
template<typename T, int size>
T Sum(T (&parr)[size]) {
    T sum{};
    for (int i = 0; i < size; ++i) {
        sum += parr[i];
    }
    return sum;
}
int main() {
    //Print<3>();
    int arr[]{ 3,1,9,7 };
    auto it = std::begin(arr);
    //int (&ref)[4] = arr;
    int sum = Sum(arr);
    std::cout << sum << std:: endl;
    return 0;
}
