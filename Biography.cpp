#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, hometown;
    int age;

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Enter your hometown: ";
    getline(cin, hometown);

    cout << "Enter your age: ";
    cin >> age;

    // Invalid age fix
    if (cin.fail()) {
        cout << "Invalid age entered!";
        return 0;
    }

    cout << name << "\n" << hometown << "\n" << age;
}
