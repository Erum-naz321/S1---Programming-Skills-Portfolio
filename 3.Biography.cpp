#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, hometown;
    int age;

    // Use getline so full name works (first + last name)
    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Enter your hometown: ";
    getline(cin, hometown);

    cout << "Enter your age: ";
    cin >> age;

    // Check if the user typed something invalid (letter instead of a number)
    if (cin.fail()) {
        cout << "Invalid age entered!";
        return 0;
    }

    // Output everything at once
    cout << name << "\n" << hometown << "\n" << age;
}
