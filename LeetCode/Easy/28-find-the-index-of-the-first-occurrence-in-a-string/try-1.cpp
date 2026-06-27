/*
 * Problem #28: Find the Index of the First Occurrence in a String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/28/2025, 6:05:05 PM
 * Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 */

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        int r=0;
        int l=0;
        string p="";
        int ch=-1;
        int j=haystack.size();
        while(r<j){
            p+=haystack[r];
            if(r-l+1>n){
                p.erase(p.begin());
                l++;
            }
            if(r-l+1==n){
                if(p==needle){
                    ch=l;
                    break;
                }
            }
            r++;
        }
        return ch;
    }
};
