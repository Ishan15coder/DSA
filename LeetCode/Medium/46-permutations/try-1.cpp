/*
 * Problem #46: Permutations
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/2/2026, 9:43:44 PM
 * Link: https://leetcode.com/problems/permutations/
 */

class Solution {
public:
set<vector<int>>s;
vector<vector<int>>ans;
void gen(vector<int>&nums,int idx,vector<int>&curr){
    if(curr.size()==nums.size()){
        s.insert(curr);
        return;
    }
    for(int i=0;i<nums.size();i++){
    if(find(curr.begin(), curr.end(), nums[i]) == curr.end()){curr.push_back(nums[i]);
    gen(nums,i+1,curr);
    curr.pop_back();}
    }

    
}

    vector<vector<int>> permute(vector<int>& nums) {
            vector<int>curr;
            gen(nums,0,curr);      
            for (auto it:s){
                ans.push_back(it);
            }
            return ans;
    }
};
