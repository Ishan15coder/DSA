/*
 * Problem #1480: Running Sum of 1d Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/30/2025, 4:34:47 PM
 * Link: https://leetcode.com/problems/running-sum-of-1d-array/
 */

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i-1]+nums[i];
        }
        return nums;
    }
};
