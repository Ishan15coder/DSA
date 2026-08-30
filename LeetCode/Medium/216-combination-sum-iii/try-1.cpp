/*
 * Problem #216: Combination Sum III
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/30/2026, 4:08:10 PM
 * Link: https://leetcode.com/problems/combination-sum-iii/
 */

class Solution {
public:
    vector<vector<int>>ans;
    void gen(vector<int>&num,vector<int>&curr,int n,int k,int sum,int idx){
        if(idx==num.size()){
        if(curr.size()==k){
            if(sum==n)ans.push_back(curr);
        }
            return;
        }
        if(curr.size()==k){
            if(sum==n)ans.push_back(curr);
            return;
        }
        gen(num,curr,n,k,sum,idx+1);
        curr.push_back(num[idx]);
        int l=num[idx];
        sum+=l;
        gen(num,curr,n,k,sum,idx+1);
        sum-=l;
        curr.pop_back();
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>num={1,2,3,4,5,6,7,8,9};
        int sum=0;
        vector<int>curr;
        gen(num,curr,n,k,sum,0);
        return ans;
    }
};
