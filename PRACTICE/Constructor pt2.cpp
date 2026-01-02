#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    // Constructor
    Student() {
        roll = 1;
        cout << "Constructor is called" << endl;
    }
};

int main() {
    Student s;   // object creation
    cout << "Roll number: " << s.roll << endl;
    return 0;
}

