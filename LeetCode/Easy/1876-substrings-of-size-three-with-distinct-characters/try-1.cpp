/*
 * Problem #1876: Substrings of Size Three with Distinct Characters
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/23/2025, 4:35:56 PM
 * Link: https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/
 */

class Solution {
public:
    
    int countGoodSubstrings(string s) {
        unordered_map<char,int>p;
        int l=0,r=0,n=s.length();
        int cnt=0;
        while(r<n){
            p[s[r]]++;
            if((r-l+1)==3){
                if(p.size()==3)cnt++;
                p[s[l]]--;
                if(p[s[l]] == 0)p.erase(s[l]);
                l++;
            }
            r++;
        }
        return cnt;
    }
};
