/*
 * Problem #20: Valid Parentheses
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 3/27/2025, 12:16:20 AM
 * Link: https://leetcode.com/problems/valid-parentheses/
 */

class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n=s.length();
        if(n==1){
            return false;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{'|| s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                char ch=st.top();
                st.pop();
                if(s[i]==')'&&ch=='('||s[i]=='}'&&ch=='{'||s[i]==']'&&ch=='['){
                    continue;
                }
                else{
                    return false;
                }
            }
            
        }
        if(st.empty()!=true){
            return false;
        }
        return true;
    }



    

};
