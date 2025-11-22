// Exercise 4: Primitive Quiz
// This program asks a simple geography question

#include <iostream>   
#include <string>     
using namespace std;

int main() {
    string answer;    // Variable to store the user's input

    // Ask the user a question
    cout << "What is the capital of France? ";

    // Take the user's answer as input
    cin >> answer;

    // Check if the answer is correct
    if (answer == "Paris")
        cout << "Correct!";   // Output displayed when the answer is correct
    else
        cout << "Wrong!";     // Output displayed when the answer is incorrect
return() 0;
}



