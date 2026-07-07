#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

//most optimal approach for interesection of two arrays - using two pointers
vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector<int> result;
    int i = 0, j = 0;
    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] == nums2[j]){
            result.push_back(nums1[i]);
            i++;
            j++;
        }
        else if(nums1[i] < nums2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return result;
}

//using hashset to find the intersection of two arrays
vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
    unordered_set<int> set(nums1.begin(), nums1.end());
    vector<int> result;
    for(int num : nums2){
        if(set.find(num) != set.end()){
            result.push_back(num);
            set.erase(num); // to avoid duplicates in result
        }
    }
    return result;
}

int main(){
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = intersection(nums1, nums2);
    for(int num : result){
        cout << num << " ";
    }
    return 0;
}