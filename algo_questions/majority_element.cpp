#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


//using hashmap to stroe the count and find the values greater than n/2
int majority_element1 (vector<int>& nums){
    unordered_map<int, int> freq;
    for(int num : nums){
        freq[num]++;
    }

    for(auto& pair : freq){
        cout << "Element: " << pair.first << ", Frequency: " << pair.second << endl;
    }
    int majority = nums.size() / 2;
    for(auto it : freq){
        if(it.second > majority) return it.first;
    }
    return -1;
}

//using sorting to find the majority element
int majority_element2(vector<int>& nums){
    sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];
}

//using boyer moore voting algorithm
int majority_element3(vector<int>& nums){
    int count = 0;
    int candidate = 0;
    for(int num : nums){
        if(count == 0) candidate = num;
        count += (num == candidate) ? 1 : -1;
    }
    return candidate;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2,3,4,2,2,2,3,4,2,5,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,6,2,2,2,2,2,2,2,2,2,2,2,2,2,2,7};
    cout << majority_element1(nums) << endl;
    cout << majority_element2(nums) << endl;
    cout << majority_element3(nums) << endl;
    return 0;
}