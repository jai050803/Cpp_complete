// Demonstrates string concatenation in C++ (C-style and STL)
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    // C-style string concatenation
    char cstr1[20] = "Hello";
    char cstr2[] = " World";
    strcat(cstr1, cstr2);
    cout << "C-style concatenation: " << cstr1 << endl;

    // STL string concatenation
    string s1 = "Hello";
    string s2 = " World";
    string s3 = s1 + s2;
    cout << "STL string concatenation: " << s3 << endl;

    // Using append method
    s1.append(" C++");
    cout << "Using append: " << s1 << endl;

    return 0;
}
