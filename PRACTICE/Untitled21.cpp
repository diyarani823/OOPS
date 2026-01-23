#include <iostream>
#include <string>
using namespace std;

class student {
public:
    string name;
    int rno;
    float gpa;

    // Default constructor
    student() {
        name = "";
        rno = 0;
        gpa = 0.0;
    }

    // Constructor with 2 parameters
    student(string s, int r) {
        name = s;
        rno = r;
        gpa = 0.0;
    }

    // Constructor with 3 parameters
    student(string s, int r, float g) {
        name = s;
        rno = r;
        gpa = g;
    }
};

int main() {
    student s1("diya", 165);
    student s2("diya", 165, 3.3);

    return 0;
}

