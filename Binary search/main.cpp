#include <iostream>
using namespace std;
ifstream f("data.in");
ofstream g("data.out");
int A[1000], numberElements;
int BinarySearch (int X) {
    int Left=1, Right=numberElements, mid;

    while (Left <= Right) {
        mid=(Left + Right) / 2;

        if (X==A[mid]) return mid; // we have found X
        else if (X<A[mid]) Right = mid-1; // we discard the second half
                       else Left = mid+1; // we discard the first half
    }
    return -1;
}
int main()
{
    f>>numberElements;
    // array A is in ascending order
    for (int i=1; i<=numberElements; ++i)
        f>>A[i];

    cout<<BinarySearch(19);

    return 0;
}
