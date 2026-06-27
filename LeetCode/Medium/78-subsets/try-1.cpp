/*
 * Problem #78: Subsets
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/15/2025, 2:57:39 PM
 * Link: https://leetcode.com/problems/subsets/
 */

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int subsets=1<<n;
        vector<vector<int>>ans;
        for(int num=0;num<subsets;num++){
            vector<int>l;
            for(int i=0;i<n;i++){
                if(num&(1<<i)){
                    l.push_back(nums[i]);
                }
            }
            ans.push_back(l);
        }
        return ans;
    }
};
