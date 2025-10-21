// Function Overloading(Billing System)
#include <iostream>
using namespace std;

double calculateBill(int units) { // Residential
    return units * 1.5;
}

double calculateBill(int units, double fixedCharge) { // Commercial
    return (units * 2.0) + fixedCharge;
}

double calculateBill(int units, double fixedCharge, double maintenance) { // Industrial
    return (units * 2.5) + fixedCharge + maintenance;
}

int main() {
    cout << "Residential Bill: " << calculateBill(100) << endl;
    cout << "Commercial Bill: " << calculateBill(150, 50) << endl;
    cout << "Industrial Bill: " << calculateBill(200, 100, 50) << endl;

    return 0;
}
