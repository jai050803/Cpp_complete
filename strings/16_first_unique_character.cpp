#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;


int approach1(string s){
    unordered_map<char, int> freq;
    for(char c : s){
        freq[c]++;
    }
    for(int i = 0; i < s.length(); i++){
        if(freq[s[i]] == 1) return i;
    }
    return -1;
}

int approach2(string s){
    vector<int> freq(256, 0);
    for(char c : s){
        freq[c]++;
    }
    for(int i = 0; i < s.length(); i++){
        if(freq[s[i]] == 1) return i;
    }
    return -1;
}

int approach3(string s){
    for(int i = 0; i < s.length(); i++){
        if(s.find(s[i]) == s.rfind(s[i])) return i;
    }
    return -1;
}
int main(){
    string s = "leetcode";
    cout << approach1(s) << endl;
}