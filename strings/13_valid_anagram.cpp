#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool isAnagram(string s1, string s2){
    if(s1.length() != s2.length()) return false;;

    int freq[26] = {0};
    for(int i = 0; i < s1.length(); i++){
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++){
        if(freq[i] != 0) return false;
    }
    return true;
}

bool isAnagram2(string s1, string s2){
    if(s1.length() != s2.length()) return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

bool isAnagram3(string s, string t){
    if(s.length() != t.length()) return false;

    unordered_map<char, int> freq;
    for(int i = 0; i < s.length(); i++){
        freq[s[i]]++;
        freq[t[i]]--;
    }
    for(auto it : freq){
        if(it.second != 0) return false;
    }
    return true;
}

int main(){
    string s1 = "listen";
    string s2 = "silent";
    if(isAnagram(s1, s2)) cout << "it is anagram" << endl;
    else cout << "it is not anagram" << endl;

    if(isAnagram2(s1, s2)) cout << "it is anagram" << endl;
    else cout << "it is not anagram" << endl;

    if(isAnagram3(s1, s2)) cout << "it is anagram" << endl;
    else cout << "it is not anagram" << endl;
}