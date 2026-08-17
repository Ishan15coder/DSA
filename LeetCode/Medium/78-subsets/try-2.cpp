/*
 * Problem #78: Subsets
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 8/17/2026, 7:39:33 PM
 * Link: https://leetcode.com/problems/subsets/
 */

class Solution {
public:
    vector<vector<int>>ans;
    void gen(vector<int>&nums,int idx,vector<int>&curr){
        if(idx==nums.size()){
            ans.push_back(curr);
            return;
        }
        gen(nums,idx+1,curr);
        curr.push_back(nums[idx]);
        gen(nums,idx+1,curr);
        curr.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>curr;
        gen(nums,0,curr);
        return ans;
    }
};
