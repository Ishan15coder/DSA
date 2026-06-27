/*
 * Problem #1021: Remove Outermost Parentheses
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/11/2025, 7:44:59 PM
 * Link: https://leetcode.com/problems/remove-outermost-parentheses/
 */

class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=0;
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                cnt--;
            }
            if(cnt!=0){
                ans+=s[i];
            }
            if(s[i]=='('){
                cnt++;
            }
        }
        return ans;
    }
};
