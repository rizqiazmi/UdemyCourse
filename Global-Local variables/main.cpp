#include <bits/stdc++.h>
using namespace std;
//int Aglobal[3];
//int a;
//int X;

int A[3][5];

void printingRow (int row)
{
    for(int i=0; i<5; ++i)
    {
            cout<<A[row][i]<<" ";
    }
        cout<<"\n";
}

int main()
{
    int i;

    for(int i=0; i<3; ++i)
    {

            printingRow(i);
    }

    cout<<i;

//    int Alocal[3];
//    a=100;
//    Printing(a);
//
//    cout<<X;

//    cout<<"Aglobal is: "<<Aglobal[0]
//                    <<" "<<Aglobal[1]
//                    <<" "<<Aglobal[2]<<"\n";
//    cout<<"Alocal is: "<<Alocal[0]
//                    <<" "<<Alocal[1]
//                    <<" "<<Alocal[2]<<"\n";
    return 0;
}
