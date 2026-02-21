// Iterating over strings (C-style and STL)
#include <iostream>
#include <string>
using namespace std;

int main() {
    char cstr[] = "Hello";
    cout << "C-style string chars: ";
    for(int i = 0; cstr[i] != '\0'; i++) cout << cstr[i] << ' ';
    cout << endl;

    string s = "World";
    cout << "STL string chars: ";
    for(char ch : s) cout << ch << ' ';
    cout << endl;
    return 0;
}
