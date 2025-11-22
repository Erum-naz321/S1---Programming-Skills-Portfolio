//Exercise 8: Simple Search
//Searches a string array for a given name, demonstrating arrays and string comparison
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Array of names
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};

    // Name to search
    string search = "Sam";

    // Loop through array
    for (int i = 0; i < 6; i++) {
        if (names[i] == search) {  // Compare each name
            cout << search << " found in the list.";
            return 0;
        }
    }

    cout << "Not found.";
    return 0;
}


