/*
 * Problem #3: Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 8/16/2025, 2:41:50 PM
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="")return 0;
        int hash[256];
        for(int i=0;i<256;i++) hash[i] = -1;      

        int l=0,r=0,n=s.length();
        int ma=INT_MIN;
        int le=0;
        while(r<n){
            if(hash[s[r]]!=-1){            
             if(hash[s[r]]>=l){
                l=hash[s[r]]+1;
            }
            }
            le=r-l+1;
            hash[s[r]]=r;
            ma=max(le,ma);
            r++;
        }
        return ma;
    }
};
