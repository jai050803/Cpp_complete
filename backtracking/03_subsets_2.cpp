#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void backtrack(vector<int>& nums, vector<vector<int>>& result, vector<int>& curr, int start){

    result.push_back(curr);

    for(int i =start; i< nums.size(); i++){

        if( i > start && nums[i] == nums[i-1]) continue;

        curr.push_back(nums[i]);
        backtrack(nums, result, curr, i + 1);
        curr.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> result;
    vector<int> current;
    int start = 0;

    backtrack(nums, result, current, start);

    return result;
}

int main(){
    vector<int> nums = {1,2,2};

    vector<vector<int>> result = subsets(nums);

    for(vector<int> p : result){
        for(int j : p){
            cout << j << " " ;
        }

        cout << endl;
    }

    cout << endl;

    return 0;
}