/*
 * Problem #3: Longest Substring Without Repeating Characters
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/26/2025, 7:10:46 PM
 * Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length=0;
        for(int i=0;i<s.length();i++){
            int hash[256]={0};
            string l="";
            for(int j=i;j<s.length();j++){
                if(hash[s[j]]==1) break;
                length=max(length,j-i+1);
                hash[s[j]]=1;
                l+=s[j];
            }
        }
        return length;
    }
};
