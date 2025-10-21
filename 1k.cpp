// Rectangle class with constructor
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    // Constructor to set dimensions
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float calculateArea() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << " units" << endl;
        cout << "Width: " << width << " units" << endl;
        cout << "Area: " << calculateArea() << " sq. units" << endl;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    rect.display();
    return 0;
}
