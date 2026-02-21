// Program 5: Number System Conversion (Decimal to Binary)
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter decimal number: ";
    cin >> num;
    cout << "Binary: ";
    for(int i=31; i>=0; i--) cout << ((num>>i)&1);
    cout << "\n";
    return 0;
}