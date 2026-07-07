#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs){
    vector<vector<string>> result;
    sort(strs.begin(), strs.end());
    for(int i = 0; i < strs.size(); i++){
        vector<string> temp;
        temp.push_back(strs[i]);
        for(int j = i + 1; j < strs.size(); j++){
            string s1 = strs[i];
            string s2 = strs[j];
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            if(s1 == s2){
                temp.push_back(strs[j]);
                strs.erase(strs.begin() + j);
                j--;
            }
        }
        result.push_back(temp);
    }
    return result;
}

int main(){
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> output = groupAnagrams(input);
    for(auto& group : output){
        cout << "[ ";
        for(auto& str : group){
            cout << str << " ";
        }
        cout << "]" << endl;
    }
    return 0;

}