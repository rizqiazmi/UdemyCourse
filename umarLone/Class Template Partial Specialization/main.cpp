#include <iostream>
#include <vector>
using namespace std;
template<typename T, int columns>
class PrettyPrinter {
    T *m_pData;
public:
    PrettyPrinter(T *data) :m_pData(data) {

    }
    void Print() {
        cout << "Columns:" << columns << endl;
        cout << "{" << *m_pData << "}" << endl;
    }

    T * GetData() {
        return m_pData;
    }
};
template<typename T>
class PrettyPrinter<T, 80>{
        T *m_pData;
public:
    PrettyPrinter(T *data) :m_pData(data) {

    }
    void Print() {
        cout << "Using 80 Columns" << endl;
        cout << "{" << *m_pData << "}" << endl;
    }

    T * GetData() {
        return m_pData;
    }
};
template<typename T>
class SmartPointer {
    T *m_ptr;
public:
    SmartPointer(T *ptr) :m_ptr(ptr) {

    }
    T * operator ->() {
        return m_ptr;
    }
    T & operator *() {
        return *m_ptr;
    }
    ~SmartPointer() {
        delete m_ptr;
    }
};
template<typename T>
class SmartPointer<T[]> {
    T *m_ptr;
public:
    SmartPointer(T *ptr) :m_ptr(ptr) {

    }
    T & operator [](int index) {
        return m_ptr[index];
    }
    ~SmartPointer() {
        delete[] m_ptr;
    }
};
int main() {
    int data = 800;
    PrettyPrinter<int, 40> p{ &data };
    p.Print();
    SmartPointer<int[]> s1{ new int[5] };
    s1[0] = 5;
    cout << s1[0] << endl;
    return 0;
}
