//
// Created by gabri on 8/26/2024.
//
#include <iostream>
#include <vector>
using namespace std;

// Simple calculation functions
int multiply(int num1, int num2) {
    return num1 * num2;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

double divide(double num1, double num2) {
    return static_cast<double>(num1) / static_cast<double>(num2);
}

double calculation(int num1, int num2, string choice) {
    if (choice == "+") {
        return add(num1, num2);
    } else if(choice == "-") {
        return sub(num1, num2);
    } else if(choice == "*") {
        return multiply(num1, num2);
    } else if (choice == "/") {
        return divide(num1, num2);
    }
}

bool checkFunc(string function, vector<string> functions) {
    for(auto i: functions) {
        if(function != i) {
            continue;
        } else if (function == i) {
            return true;
        }
    }
    return false;
}

bool checkInt(const string& str) {
    try {
        int num = stoi(str);
        return true;
    } catch (invalid_argument&) {
        return false;
    }
}