// Class template
#include <iostream>
using namespace std;

// Class template
template <class T>
class Student {
private:
    string name;
    T totalMarks;

public:
    Student(string n, T m) {
        name = n;
        totalMarks = m;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Type of Marks: " << typeid(T).name() << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    // Integer marks
    Student<int> s1("John Doe", 85);
    // Double marks
    Student<double> s2("Alice", 92.75);

    s1.getInfo();
    s2.getInfo();

    return 0;
}

