#include<iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor\n";
    }

    virtual void show() {
        cout << "Base Show\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor\n";
    }

    void show() {
        cout << "Derived Show\n";
    }
};

int main() {
    Base *b = new Derived();
    b->show();
}
