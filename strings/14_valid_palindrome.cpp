#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


bool validPalindrome(string s){
    int left = 0;
    int right = s.length() - 1;
    while(left < right){
        while(left < right && !isalnum(s[left])) left++;
        while(left < right && !isalnum(s[right])) right--;
        if(tolower(s[left]) != tolower(s[right])) return false;
        left++;
        right--;
    }

    return true;
}

bool isPalindrome2(string s){
    string filtered;
    for(char c : s){
        if(isalnum(c)) filtered += tolower(c);
    }
    string reversed = filtered;
    reverse(reversed.begin(), reversed.end());
    return filtered == reversed;
}

bool isPalindrome3(string s){
    string temp;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') temp += s[i];
        else if(s[i] >= 'A' && s[i] <= 'Z') temp += tolower(s[i]);
        else if(s[i] >= '0' && s[i] <= '9') temp += s[i];
    }
    string reversed = temp;
    reverse(reversed.begin(), reversed.end());
    return temp == reversed;
}
int main(){
    string s = "a man, a plan, a canal: Panama";
    if(isPalindrome2(s)) cout << "It is a palindrome" << endl;
    else cout << "It is not a palindrome" << endl;
}