
#ifndef TAMIDJRENGINEER_FUNCTIONS_H
#define TAMIDJRENGINEER_FUNCTIONS_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int multiply(int num1, int num2);
int add(int num1, int num2);
int sub(int num1, int num2);
double divide(int num1, int num2);
double calculation(int num1, int num2, std::string choice);
bool checkFunc(string function, vector<string> functions);
bool checkInt(const string& str);
#endif //TAMIDJRENGINEER_FUNCTIONS_H
