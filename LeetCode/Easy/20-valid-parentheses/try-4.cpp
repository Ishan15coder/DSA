/*
 * Problem #20: Valid Parentheses
 * Difficulty: Easy
 * Submission: Try 4
 * status: Accepted
 * Language: cpp
 * Date: 10/6/2026, 4:36:40 PM
 * Link: https://leetcode.com/problems/valid-parentheses/
 */

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
       for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else {
                if(st.empty()) return false;

                if(s[i]==')') {
                    if(st.top()!='(') return false;
                    st.pop();
                }

                if(s[i]==']') {
                    if(st.top()!='[') return false;
                    st.pop();
                }

                if(s[i]=='}') {
                    if(st.top()!='{') return false;
                    st.pop();
                }
            }
        
       }
       if(st.size()>0)return false;
       return true;
    }
};
