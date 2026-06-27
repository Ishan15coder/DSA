/*
 * Problem #219: Contains Duplicate II
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/21/2025, 7:38:34 PM
 * Link: https://leetcode.com/problems/contains-duplicate-ii/
 */

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            if(hash.count(nums[i])&&abs(hash[nums[i]]-i)<=k){
                return true;
            }
            hash[nums[i]]=i;
        }
        return false;
    }
};
