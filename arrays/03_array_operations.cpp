// Demonstrates common array operations: size, changing values, sum, search
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print number of values
    cout << "Number of values: " << n << endl;

    // Change value at index 2
    arr[2] = 100;
    cout << "Changed value at index 2: " << arr[2] << endl;

    // Sum of array
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    cout << "Sum of array: " << sum << endl;

    // Search for a value
    int search = 20;
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == search) {
            found = true;
            break;
        }
    }
    cout << "Value " << search << (found ? " found" : " not found") << endl;

    return 0;
}
