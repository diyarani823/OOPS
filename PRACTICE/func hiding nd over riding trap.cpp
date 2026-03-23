#include<iostream>
using namespace std;
class Base {
public:
    virtual void show() {
        cout << "Base show\n";
    }

    void display() {
        cout << "Base display\n";
    }
};
class Derived : public Base {
public:
    void show(int x) {   
        cout << "Derived show " << x << endl;
    }
    void display() {
        cout << "Derived display\n";
    }
};
int main() {
    Derived d;
    d.display();
    d.show(10);
}
