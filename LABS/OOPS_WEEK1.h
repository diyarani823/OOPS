#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void task_marks() {
    cout << "Marks & Percentage Calculator" << endl;
    int rollNo, scores[5], sum = 0;
    const int maxTotal = 500;
    string subjects[5] = {"CAG", "DS", "LDST", "OOP", "PS"};
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for " << subjects[i] << ": ";
        cin >> scores[i];
        sum += scores[i];
    }
    float percentage = (float(sum) / maxTotal) * 100;
    cout << "Percentage Obtained: " << percentage << "%" << endl << endl;
}
void task_swap() {
    cout << "Swap Three Values" << endl;
    int values[3];
    for (int i = 0; i < 3; i++) {
        cout << "Input value " << i + 1 << ": ";
        cin >> values[i];
    }
    cout << "\nBefore Swap:\n";
    for (int i = 0; i < 3; i++)
        cout << "Value " << i + 1 << ": " << values[i] << endl;
    values[0] = values[0] + values[1];
    values[1] = values[0] - values[1];
    values[0] = values[0] - values[1];

    values[1] = values[1] + values[2];
    values[2] = values[1] - values[2];
    values[1] = values[1] - values[2];

    cout << "\nAfter Swap:\n";
    for (int i = 0; i < 3; i++)
        cout << "Value " << i + 1 << ": " << values[i] << endl;

    cout << endl;
}
void task_temperature() {
    float fahrenheit, celsius;
    cout << "Temperature Converter (F ? C)" << endl;
    cout << "Enter Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) / 1.8;
    cout << "Celsius: " << celsius << endl << endl;
}
void matrix_add(int X[3][3], int Y[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            result[i][j] = X[i][j] + Y[i][j];
}

void matrix_multiply(int X[3][3], int Y[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++)
                result[i][j] += X[i][k] * Y[k][j];
        }
}
void task_matrix() {
    cout << "3x3 Matrix Operations" << endl;

    int A[3][3], B[3][3], sum[3][3], product[3][3];

    cout << "Enter Matrix A:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> A[i][j];

    cout << "Enter Matrix B:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> B[i][j];

    matrix_add(A, B, sum);
    matrix_multiply(A, B, product);

    cout << "\nMatrix Addition:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    cout << "\nMatrix Multiplication:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << product[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}
void task_sphere() {
    cout << "Sphere Area & Volume Calculator" << endl;

    float radius, volume, area;
    cout << "Enter radius: ";
    cin >> radius;

    volume = (4.0 / 3) * 3.14159 * pow(radius, 3);
    area = 4 * 3.14159 * pow(radius, 2);

    cout << "Volume: " << volume << endl;
    cout << "Surface Area: " << area << endl << endl;
}

/* -------- Withdrawal Logic -------- */
void withdraw(long long *accNo, int *amt, int *bal, int taxRate, float charge, char type) {
    cout << "Enter Account Number: ";
    cin >> *accNo;

    cout << "Enter Withdrawal Amount: ";
    cin >> *amt;

    if (*amt <= *bal && *amt <= 100000) {
        *bal -= *amt;

        *bal -= (type == 'S' || type == 's') ? (*amt * charge) : 100;

        if (*amt > 50000)
            *bal -= (*bal * taxRate / 100.0);

        cout << "\nAccount No: " << *accNo << endl;
        cout << "Amount Withdrawn: " << *amt << endl;
        cout << "Remaining Balance: " << *bal << endl;
    } else {
        cout << "Transaction Failed!" << endl;
    }
}
void task_bank() {
    char accType;
    int balance = 200000, amount = 0;
    long long accNumber = 0;
    cout << "ATM Withdrawal Program" << endl;
    cout << "Enter Account Type (S/C): ";
    cin >> accType;
    if (accType == 'S' || accType == 's')
        withdraw(&accNumber, &amount, &balance, 5, 0.02, accType);
    else if (accType == 'C' || accType == 'c')
        withdraw(&accNumber, &amount, &balance, 5, 100, accType);
    else
        cout << "Invalid Account Type!" << endl;
    cout << endl;
}


