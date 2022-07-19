#include <iostream>
#include <vector>
using namespace std;
template<typename T>
class PrettyPrinter {
    T *m_pData;
public:
    PrettyPrinter(T *data) :m_pData(data){

    }
    void Print() {
        cout << "{" << *m_pData << "}" << endl;
    }
    T * GetData() {
        return m_pData;
    }
};

template<>
void PrettyPrinter<vector<int>>::Print(){
    cout << "{";
    for (const auto &x : *m_pData) {
        cout << x;
    }
    cout << "}" << endl;
}
template<>
class PrettyPrinter<char*> {
    char *m_pData;
public:
    PrettyPrinter(char *data) :m_pData(data) {

    }
    void Print() {
        cout << "{" << m_pData << "}" << endl;
    }
    char * GetData() {
        return m_pData;
    }
};
/*
template<>
class PrettyPrinter<vector<int>> {
    vector<int> *m_pData;
public:
    PrettyPrinter(vector<int> *data) :m_pData(data) {

    }
    void Print() {
        cout << "{";
        for (const auto &x : *m_pData) {
            cout << x;
        }
        cout << "}" << endl;
    }
    vector<int> * GetData() {
        return m_pData;
    }
};
*/
int main(){
/*
    int data = 5;
    float f = 8.2f;
    PrettyPrinter<int> p1 (&data);
    p1.Print();
    PrettyPrinter<float> p2(&f);
    p2.Print();
*/
    char *p{ "Hello World" };
    PrettyPrinter<char*> p3(p);
    p3.Print();
    char *pData = p3.GetData();
    vector<int> v{ 1,2,3,4,5 };
    PrettyPrinter<vector<int>> pv(&v);
    pv.Print();
    return 0;
}
