// Bus Fare based on distance slab
#include <iostream>
using namespace std;

int main() {
    int distance, fare;

    cout << "Enter the distance travelled (in km): ";
    cin >> distance;

    if (distance <= 5)
        fare = 10;
    else if (distance <= 10)
        fare = 15;
    else if (distance <= 20)
        fare = 20;
    else
        fare = 25;

    cout << "Total fare = ₹" << fare << endl;
    return 0;
}
