/*
 * Problem #540: Single Element in a Sorted Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/8/2025, 4:11:49 PM
 * Link: https://leetcode.com/problems/single-element-in-a-sorted-array/
 */

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        auto ma=hash.begin();
        for(auto it=hash.begin();it!=hash.end();it++){
            if(it->second==1){
                return it->first;
            }
        }
        return -1;
    }
};
