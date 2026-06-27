/*
 * Problem #139: Word Break
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/6/2026, 3:36:26 PM
 * Link: https://leetcode.com/problems/word-break/
 */

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.length();
        vector<int>dp(n+1,0);
        dp[0]=1;
        for(int i=0;i<n;i++){
            string temp="";
            if(dp[i]==1){
            for(int j=i;j<n;j++){
                temp+=s[j];
                if(find(wordDict.begin(), wordDict.end(), temp) != wordDict.end()){
                    dp[j+1]=1;
                }
            }
         }
        }
        if(dp[n])return true;
        return false;

    }
};
