// Static function: Order Tracking
#include <iostream>
using namespace std;

class Order {
private:
    int orderID;
    static int totalOrders;
public:
    Order(int id) {
        orderID = id;
        totalOrders++;
    }

    static void showTotalOrders() {
        cout << "Total Orders: " << totalOrders << endl;
    }
};

int Order::totalOrders = 0;

int main() {
    Order o1(101);
    Order o2(102);
    Order o3(103);

    Order::showTotalOrders(); // static function called using class name

    return 0;
}
