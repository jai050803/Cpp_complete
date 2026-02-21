// Trie (Prefix Tree) implementation
#include <iostream>
#include <string>
using namespace std;

struct TrieNode {
    TrieNode* children[26];
    bool isEnd;
    TrieNode() : isEnd(false) { for(int i=0;i<26;i++) children[i]=nullptr; }
};

void insert(TrieNode* root, const string& key) {
    TrieNode* node = root;
    for(char c : key) {
        int idx = c - 'a';
        if(!node->children[idx]) node->children[idx] = new TrieNode();
        node = node->children[idx];
    }
    node->isEnd = true;
}
bool search(TrieNode* root, const string& key) {
    TrieNode* node = root;
    for(char c : key) {
        int idx = c - 'a';
        if(!node->children[idx]) return false;
        node = node->children[idx];
    }
    return node->isEnd;
}
int main() {
    TrieNode* root = new TrieNode();
    insert(root, "hello");
    insert(root, "world");
    cout << "Search 'hello': " << (search(root, "hello") ? "Found" : "Not Found") << endl;
    cout << "Search 'cpp': " << (search(root, "cpp") ? "Found" : "Not Found") << endl;
    return 0;
}
