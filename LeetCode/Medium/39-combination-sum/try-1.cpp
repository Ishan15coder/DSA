/*
 * Problem #39: Combination Sum
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/24/2026, 12:11:07 PM
 * Link: https://leetcode.com/problems/combination-sum/
 */

class Solution {
public:
    vector<vector<int>>ans;
    void gen(vector<int>&candidates,int idx,int target,vector<int>&curr){
        if(idx==candidates.size()){
        if(target==0)ans.push_back(curr);
            return;
        }
    
        if(target==0){ans.push_back(curr);
            return;
        }
            if(candidates[idx]>target){
                // idx=curr.size();
                // gen(candidates,idx,target,curr);
                return;
            }
            else{ 
                
                gen(candidates,idx+1,target,curr);
                curr.push_back(candidates[idx]);
                int j=candidates[idx];
                target-=j;
                gen(candidates,idx,target,curr);
                target+=j;

                curr.pop_back();
                
            
         }
        
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>curr;
        gen(candidates,0,target,curr);

        return ans;
    }
};
