// Exercise 5: Days of the Month
// This program tells how many days are in a month using a switch statement.


#include <iostream>
using namespace std;

int main() {
    int month;

    // Ask the user for a month number
    cout << "Enter month number (1-12): ";
    cin >> month;

    // Switch statement handles all months
    switch(month) {
        // Months with 31 days
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days";
            break;

        // Months with 30 days
        case 4: case 6: case 9: case 11:
            cout << "30 days";
            break;

        // February
        case 2:
            cout << "28 or 29 days";
            break;

        // Anything else is invalid
        default:
            cout << "Invalid month!";
    }
    return 0;
}



