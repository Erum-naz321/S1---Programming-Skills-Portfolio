#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string search;

    cout << "Enter a name to search: ";
    cin >> search;

    for (int i = 0; i < 6; i++) {
        if (names[i] == search) {
            cout << search << " found in the list.";
            return 0;
        }
    }

    cout << "Not found.";
}
