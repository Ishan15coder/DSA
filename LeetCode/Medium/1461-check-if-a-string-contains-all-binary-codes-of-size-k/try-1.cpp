/*
 * Problem #1461: Check If a String Contains All Binary Codes of Size K
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/23/2025, 4:24:12 PM
 * Link: https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/
 */

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>se;
        int l=0,r=0,n=s.length();
        string p="";
        while(r<n){
            p+=s[r];
            if(r-l+1==k){
                se.insert(p);
                p.erase(0,1);
                l++;
            }
            r++;
        }
        if(se.size()==pow(2,k))return true;
        return false;
    }
};
