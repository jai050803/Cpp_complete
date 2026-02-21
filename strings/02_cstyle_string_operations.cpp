// C-style string operations: length, copy, concatenate, compare
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    cout << "Length of str1: " << strlen(str1) << endl;
    strcpy(str1, str2);
    cout << "After strcpy, str1: " << str1 << endl;
    strcat(str1, "!");
    cout << "After strcat, str1: " << str1 << endl;
    cout << "strcmp(str1, str2): " << strcmp(str1, str2) << endl;
    return 0;
}
