// Input and output with C-style strings
#include <iostream>
using namespace std;

int main() {
    char name[50];
    cout << "Enter your name: ";
    cin.getline(name, 50);
    cout << "Hello, " << name << "!" << endl;
    return 0;
}
