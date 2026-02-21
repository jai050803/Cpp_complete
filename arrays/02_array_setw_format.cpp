// Demonstrates array printing with setw formatting
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Formatted Array Output (using setw):\n";
    for(int i = 0; i < 5; i++) {
        arr[i] += 100;
        cout << "element"<< setw(5) << arr[i] << endl;
    }
    cout << endl;
    return 0;
}
