#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    BankAccount(int b) {
        balance = b;
    }
    void deposit(int b) {
        if (b > 0)
            balance += b;
    }
    void withdrawal(int b) {
        if (b > 0 && balance >= b)
            balance -= b;
        else
            cout << "Your balance is insufficient!" << endl;
    }
    void getBalance() {
        cout << balance << endl;
    }
};

int main() {
    BankAccount acc(10000);

    acc.deposit(20000);
    acc.getBalance();

    acc.withdrawal(40000);  
    acc.getBalance();

    return 0;
}

