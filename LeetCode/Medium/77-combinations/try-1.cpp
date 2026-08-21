/*
 * Problem #77: Combinations
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/21/2026, 4:16:32 PM
 * Link: https://leetcode.com/problems/combinations/
 */

class Solution {
public:
set<vector<int>>s;
vector<vector<int>>ans;
void gen(vector<int>&num,vector<int>&curr,int idx,int k){
    if(idx==num.size()){
        if(curr.size()==k) s.insert(curr);
        return;
    }
    if(curr.size()==k){
        s.insert(curr);
        return;
    }
    gen(num,curr,idx+1,k);
    curr.push_back(num[idx]);
    gen(num,curr,idx+1,k);
    curr.pop_back();
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>num;
        for(int i=1;i<=n;i++){
            num.push_back(i);
        }
        vector<int>curr;
        gen(num,curr,0,k);
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};
