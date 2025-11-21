#include <iostream>
#include <string>
using namespace std;

int main() {
    string answer;
    cout << "What is the capital of France? ";
    cin >> answer;

    if (answer == "Paris")
        cout << "Correct!";
    else
        cout << "Wrong!";
}
