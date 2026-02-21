// Demonstrates array declaration and initialization for different data types
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Integer array declaration and initialization
    int intArr[5] = {1, 2, 3, 4, 5};
    // Float array declaration and initialization
    float floatArr[3] = {1.1f, 2.2f, 3.3f};
    // Char array declaration and initialization
    char charArr[4] = {'a', 'b', 'c', 'd'};
    // String array declaration and initialization
    string strArr[2] = {"hello", "world"};

    cout << "Integer Array: ";
    for(int i = 0; i < 5; i++) cout << intArr[i] << " ";
    cout << endl;

    cout << "Float Array: ";
    for(int i = 0; i < 3; i++) cout << floatArr[i] << " ";
    cout << endl;

    cout << "Char Array: ";
    for(int i = 0; i < 4; i++) cout << charArr[i] << " ";
    cout << endl;

    cout << "String Array: ";
    for(int i = 0; i < 2; i++) cout << strArr[i] << " ";
    cout << endl;

    return 0;
}
