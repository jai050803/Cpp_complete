// Treap (Randomized Binary Search Tree)
#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int key, priority;
    Node* left;
    Node* right;
    Node(int k) : key(k), priority(rand()), left(nullptr), right(nullptr) {}
};

Node* rightRotate(Node* y) {
    Node* x = y->left;
    y->left = x->right;
    x->right = y;
    return x;
}
Node* leftRotate(Node* x) {
    Node* y = x->right;
    x->right = y->left;
    y->left = x;
    return y;
}
Node* insert(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->key) {
        root->left = insert(root->left, key);
        if (root->left->priority > root->priority)
            root = rightRotate(root);
    } else {
        root->right = insert(root->right, key);
        if (root->right->priority > root->priority)
            root = leftRotate(root);
    }
    return root;
}
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}
int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    inorder(root);
    cout << endl;
    return 0;
}
