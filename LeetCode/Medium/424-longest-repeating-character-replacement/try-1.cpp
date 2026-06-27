/*
 * Problem #424: Longest Repeating Character Replacement
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/17/2025, 2:39:16 PM
 * Link: https://leetcode.com/problems/longest-repeating-character-replacement/
 */

class Solution {
public:
    int characterReplacement(string s, int k) {
        int ma=INT_MIN;
        int l=0;int r=0;
        int n=s.length();
        int hash[26]={0};
        int mf=INT_MIN;
        while(r<n){
            hash[s[r]-'A']++;
            mf=max(mf,hash[s[r]-'A']);
            int length=r-l+1;
            if(length-mf<=k){
             ma=max(ma,length);
            }
            else{
                hash[s[l]-'A']--;
                mf=0;
                for(int i=0;i<26;i++){
                    mf=max(mf,hash[i]);
                }
                l++;
            }
            r++;
        }
        
        return ma;
    }
};
