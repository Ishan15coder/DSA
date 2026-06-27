/*
 * Problem #567: Permutation in String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/24/2025, 5:43:35 PM
 * Link: https://leetcode.com/problems/permutation-in-string/
 */

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>a;
        unordered_map<char,int>b;
        for(int i=0;i<s1.length();i++)a[s1[i]]++;
        int l=0,r=0,n=s2.length();
        int k=s1.size();
        while(r<n){
            b[s2[r]]++;
            while(r-l+1>k){
                b[s2[l]]--;
                if(b[s2[l]]==0)b.erase(s2[l]);
                l++;
            }
            if(a==b)return true;
            r++;
        }
        return false;
    }
};
