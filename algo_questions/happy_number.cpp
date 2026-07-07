#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//using the set
bool happyNumber(int n){
    vector<int> seen;
    while(find(seen.begin(), seen.end(), n) == seen.end()){
        cout << seen.end() << " " << n << endl;
        seen.push_back(n);
        int sum = 0;
        while(n > 0){
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }
    if(n == 1) return true;
    return false;
}
//optimized approach for happy number : using the 1 and 4 condition
bool happyNumber(int n){
    while(n != 1 && n != 4){
        int sum = 0;
        while(n > 0){
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }
    if(n == 1) return true;
    return false;
}

//using slow and fast pointer - floyd's cycle detection algorithm

int slowPointer(int n){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int fastPointer(int n){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool happyNumber(int n){
    int slow = n;
    int fast = n;
    do{
        slow = slowPointer(slow);
        fast = fastPointer(fastPointer(fast));
    }while(slow != fast);
    if(slow == 1) return true;
    return false;
}
int main(){
    int n = 19;
    cout << happyNumber(n) << endl;
    return 0;   
}