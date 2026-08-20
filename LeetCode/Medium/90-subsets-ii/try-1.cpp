/*
 * Problem #90: Subsets II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/20/2026, 12:14:36 PM
 * Link: https://leetcode.com/problems/subsets-ii/
 */

class Solution {
public:
set<vector<int>>s;
void gen(vector<int>&nums,int idx,vector<int>&cur){
    if(idx==nums.size()){
        s.insert(cur);
        return;
    }
    gen(nums,idx+1,cur);
    cur.push_back(nums[idx]);
    gen(nums,idx+1,cur);
    cur.pop_back();
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>cur;
        gen(nums,0,cur);
        vector<vector<int>>ans;
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};
