/*
 * Problem #856: Score of Parentheses
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/12/2026, 4:19:29 PM
 * Link: https://leetcode.com/problems/score-of-parentheses/
 */

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char>st;
        for(int i=s.length()-1;i>=0;i--){
            st.push(s[i]);
        }
        int ans=0;
            int ch=0;
            int sta=0;
            int ss=0;
        while(!st.empty()){
            while(!st.empty()&&st.top()=='('){
                if(sta!=0)ch*=2;
                else ch=1;
                sta++;
                ss++;
                st.pop();
            }
            ans+=ch;
            while(!st.empty()&&st.top()==')'){
                st.pop();
                ch/=2;
                sta--;
                ss--;
            }
            
        }
        return ans;
    }
};
