#include <iostream>
using namespace std;

class Calculator {
private:
    double Num1, Num2, Num3;

public:
    Calculator() {
        cout << "Enter Num1: ";
        cin >> Num1;
        cout << "Enter Num2: ";
        cin >> Num2;
        cout << "Enter Num3: ";
        cin >> Num3;
    }
    double add(double a, double b) {
        return a + b;
    }

    double add(double a, double b, double c) {
        return a + b + c;
    }
    double multiply(double a, double b) {
        return a * b;
    }

    double multiply(double a, double b, double c) {
        return a * b * c;
    }
    double subtract() {
        return Num1 - Num2 - Num3;
    }
    double divide() {
        if (Num2 == 0 || Num3 == 0) {
            cout << "Division by zero error!" << endl;
            return 0;
        }
        return Num1 / Num2 / Num3;
    }
    void displayNumbers() {
        cout << "Num1 = " << Num1 << ", Num2 = " << Num2 << ", Num3 = " << Num3 << endl;
    }
};

int main() {
    Calculator calc;

    calc.displayNumbers();
    cout << "\nAddition (2 numbers): " << calc.add(1, 2) << endl;
    cout << "Addition (3 numbers): " << calc.add(1, 2, 3) << endl;

    cout << "\nMultiplication (2 numbers): " << calc.multiply(2, 3) << endl;
    cout << "Multiplication (3 numbers): " << calc.multiply(2, 3, 4) << endl;

    cout << "\nSubtraction: " << calc.subtract() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}
