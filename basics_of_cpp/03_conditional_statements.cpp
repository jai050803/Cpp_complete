// Program 3: Conditional Statements
#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if(x > 0) cout << "Positive\n";
    else if(x < 0) cout << "Negative\n";
    else cout << "Zero\n";
    return 0;
}