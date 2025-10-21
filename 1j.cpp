// Bank Account Management System
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    void setAccountDetails(string accNo, string name, double bal) {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "₹" << amount << " deposited successfully.\n";
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "₹" << amount << " withdrawn successfully.\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    void checkBalance() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount myAccount;
    myAccount.setAccountDetails("1234567890", "John Doe", 1000);
    myAccount.deposit(500);
    myAccount.withdraw(300);
    myAccount.checkBalance();
    return 0;
}
