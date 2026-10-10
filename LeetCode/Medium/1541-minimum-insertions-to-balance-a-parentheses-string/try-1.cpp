/*
 * Problem #1541: Minimum Insertions to Balance a Parentheses String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/9/2026, 9:24:12 PM
 * Link: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/
 */

class Solution {
public:
    int minInsertions(string s) {
        int n=s.length();
        int c1=0;
        int c2=0;
        int ans=0;
        for(int i=0;i<n;i++){
           if(s[i]=='('){
                c1++;
            }
            else{
                if(i+1<n && s[i+1]==')'){
                    i++;
                }
                else{
                    ans++;
                }
                if(c1>0){
                    c1--;
                }
                else{
                    ans++;
                }
            }

        }


            if(c1>0){ans+=c1*2;}
        return ans;
    }
};
