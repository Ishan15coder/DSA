/*
 * Problem #1929: Concatenation of Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/15/2025, 6:37:57 PM
 * Link: https://leetcode.com/problems/concatenation-of-array/
 */

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ok();
        int k=nums.size();
        for(int i=0;i<k;i++){
           nums.push_back(nums[i]);
        }
        return nums;
    }
};
