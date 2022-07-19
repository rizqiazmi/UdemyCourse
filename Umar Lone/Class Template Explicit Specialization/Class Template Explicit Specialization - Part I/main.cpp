#include <iostream>
using namespace std;
template<typename T>
class PrettyPrinter {
    T *m_pData;
public:
    PrettyPrinter(T *data) :m_pData(data) {

    }
    void Print() {
        cout << "{" << *m_pData << "}" << endl;
    }
    T * GetData() {
        return m_pData;
    }
};
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
int main(){
/*
    int data = 5;
    float f = 8.2f;
    PrettyPrinter<int> p1(&data);
    p1.Print();
    PrettyPrinter<float> p2(&f);
    p2.Print();
*/
    char *p{ "Hello World" };
    PrettyPrinter<char*> p3(p);
    p3.Print();
    char *pData = p3.GetData();
    return 0;
}
