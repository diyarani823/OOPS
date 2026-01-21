#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
    int semester;
    char section;

    void setData(string n, int r, int sem, char sec) {
        name = n;
        roll_no = r;
        semester = sem;
        section = sec;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Semester: " << semester << endl;
        cout << "Section: " << section << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    Student s[4];

    s[0].setData("Diya", 1, 2, 'A');
    s[1].setData("Arhama", 2, 3, 'B');
    s[2].setData("Sara", 3, 2, 'A');
    s[3].setData("Zara", 4, 1, 'C');

    cout << "Students of Section A:\n";
    for (int i = 0; i < 4; i++) {
        if (s[i].section == 'A') {
            s[i].display();
        }
    }

    return 0;
}

