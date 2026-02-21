// Pointers vs arrays: relationship and differences
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1, 2, 3, 4};
    int* p = arr;
    cout << "Array element arr[2]: " << arr[2] << endl;
    cout << "Pointer access *(p+2): " << *(p+2) << endl;
    cout << "Size of array: " << sizeof(arr) << endl;
    cout << "Size of pointer: " << sizeof(p) << endl;
    return 0;
}
