//
// Created by gabri on 8/26/2024.
//
#include <iostream>
#include <vector>
#include "functions.h"
using namespace std;
int main() {
    // Variable Definitions
    string answer;
    string function;
    vector<string> functions = {"*", "/", "+", "-"};
    int num1;
    int num2;
    cout << "Welcome to the TAMID Calculator!" << endl;

    // Main Block
    while(true) {
        cout <<  "Would you like to calculate somthing (y/n): ";
        cin >> answer;
        cout << endl;
        if(answer == "n") { // Stops if answer == n
            break;
        }
        cout << "Please enter the first number: " << endl;
        cin >> num1;
        cout << "Please enter the second number : " << endl;
        cin >> num2;
        cout << "Please enter your function: " << endl;
        cin >> function;
        if(checkFunc(function, functions) != true) { // makes sure function is a valid function
            cout << "Please choose a valid function: *, +, -, or /" << endl;
        }
        else if(num2 != 0 && function != "/") { // Checks for division by 0
            cout << "Your result was: " << calculation(num1, num2, function) << "!" << endl;
        } else {
            cout << "You cannot divide by 0!" << endl;
        }
    };



    return 0;
}
