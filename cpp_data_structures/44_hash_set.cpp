// Hash Set using unordered_set (STL)
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> uset;

    // INSERT
    uset.insert(1);
    uset.insert(2);
    uset.insert(3);
    uset.insert(2); // duplicate (ignored)

    cout << "Initial Hash Set: ";
    for (int x : uset) cout << x << " ";
    cout << endl;

    // SIZE
    cout << "Size of Hash Set: " << uset.size() << endl;

    // COUNT (returns 1 if exists, 0 if not)
    cout << "Count of 2: " << uset.count(2) << endl;
    cout << "Count of 5: " << uset.count(5) << endl;

    // FIND (returns iterator)
    if (uset.find(3) != uset.end())
        cout << "Element 3 found using find()" << endl;
    else
        cout << "Element 3 not found" << endl;

    // ERASE
    uset.erase(2);  // removes element 2

    cout << "Hash Set after erasing 2: ";
    for (int x : uset) cout << x << " ";
    cout << endl;

    // Check again after erase
    cout << "Count of 2 after erase: " << uset.count(2) << endl;

    return 0;
}