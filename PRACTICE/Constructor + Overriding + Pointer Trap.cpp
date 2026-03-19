#include<iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor\n";
    }

    virtual void show() {
        cout << "Base Show";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor";
    }

    void show() {
        cout << "Derived Show";
    }
};

int main() {
    Base *b = new Derived();
    b->show();
}
