/*
 * Problem #3707: Equal Score Substrings
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 10/11/2025, 8:17:15 PM
 * Link: https://leetcode.com/problems/equal-score-substrings/
 */

class Solution {
public:
    bool scoreBalance(string s) {
        int l=0;
        int a=0,b=0;
        int r=0;
        int n=s.length();
       for(int i=0;i<n;i++){
           l+=s[i]-'a'+1;
       }
        for(int i=0;i<n;i++){
            r+=s[i]-'a'+1;
            if(r==(l-r))return true;
        }
        return false;
    }
};
