// Friend Function(Funds Transfer:)
#include <iostream>
using namespace std;

class CurrentAccount; // Forward declaration

class SavingsAccount {
private:
    string accountNumber;
    double balance;
public:
    SavingsAccount(string acc, double bal) {
        accountNumber = acc;
        balance = bal;
    }
    friend void transferFunds(SavingsAccount &s, CurrentAccount &c, double amount);
};

class CurrentAccount {
private:
    string accountNumber;
    double balance;
public:
    CurrentAccount(string acc, double bal) {
        accountNumber = acc;
        balance = bal;
    }
    friend void transferFunds(SavingsAccount &s, CurrentAccount &c, double amount);
};

void transferFunds(SavingsAccount &s, CurrentAccount &c, double amount) {
    if (s.balance >= amount) {
        s.balance -= amount;
        c.balance += amount;
        cout << "Transfer successful!\n";
    } else {
        cout << "Insufficient funds in Savings Account.\n";
    }
    cout << "Savings Balance: " << s.balance << "\nCurrent Balance: " << c.balance << endl;
}

int main() {
    SavingsAccount s("S101", 5000);
    CurrentAccount c("C101", 2000);

    transferFunds(s, c, 1500);
    return 0;
}
