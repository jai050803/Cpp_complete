// HashMap (unordered_map) usage
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> mp;
    mp["apple"] = 2;
    mp["banana"] = 5;
    mp["orange"] = 3;
    for(auto& p : mp) cout << p.first << ": " << p.second << endl;
    cout << "Find 'banana': " << (mp.count("banana") ? "Yes" : "No") << endl;
    return 0;
}
