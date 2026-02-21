// Set and Multiset usage
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(3); s.insert(1); s.insert(2); s.insert(2);
    cout << "Set: ";
    for(int x : s) cout << x << " ";
    cout << endl;
    multiset<int> ms;
    ms.insert(3); ms.insert(1); ms.insert(2); ms.insert(2);
    cout << "Multiset: ";
    for(int x : ms) cout << x << " ";
    cout << endl;
    return 0;
}
