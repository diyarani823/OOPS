#include<iostream>
using namespace std;

class MyClass {
public:
    static int count;

    MyClass() { count++; }     // constructor
    ~MyClass() { count--; }    // destructor
};

int MyClass::count = 0;

int main() {
    MyClass obj1;              // (1)
    MyClass *ptr = new MyClass; // (2)

    cout << MyClass::count;    // (3)

    delete ptr;                // (4)

    cout << MyClass::count;    // (5)
}
