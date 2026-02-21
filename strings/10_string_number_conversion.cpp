// String to number and number to string conversions
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string numStr = "1234";
    int num = stoi(numStr);
    cout << "String to int: " << num << endl;
    float f = stof("3.14");
    cout << "String to float: " << f << endl;
    int n = 5678;
    string str = to_string(n);
    cout << "Int to string: " << str << endl;
    return 0;
}
