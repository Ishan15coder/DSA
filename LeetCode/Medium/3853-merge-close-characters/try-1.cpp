/*
 * Problem #3853: Merge Close Characters
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/28/2026, 8:48:54 PM
 * Link: https://leetcode.com/problems/merge-close-characters/
 */

class Solution {
public:
    string mergeCharacters(string s, int k) {
        int l=0;
        int r=1;
        while(r<s.size()){
            if(s[l]==s[r]&&r-l<=k){
                s.erase(r,1);
                r=0;
                l=0;
            }
            if(r-l>k||(r==s.size()-1&&l!=s.size()-1)){
                l++;
                r=l;
            }
            r++;
        }
   
        return s;
    }
};
