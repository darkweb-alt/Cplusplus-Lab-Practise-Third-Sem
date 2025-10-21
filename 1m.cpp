// Manager record generation using inheritance
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void getPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Employee : public Person {
protected:
    int empID;
    float salary;
public:
    void getEmployeeData() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter salary: ";
        cin >> salary;
    }
};

class Manager : public Employee {
private:
    string department;
public:
    void getManagerData() {
        cout << "Enter department: ";
        cin >> department;
    }
    void display() {
        cout << "\n--- Manager Details ---\n";
        cout << "Name: " << name << "\nAge: " << age << "\nEmployee ID: " << empID
             << "\nSalary: " << salary << "\nDepartment: " << department << endl;
    }
};

int main() {
    Manager m;
    m.getPersonData();
    m.getEmployeeData();
    m.getManagerData();
    m.display();
    return 0;
}

