// Student Grade system using class and objects.
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    void setDetails(string n, int r, float m) {
        name = n;
        rollNumber = r;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student1;
    student1.setDetails("John Doe", 101, 85.5);
    student1.display();
    return 0;
}
