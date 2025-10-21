// Talent tracker (Multiple Inheritance)
#include <iostream>
#include <string>
using namespace std;

// Base class 1: Student
class Student {
protected:
    int rollNumber;
    float academicScore;
public:
    void setStudentData() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter academic score: ";
        cin >> academicScore;
    }
};

// Base class 2: Athlete
class Athlete {
protected:
    string sportName;
    string level;
public:
    void setAthleteData() {
        cout << "Enter sport name: ";
        cin >> sportName;
        cout << "Enter level (district/state/national): ";
        cin >> level;
    }
};

// Derived class: SportsStudent
class SportsStudent : public Student, public Athlete {
private:
    int performanceRank;
public:
    void calculateRank() {
        // Simple logic: higher score & level = better rank
        performanceRank = 100 - academicScore; // Example
    }

    void display() {
        cout << "\n--- SportsStudent Profile ---\n";
        cout << "Roll Number: " << rollNumber << "\nAcademic Score: " << academicScore
             << "\nSport: " << sportName << "\nLevel: " << level
             << "\nPerformance Rank: " << performanceRank << endl;
    }
};

int main() {
    SportsStudent s;
    s.setStudentData();
    s.setAthleteData();
    s.calculateRank();
    s.display();
    return 0;
}
