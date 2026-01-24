#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Employee {
private:
    char* firstName;     
    string lastName;
    int salary;
public:
    void setData(const char* f, string l, int s) {
        firstName = new char[strlen(f) + 1];
        strcpy(firstName, f);
        lastName = l;
        salary = (s > 0) ? s : 0;
    }
    char* getFirstName() { return firstName; }
    string getLastName() { return lastName; }
    int getSalary() { return salary; }
    int yearlySalary() {
        return salary * 12;
    }
    void raiseSalary() {
        salary += salary * 0.10;
    }
    ~Employee() {
        delete[] firstName;
    }
};
int main() {
    Employee e1, e2;
    e1.setData("Ali", "Khan", 50000);
    e2.setData("Sara", "Ahmed", 60000);
    cout << "Yearly Salary Employee 1: " << e1.yearlySalary() << endl;
    cout << "Yearly Salary Employee 2: " << e2.yearlySalary() << endl;
    e1.raiseSalary();
    e2.raiseSalary();
    cout << "\nAfter 10% Raise:\n";
    cout << "Yearly Salary Employee 1: " << e1.yearlySalary() << endl;
    cout << "Yearly Salary Employee 2: " << e2.yearlySalary() << endl;
    return 0;
}

