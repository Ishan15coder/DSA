/*
 * Problem #3794: Reverse String Prefix
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 1/3/2026, 8:10:13 PM
 * Link: https://leetcode.com/problems/reverse-string-prefix/
 */

class Solution {
public:
    string reversePrefix(string s, int k) {
        string t="";
        for(int i=k-1;i>=0;i--){
            t+=s[i];
        }
        for(int i=k;i<s.length();i++){
            t+=s[i];
        }
        return t;
    }
};
