// Pointer increment, decrement, and dereferencing in loops
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = arr;
    cout << "Array values using pointer increment: ";
    for(int i = 0; i < 5; i++) {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    // Decrement pointer
    p = arr + 4;
    cout << "Array values using pointer decrement: ";
    for(int i = 0; i < 5; i++) {
        cout << *p << " ";
        p--;
    }
    cout << endl;
    return 0;
}
