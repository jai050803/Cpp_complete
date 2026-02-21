// Demonstrates for-each loop for array (C++11 and above)
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    cout << "Array values using for-each loop: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}
