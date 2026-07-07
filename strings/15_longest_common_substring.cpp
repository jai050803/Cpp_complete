#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string approach1(vector<string>& strs){
    if(strs.empty()) return "";
    string prefix = strs[0];
    for(int i = 1; i < strs.size(); i++){
        while(strs[i].find(prefix) != 0){
            prefix = prefix.substr(0, prefix.length() - 1);
            if(prefix.empty()) return "";
        }
    }
    return prefix;
}

string approach2(vector<string>& strs){
    if(strs.empty()) return "";
    sort(strs.begin(), strs.end());
    for(int i=0; i < strs.size(); i++){
        cout << strs[i] << " ";
    }
    string first = strs[0];
    string last = strs[strs.size() - 1];
    int i = 0;
    while(i < first.length() && i < last.length() && first[i] == last[i]) i++;
    return first.substr(0, i);
}
int main(){
    vector<string> strs = {"flower", "flow", "flight"};
    cout << approach1(strs) << endl;
    cout << approach2(strs) << endl;
}