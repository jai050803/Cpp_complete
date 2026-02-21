// Pointer to pointer (double pointer)
#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* p = &x;
    int** pp = &p;
    cout << "Value of x: " << x << endl;
    cout << "Value via pointer: " << *p << endl;
    cout << "Value via double pointer: " << **pp << endl;
    return 0;
}
