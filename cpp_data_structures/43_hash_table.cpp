// Hash Table implementation (simple open addressing)
#include <iostream>
#include <vector>
using namespace std;

class HashTable {
    vector<int> table;
    int size;
public:
    HashTable(int sz) : size(sz) { table.assign(size, -1); }
    int hash(int key) { return key % size; }
    void insert(int key) {
        int idx = hash(key);
        while (table[idx] != -1) idx = (idx + 1) % size;
        table[idx] = key;
    }
    bool search(int key) {
        int idx = hash(key);
        int start = idx;
        while (table[idx] != -1) {
            if (table[idx] == key) return true;
            idx = (idx + 1) % size;
            if (idx == start) break;
        }
        return false;
    }
};

int main() {
    HashTable ht(7);
    ht.insert(10); ht.insert(20); ht.insert(15);
    cout << "Search 20: " << (ht.search(20) ? "Found" : "Not Found") << endl;
    cout << "Search 99: " << (ht.search(99) ? "Found" : "Not Found") << endl;
    return 0;
}
