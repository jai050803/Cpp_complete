// Passing and returning strings from functions
#include <iostream>
#include <string>
using namespace std;

void printString(const string& s) {
    cout << "String: " << s << endl;
}

string getGreeting() {
    return "Hello from function!";
}

int main() {
    string s = "Test string";
    printString(s);
    string greet = getGreeting();
    cout << greet << endl;
    return 0;
}
