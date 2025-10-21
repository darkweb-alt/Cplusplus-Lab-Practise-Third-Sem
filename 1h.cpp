// Login Validation System with attempts
#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    string correctUser = "admin";
    string correctPass = "1234";
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == correctUser && password == correctPass) {
            cout << "Login successful! Welcome " << username << "!" << endl;
            return 0;
        } else {
            attempts--;
            cout << "Incorrect credentials. Attempts left: " << attempts << endl;
        }
    }

    cout << "Account locked due to too many failed attempts." << endl;
    return 0;
}
