/*
 * Problem #153: Find Minimum in Rotated Sorted Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/7/2025, 1:17:41 PM
 * Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
 */

class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};
