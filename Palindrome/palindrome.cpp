//
// Created by gabri on 8/26/2024.
//
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string& input) {
    return input == string(input.rbegin(), input.rend());
}

int main() {
    string input;
    cout << "Please enter a string: ";
    cin >> input;
    for(auto &i: input) {
        i = tolower(i); // Makes sure capitals doesn't effect
    }
    if(isPalindrome(input)) {
        cout << input << " is a palindrome!" << endl;
        return 0;
    } else {
        cout << input << " is not a palindrome" << endl;
    }
}
