// 11_type_casting.cpp
// Demonstrates type casting in C++
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = 3.14;

    // Implicit type casting
    double result1 = a + b; // a is implicitly cast to double
    cout << "Implicit casting (int + double): " << result1 << endl;

    // Explicit type casting (C-style)
    int result2 = (int)b + a; // b is explicitly cast to int
    cout << "Explicit casting (C-style): " << result2 << endl;

    // Explicit type casting (C++ style)
    int result3 = static_cast<int>(b) + a;
    cout << "Explicit casting (C++ style): " << result3 << endl;

    // Char to int
    char ch = 'A';
    int ascii = static_cast<int>(ch);
    cout << "Char 'A' to int: " << ascii << endl;

    // Int to char
    int num = 66;
    char ch2 = static_cast<char>(num);
    cout << "Int 66 to char: " << ch2 << endl;

    return 0;
}
