/*
 * Problem #47: Permutations II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/2/2026, 10:11:25 PM
 * Link: https://leetcode.com/problems/permutations-ii/
 */

class Solution {
public:
set<vector<int>>s;
    void gen(vector<int>&nums,vector<int>&curr){
        if(curr.size()==nums.size()){
            s.insert(curr);
        }
        for(int i=0;i<nums.size();i++){
            if(find(curr.begin(),curr.end(),i)==curr.end()){
            curr.push_back(i);
            gen(nums,curr);
            curr.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>curr;
        gen(nums,curr);
        set<vector<int>>ans;
        for(auto it:s){
            vector<int>l;
            for(int i=0;i<it.size();i++){
                l.push_back(nums[it[i]]);
            }
            ans.insert(l);
        }
        vector<vector<int>>sd;
        for(auto it:ans){
            sd.push_back(it);
        }
        return sd;
    }
};
