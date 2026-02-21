// Returning array from function (using static array)
#include <iostream>
using namespace std;

int* createArray(int n) {
    static int arr[100]; // static so it persists after function returns
    for(int i = 0; i < n; i++) arr[i] = i * 10;
    return arr;
}

int main() {
    int* arr = createArray(5);
    cout << "Returned array from function: ";
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
