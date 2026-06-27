/*
 * Problem #154: Find Minimum in Rotated Sorted Array II
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/7/2025, 1:39:54 PM
 * Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
 */

class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};
