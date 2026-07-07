#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <string>

string vectorToString(const vector<int>& vec) {
    string s = "[";
    for(int j = 0; j < vec.size(); j++){
        s += to_string(vec[j]);
        if (j < vec.size() - 1) s += ", ";
    }
    s += "]";
    return s;
}

void backtrack(vector<vector<int>>& res, vector<int>& curr, vector<int>& nums, int i){

    if(i == nums.size()){
        res.push_back(curr);
        return;
    }

    curr.push_back(nums[i]);
    backtrack(res, curr, nums, i+1);

    curr.pop_back();
    backtrack(res, curr, nums, i+1);
}

vector<vector<int>> subset(vector<int>& nums){
    vector<vector<int>> result;
    vector<int> curr;
    int i =0;

    backtrack(result, curr, nums, i);

    return result;
}
int main(){
    vector<int> nums = {1,2,3};

    cout << endl;

    vector<vector<int>> subsets = subset(nums);

    cout << "\n--- Final Result Vector ---\n";
    cout << "[";
    for(int i = 0; i < subsets.size(); i++){
        cout << vectorToString(subsets[i]);
        if (i < subsets.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]\n";

    return 0;
}