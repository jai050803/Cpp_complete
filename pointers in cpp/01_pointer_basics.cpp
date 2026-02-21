// What are pointers: declaration, initialization, and basic usage
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p = &a;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer p holds address: " << p << endl;
    cout << "Value pointed by p: " << *p << endl;

    int arr[10] = {1,2,3,4,5,6,7,8,9,1};
    double *q;
    p = arr;

    cout << p << endl;
    cout << *p << endl;
    cout << *(arr + 6) << endl;
    cout << arr[6] << endl;
    cout << arr << endl;
    cout << *arr << endl; //for array, pointer stores the first eleemnt for array name
    return 0;
}
