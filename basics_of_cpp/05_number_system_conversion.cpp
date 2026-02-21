// Program 5: Number System Conversion (Decimal to Binary)
#include <iostream>
#include <bitset>
#include <string>
using namespace std;

string func(int n){
    if(n == 0) return "0";
    string binary = "";

    while(n > 0){
        binary = char((n % 2) + '0') + binary;
        n = n/2;
    }
    return binary;
}

int main() {
    int num;
    cout << "Enter decimal number: ";
    cin >> num;
    cout << "Binary: ";
    for(int i=31; i>=0; i--) cout << ((num>>i)&1);
    cout << "\n";
    
    //using bitset method (cleaner and modern way)
    cout << "binary : " << bitset<32>(num) << endl;

    //using the function created  - without 32 bits leading zeroes
    cout << func(num) << endl;
    return 0;
}

