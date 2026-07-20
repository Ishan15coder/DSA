/*
 * Problem #20: Valid Parentheses
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 7/20/2026, 9:38:45 PM
 * Link: https://leetcode.com/problems/valid-parentheses/
 */

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int ch=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{'||s[i]=='['||s[i]=='('){
                st.push(s[i]);
            }
            else{
        if(st.empty())return false;
                if(s[i]==')'&&st.top()=='('||s[i]=='}'&&st.top()=='{'||s[i]==']'&&st.top()=='['){
                    st.pop();
                    // continue;
                }
                else{
                    ch=1;
                    break;
                }
            }
        }
        if(!st.empty())return false;
        if(ch)return false;
        return true;
    }
};
