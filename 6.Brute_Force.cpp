

#include <iostream>
using namespace std;

int main() {
    int password = 12345; // The correct password
    int attempt;
    int tries = 5;        // User has 5 attempts

    // Loop until no attempts remain
    while (tries > 0) {

        cout << "Enter password: ";
        cin >> attempt;

        // Check if correct
        if (attempt == password) {
            cout << "Welcome to the Secure Area";
            return 0; // Exit program
        }

        // If wrong, reduce attempts
        tries--;
        cout << "Incorrect. Attempts left: " << tries << endl;
    }

    // If all attempts are used
    cout << "Too many attempts. Authorities alerted!";
}

