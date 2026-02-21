// Red-Black Tree using STL set (as a demonstration)
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> rbTree; // std::set is typically implemented as a Red-Black Tree
    rbTree.insert(10);
    rbTree.insert(20);
    rbTree.insert(15);
    for (int x : rbTree) cout << x << " ";
    cout << endl;
    return 0;
}
// For full manual implementation, see advanced data structure textbooks or libraries.
