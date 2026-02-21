// Unordered Map using STL
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> umap;
    umap["apple"] = 10;
    umap["banana"] = 20;
    for (auto& p : umap) cout << p.first << ": " << p.second << endl;
    cout << "Find 'apple': " << (umap.count("apple") ? "Yes" : "No") << endl;
    return 0;
}
