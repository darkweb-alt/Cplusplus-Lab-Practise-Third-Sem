// Eb Calculation
#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 1.5;
    }
    else if (units <= 200) {
        bill = (100 * 1.5) + ((units - 100) * 2.0);
    }
    else {
        bill = (100 * 1.5) + (100 * 2.0) + ((units - 200) * 3.0);
    }

    cout << "Total Electricity Bill = ₹" << bill << endl;
    return 0;
}
