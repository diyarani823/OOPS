#include <iostream>
using namespace std;

class Base {
protected:
    int protectedVar;

public:
    Base() : protectedVar(0) {}

    void setProtectedVar(int value) {
        protectedVar = value;
    }

    int getProtectedVar() {
        return protectedVar;
    }
};

class Derived : protected Base {
public:
    void printProtectedVar() {
        cout << protectedVar;
    }
};

int main() {
    Derived derivedObj;
   // cout<<derivedObj.setProtectedVar(10); (cannot be accessed since they are protected)
   // cout << derivedObj.getProtectedVar();
    derivedObj.printProtectedVar();
}
