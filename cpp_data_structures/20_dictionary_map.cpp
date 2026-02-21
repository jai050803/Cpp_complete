// Dictionary using map (STL)
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> dict;
    dict["one"] = 1;
    dict["two"] = 2;
    dict["three"] = 3;
    for(auto& p : dict) cout << p.first << ": " << p.second << endl;
    return 0;
}
