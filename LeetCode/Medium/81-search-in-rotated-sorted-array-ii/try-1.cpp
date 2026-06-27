/*
 * Problem #81: Search in Rotated Sorted Array II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/13/2025, 11:39:47 PM
 * Link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
 */

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return true;
            }
        }
        return false;
    }
};
