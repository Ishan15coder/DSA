/*
 * Problem #3925: Concatenate Array With Reverse
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/10/2026, 8:01:46 AM
 * Link: https://leetcode.com/problems/concatenate-array-with-reverse/
 */

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>ans=nums;
        reverse(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};
