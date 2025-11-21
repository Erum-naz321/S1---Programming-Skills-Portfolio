#include <iostream>
using namespace std;

// Function that checks if a number is even or odd
string checkEven(int n) {

    // If number divisible by 2
    if (n % 2 == 0)
        return "The provided number is even";
    else
        return "The provided number is odd";
}

int main() {
    int num;

    // Ask the user for a number
    cout << "Enter a number: ";
    cin >> num;

    // Print the returned message
    cout << checkEven(num);
}
