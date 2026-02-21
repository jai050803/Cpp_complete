// Passing array to function and printing
#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[4] = {7, 14, 21, 28};
    cout << "Array passed to function: ";
    printArray(arr, 4);
    return 0;
}
