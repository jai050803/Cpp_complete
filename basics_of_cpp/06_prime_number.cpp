// Program 6: Prime Number
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = true;
    if(n <= 1) isPrime = false;
    for(int i=2; i*i<=n; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }
    cout << (isPrime ? "Prime\n" : "Not Prime\n");
    return 0;
}