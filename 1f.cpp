// Tom’s Grade Average
#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    int math, science, english;
    double average;

    cout << "Enter Math grade: ";
    cin >> math;
    cout << "Enter Science grade: ";
    cin >> science;
    cout << "Enter English grade: ";
    cin >> english;

    average = (math + science + english) / 3.0;

    cout << fixed << setprecision(2);
    cout << "Average grade = " << average << endl;

    return 0;
}
