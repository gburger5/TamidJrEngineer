cmake_minimum_required(VERSION 3.10)
project(TAMID_Calculator)

# Add the calculator executable
add_executable(calculator Calculator/calculator.cpp
        calculator/functions.cpp)

# Add the palindrome executable
add_executable(palindrome Palindrome/palindrome.cpp)
