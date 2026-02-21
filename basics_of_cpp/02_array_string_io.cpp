// Program 2: Input and Output for Array and Strings
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << "Array: ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << "\n";
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "String: " << s << "\n";
    return 0;
}