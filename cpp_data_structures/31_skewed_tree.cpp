// Skewed Binary Tree (right skewed)
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

void printRightSkewed(Node* root) {
    while (root) {
        cout << root->data << " ";
        root = root->right;
    }
    cout << endl;
}

int main() {
    Node* root = new Node(1);
    root->right = new Node(2);
    root->right->right = new Node(3);
    root->right->right->right = new Node(4);
    printRightSkewed(root);
    return 0;
}
