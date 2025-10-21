// Operator Overloading(Distance Addition):
#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;
public:
    Distance(int m=0, int cm=0) : meters(m), centimeters(cm) {}

    Distance operator+(Distance d) {
        Distance temp;
        temp.centimeters = centimeters + d.centimeters;
        temp.meters = meters + d.meters + temp.centimeters / 100;
        temp.centimeters %= 100;
        return temp;
    }

    void display() {
        cout << "Distance: " << meters << " m " << centimeters << " cm" << endl;
    }
};

int main() {
    Distance d1(2, 75), d2(3, 50);
    Distance d3 = d1 + d2;
    d3.display();
    return 0;
}
