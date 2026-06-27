/*
 * Problem #287: Find the Duplicate Number
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/26/2025, 8:01:01 PM
 * Link: https://leetcode.com/problems/find-the-duplicate-number/
 */

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            if(hash[nums[i]]==1) return nums[i];
            else{
                hash[nums[i]]=1;
            }
        }
        return -1;
    }
};
