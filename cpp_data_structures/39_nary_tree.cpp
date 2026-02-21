// N-ary Tree implementation
#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    vector<Node*> children;
    Node(int x) : data(x) {}
};

void printNary(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    for (Node* child : root->children) printNary(child);
}

int main() {
    Node* root = new Node(1);
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(3));
    root->children[0]->children.push_back(new Node(4));
    printNary(root);
    cout << endl;
    return 0;
}
