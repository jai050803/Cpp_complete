// Pointer arithmetic: increment, decrement, addition, subtraction
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* p = arr;
    cout << "Initial pointer: " << p << " Value: " << *p << endl;
    p++;
    cout << "After increment: " << p << " Value: " << *p << endl;
    p--;
    cout << "After decrement: " << p << " Value: " << *p << endl;
    p += 2;
    cout << "After addition: " << p << " Value: " << *p << endl;
    p -= 1;
    cout << "After subtraction: " << p << " Value: " << *p << endl;
    return 0;
}
