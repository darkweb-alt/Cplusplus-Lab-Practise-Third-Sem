// ATM Withdrawal Simulation
#include <iostream>
using namespace std;

int main() {
    int balance = 10000;
    int withdraw;

    cout << "Enter the withdrawal amount: ";
    cin >> withdraw;

    if (withdraw <= 0) {
        cout << "Invalid amount entered!" << endl;
    }
    else if (withdraw % 100 != 0) {
        cout << "Amount must be a multiple of 100!" << endl;
    }
    else if (withdraw < 100) {
        cout << "Minimum withdrawal is ₹100." << endl;
    }
    else if (withdraw > balance) {
        cout << "Insufficient balance!" << endl;
    }
    else {
        balance -= withdraw;
        cout << "Transaction successful!" << endl;
        cout << "Remaining balance: ₹" << balance << endl;
    }

    return 0;
}
