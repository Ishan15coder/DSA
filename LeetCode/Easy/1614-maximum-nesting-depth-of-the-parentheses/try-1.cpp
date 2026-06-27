/*
 * Problem #1614: Maximum Nesting Depth of the Parentheses
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/12/2025, 10:29:49 AM
 * Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
 */

class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            ans=max(ans,cnt);
            if(s[i]==')')cnt--;
            if(s[i]=='(')cnt++;
        }
        return ans;
    }
};
