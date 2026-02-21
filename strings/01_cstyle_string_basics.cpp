// C-style string declaration, initialization, and printing
#include <iostream>
using namespace std;

int main() {
    char str1[20] = "Hello";
    char str2[] = {'W', 'o', 'r', 'l', 'd', '\0'};
    cout << "C-style string 1: " << str1 << endl;
    cout << "C-style string 2: " << str2 << endl;
    return 0;
}
