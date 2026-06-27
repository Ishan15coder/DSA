/*
 * Problem #48: Rotate Image
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 5/2/2025, 6:46:22 PM
 * Link: https://leetcode.com/problems/rotate-image/
 */

class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
         for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums[0].size();j++){
           swap(nums[i][j], nums[j][i]);
        }
       }
       for(int i=0;i<nums.size();i++){
        reverse(nums[i].begin(),nums[i].end());
       }
       
    }
};
