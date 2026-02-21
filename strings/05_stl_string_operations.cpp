// STL string operations: length, append, insert, erase, replace, find, substr
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    cout << "Length: " << s.length() << endl;
    s.append(" World");
    cout << "After append: " << s << endl;
    s.insert(5, ",");
    cout << "After insert: " << s << endl;
    s.erase(5, 1);
    cout << "After erase: " << s << endl;
    s.replace(6, 5, "C++");
    cout << "After replace: " << s << endl;
    cout << "Find 'C++': " << s.find("C++") << endl;
    cout << "Substring (0,5): " << s.substr(0,5) << endl;
    return 0;
}
