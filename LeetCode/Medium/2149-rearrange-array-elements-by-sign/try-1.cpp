/*
 * Problem #2149: Rearrange Array Elements by Sign
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/3/2025, 11:19:17 AM
 * Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/
 */

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p;
        vector<int>n;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)p.push_back(nums[i]);
            else{
                n.push_back(nums[i]);
            }
        }
        vector<int>ans;
        for(int i=0;i<p.size();i++){
            ans.push_back(p[i]);
            ans.push_back(n[i]);
        }
        return ans;
    }
};
