/*
 * Problem #22: Generate Parentheses
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/24/2026, 4:35:53 PM
 * Link: https://leetcode.com/problems/generate-parentheses/
 */

class Solution {
public:
    vector<string>ans;
    void gen(int n,string curr,int idx1,int idx2){
        if(idx1==n&&idx2==n){
            ans.push_back(curr);
            return;
        }
        if(idx1<n){
            curr+='(';
            gen(n,curr,idx1+1,idx2);
            curr.pop_back();
        }
        if(idx2<idx1){
            curr+=')';
            gen(n,curr,idx1,idx2+1);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n){
        string curr="";
        gen(n,curr,0,0);
        return ans;
    }
};
