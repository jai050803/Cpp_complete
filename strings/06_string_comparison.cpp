// Comparing STL strings and C-style strings
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string stlStr = "Hello";
    char cStr[10] = "Hello";
    if(stlStr == cStr) cout << "STL string and C-style string are equal." << endl;
    else cout << "They are not equal." << endl;
    // C-style comparison
    if(strcmp(stlStr.c_str(), cStr) == 0) cout << "(strcmp) They are equal." << endl;
    else cout << "(strcmp) They are not equal." << endl;
    return 0;
}
