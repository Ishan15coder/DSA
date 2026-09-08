/*
 * Problem #2390: Removing Stars From a String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/5/2026, 9:45:54 PM
 * Link: https://leetcode.com/problems/removing-stars-from-a-string/
 */

class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*'&&!st.empty()){
                st.pop();
            }
            else st.push(s[i]);
        }
        string k;
        while(!st.empty()){
            k+=st.top();
            st.pop();
        }
        reverse(k.begin(),k.end());
        return k;
    }
};
