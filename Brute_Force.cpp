#include <iostream>
using namespace std;

int main() {
    int password = 12345;
    int attempt;
    int tries = 5;

    while (tries > 0) {
        cout << "Enter password: ";
        cin >> attempt;

        if (attempt == password) {
            cout << "Welcome to the Secure Area";
            return 0;
        }

        tries--;
        cout << "Incorrect. Attempts left: " << tries << endl;
    }

    cout << "Too many attempts. Authorities alerted!";
}
