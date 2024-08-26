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
    string num1;
    string num2;
    int num1int;
    int num2int;
    cout << "Welcome to the TAMID Calculator!" << endl;

    // Main Block
    while(true) {
        cout <<  "Would you like to calculate somthing (y/n): ";
        cin >> answer;
        if(answer != "y" && answer != "n") {
            cout << "Enter valid input, (y/n)" << endl;
            continue;
        } else if(answer == "n") { // Stops if answer == n
            break;
        }
        cout << endl;
        cout << "Please enter the first number: " << endl;
        cin >> num1;
        if(!checkInt(num1)) {
            cout << "Please enter a numeric value" << endl;
            continue;
        } else {
            num1int = stoi(num1);
        };
        cout << "Please enter the second number : " << endl;
        cin >> num2;
        if(!checkInt(num2)) {
            cout << "Please enter a numeric value" << endl;
            continue;
        } else {
            num2int = stoi(num2);
        };
        cout << "Please enter your function: " << endl;
        cin >> function;
        if(checkFunc(function, functions) != true) { // makes sure function is a valid function
            cout << "Please choose a valid function: *, +, -, or /" << endl;
        }

        if(num2int == 0 && function == "/") {
            cout << "You cannot divide by 0!" << endl;
            continue;
        }
        cout << "Your result was: " << calculation(num1int, num2int, function) << endl;
    };



    return 0;
}
