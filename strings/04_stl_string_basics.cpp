// C++ STL string basics: declaration, initialization, printing
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2("World");
    string s3(s1);
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3 (copy of s1): " << s3 << endl;
    return 0;
}
