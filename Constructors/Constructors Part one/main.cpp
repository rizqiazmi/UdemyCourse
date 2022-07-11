#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int ID, year;
    char name[20];

    Student ()
    {
        ID=6; year=2022;

        // memset (array_name, 0, sizeof(array_name));
        memset (name, 0, sizeof(name));
    }
}student1;

int main()
{
    cout<<student1.ID<<" "<<student1.year<<" "<<student1.name;

    Student student2;
    cout<<student2.ID;

    return 0;
}
