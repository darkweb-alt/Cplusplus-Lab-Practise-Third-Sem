// Transport class with copy constructor:
#include <iostream>
using namespace std;

class Transport {
private:
    int wheels;

public:
    // Parameterized constructor
    Transport(int w) {
        wheels = w;
    }

    // Copy constructor
    Transport(const Transport &t) {
        wheels = t.wheels;
    }

    void display() {
        cout << "Number of wheels: " << wheels << endl;
    }
};

int main() {
    Transport vehicle1(4);
    Transport vehicle2 = vehicle1; // copy constructor called
    cout << "Original Vehicle: ";
    vehicle1.display();
    cout << "Copied Vehicle: ";
    vehicle2.display();
    return 0;
}
