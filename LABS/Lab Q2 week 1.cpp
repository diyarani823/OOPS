#include <iostream>
using namespace std;
class BankAccount {
private:
    float balance;
    int transactions;
public:
    BankAccount() {
        balance = 0;
        transactions = 0;
    }
    void deposit(float amt) {
        balance=balance+amt;
        transactions++;
    }
    void withdraw(float amt) {
        if (amt <= balance) {
            balance= balance-amt;
            transactions++;
        } else {
            cout << "Insufficient balance\n";
        }
    }
    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
    void showTransactions() {
        cout << "Transactions: " << transactions << endl;
    }
    void showInterest() {
        cout << "Interest: " << balance * 0.05 << endl;
    }
};
int main() {
    BankAccount acc;
    int choice;
    float amount;
    do {
        cout << "\n1. Display balance\n";
        cout << "2. Display transactions\n";
        cout << "3. Display interest\n";
        cout << "4. Deposit\n";
        cout << "5. Withdraw\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
        case 1: acc.showBalance(); break;
        case 2: acc.showTransactions(); break;
        case 3: acc.showInterest(); break;
        case 4:
            cout << "Enter amount: ";
            cin >> amount;
            acc.deposit(amount);
            break;
        case 5:
            cout << "Enter amount: ";
            cin >> amount;
            acc.withdraw(amount);
            break;
        case 6:
            cout << "Exit\n";
        }
    } while (choice != 6);

    return 0;
}

