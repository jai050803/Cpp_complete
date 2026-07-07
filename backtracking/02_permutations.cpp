#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//approach 2: using swapping instead of visited index

void backtrack2(vector<int>& nums, vector<vector<int>>& result, int i){

    if(i == nums.size()){
        result.push_back(nums);
        return;
    }

    for(int j = i; j < nums.size(); j++){
        swap(nums[i], nums[j]);
        backtrack2(nums, result, i+1);

        swap(nums[i], nums[j]);
    }
}

vector<vector<int>> permutations2(vector<int>& nums){

    vector<vector<int>> result;
    int i = 0;

    backtrack2(nums, result, i);

    return result;

}

void backtrack(vector<vector<int>>& result, vector<int>& nums, vector<bool>& visited, vector<int>& curr){

    if(curr.size() == nums.size()){
        result.push_back(curr);
        return;
    }

    for(int i = 0; i< nums.size(); i++){
        if (visited[i]) continue;

        visited[i] = true;
        curr.push_back(nums[i]);
        backtrack(result, nums, visited, curr);

        curr.pop_back();
        visited[i] = false;
    }
}


vector<vector<int>> permutations(vector<int>& nums){
    vector<vector<int>> result;
    vector<bool> visited(nums.size(), false);
    vector<int> curr;

    backtrack(result, nums, visited, curr);

    return result;
}
int main(){
    vector<int> nums = {1,2,3};

    vector<vector<int>> result = permutations(nums);

    for(vector<int> p : result){
        for(int j : p){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return 0;
}