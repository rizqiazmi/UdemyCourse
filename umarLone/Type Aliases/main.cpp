#include <iostream>
#include <vector>
#include <list>
using namespace std;

const char * GetErrorMessage(int errorNo) {
    return "Empty";
}
//typedef const char *(*PFN)(int);
using PFN = const char *(*)(int);
void ShowError(PFN pfn){

}
//typedef vector <list<string>> Names;
using Names = vector<list<string>>;

int main(){
    Names names;
    Names nnames;

    PFN pfn = GetErrorMessage;
    ShowError(pfn);
    return 0;
}
