// Function Template
#include <iostream>
using namespace std;

// Function template for addition
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Function template for subtraction
template <typename T>
T subtract(T a, T b) {
    return a - b;
}

// Function template for multiplication
template <typename T>
T multiply(T a, T b) {
    return a * b;
}

// Function template for division
template <typename T>
T divide(T a, T b) {
    return a / b;
}

int main() {
    cout << "Addition (int): " << add(5, 3) << endl;
    cout << "Subtraction (double): " << subtract(5.5, 2.2) << endl;
    cout << "Multiplication (float): " << multiply(2.5f, 3.5f) << endl;
    cout << "Division (int): " << divide(10, 2) << endl;

    return 0;
}
