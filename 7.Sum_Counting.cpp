//Exercise 7 : Sum Counting
//Demonstrates several types of for loops counting in different ranges and increments.

#include <iostream>
using namespace std;

int main() {

    // Count 0 → 50
    for (int i = 0; i <= 50; i++)
        cout << i << " ";
    cout << endl;

    // Count 50 → 0
    for (int i = 50; i >= 0; i--)
        cout << i << " ";
    cout << endl;

    // Count 30 → 50
    for (int i = 30; i <= 50; i++)
        cout << i << " ";
    cout << endl;

    // Count 50 → 10 (step -2)
    for (int i = 50; i >= 10; i -= 2)
        cout << i << " ";
    cout << endl;

    // Count 100 → 200 (step +5)
    for (int i = 100; i <= 200; i += 5)
        cout << i << " ";
    return 0;
}


