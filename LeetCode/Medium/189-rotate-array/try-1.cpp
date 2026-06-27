/*
 * Problem #189: Rotate Array
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/8/2025, 3:10:29 PM
 * Link: https://leetcode.com/problems/rotate-array/
 */

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int p=0;
        k=k%n;
             reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
           }
};
