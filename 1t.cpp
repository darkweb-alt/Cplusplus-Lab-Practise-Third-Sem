// Method overloading(virtual function:)
#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() {
        cout << "Calculating generic salary..." << endl;
    }
};

class FullTimeEmployee : public Employee {
public:
    void calculateSalary() override {
        cout << "Full-time Employee Salary: ₹50000" << endl;
    }
};

class PartTimeEmployee : public Employee {
public:
    void calculateSalary() override {
        cout << "Part-time Employee Salary: ₹20000" << endl;
    }
};

int main() {
    Employee *emp1 = new FullTimeEmployee();
    Employee *emp2 = new PartTimeEmployee();

    emp1->calculateSalary();
    emp2->calculateSalary();

    delete emp1;
    delete emp2;
    return 0;
}
