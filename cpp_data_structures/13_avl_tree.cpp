// AVL Tree (Self-balancing BST) - basic insertion and rotation
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data, height;
    Node* left;
    Node* right;
    Node(int x) : data(x), height(1), left(nullptr), right(nullptr) {}
};

int getHeight(Node* n) { return n ? n->height : 0; }
int getBalance(Node* n) { return n ? getHeight(n->left) - getHeight(n->right) : 0; }
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    return x;
}
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;
    y->left = x;
    x->right = T2;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    return y;
}
Node* insert(Node* node, int key) {
    if(!node) return new Node(key);
    if(key < node->data) node->left = insert(node->left, key);
    else if(key > node->data) node->right = insert(node->right, key);
    else return node;
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int balance = getBalance(node);
    if(balance > 1 && key < node->left->data) return rightRotate(node);
    if(balance < -1 && key > node->right->data) return leftRotate(node);
    if(balance > 1 && key > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    if(balance < -1 && key < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}
void inorder(Node* root) {
    if(!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main() {
    Node* root = nullptr;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    inorder(root);
    cout << endl;
    return 0;
}
