#include <iostream>
using namespace std;

string checkEven(int n) {
    if (n % 2 == 0)
        return "The provided number is even";
    else
        return "The provided number is odd";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << checkEven(num);
}
