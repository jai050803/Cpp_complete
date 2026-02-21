// Demonstrates printing array values and fetching input
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 values for array: ";
    for(int i = 0; i < 5; i++) cin >> arr[i];
    cout << "You entered: ";
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
