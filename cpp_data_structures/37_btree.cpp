// B-Tree Node structure (basic, not full implementation)
#include <iostream>
#include <vector>
using namespace std;

class BTreeNode {
public:
    vector<int> keys;
    vector<BTreeNode*> children;
    bool leaf;
    BTreeNode(bool leaf) : leaf(leaf) {}
};

int main() {
    BTreeNode* root = new BTreeNode(true);
    root->keys.push_back(10);
    root->keys.push_back(20);
    cout << "B-Tree Node keys: ";
    for (int k : root->keys) cout << k << " ";
    cout << endl;
    return 0;
}
// Full B-Tree implementation is complex and can be found in textbooks.
