// Hash Set using unordered_set (STL)
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> uset;
    uset.insert(1); uset.insert(2); uset.insert(3);
    cout << "Hash Set: ";
    for (int x : uset) cout << x << " ";
    cout << endl;
    cout << "Find 2: " << (uset.count(2) ? "Yes" : "No") << endl;
    return 0;
}
