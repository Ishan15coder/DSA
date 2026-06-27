/*
 * Problem #48: Rotate Image
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/2/2025, 6:45:58 PM
 * Link: https://leetcode.com/problems/rotate-image/
 */

class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
         for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums[0].size();j++){
           swap(nums[i][j], nums[j][i]);
        }
       }
       for(int i=0;i<nums.size();i++){
        reverse(nums[i].begin(),nums[i].end());
       }
       
    }
};
