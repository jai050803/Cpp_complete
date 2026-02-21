// Pointer comparisons: equality, less than, greater than
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {1, 2, 3};
    int* p1 = &arr[0];
    int* p2 = &arr[2];
    cout << "p1 == p2: " << (p1 == p2 ? "true" : "false") << endl;
    cout << "p1 < p2: " << (p1 < p2 ? "true" : "false") << endl;
    cout << "p1 > p2: " << (p1 > p2 ? "true" : "false") << endl;
    return 0;
}
