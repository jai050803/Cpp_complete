// Demonstrates substring extraction and manipulation in C++ strings
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello, World!";
    // Extract substring from index 7 to end
    string sub1 = s.substr(7);
    cout << "Substring from index 7: " << sub1 << endl;
    // Extract substring from index 0 of length 5
    string sub2 = s.substr(0, 5);
    cout << "Substring (0,5): " << sub2 << endl;
    // Find and extract word 'World'
    size_t pos = s.find("World");
    if(pos != string::npos) {
        string sub3 = s.substr(pos, 5);
        cout << "Found and extracted: " << sub3 << endl;
    }
    // Replace substring
    s.replace(7, 5, "C++");
    cout << "After replace: " << s << endl;
    return 0;
}
