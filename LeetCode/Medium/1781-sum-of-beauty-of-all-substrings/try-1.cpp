/*
 * Problem #1781: Sum of Beauty of All Substrings
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/14/2025, 10:24:36 AM
 * Link: https://leetcode.com/problems/sum-of-beauty-of-all-substrings/
 */

class Solution {
public:
    int beautySum(string s) {
        string p;
        int ans=0;
        for(int i=0;i<s.length();i++){
        unordered_map<char,int>hash;
            p="";
            p+=s[i];
            hash[s[i]]++;
            for(int j=i+1;j<s.length();j++){
                p+=s[j];
                hash[s[j]]++;
                int minVal = INT_MAX, maxVal = INT_MIN;
                for (auto& pair : hash) {
            if (pair.second < minVal) {
              minVal = pair.second;
                 }
            if (pair.second > maxVal) {
            maxVal = pair.second;
        }
         }
         ans+=(maxVal-minVal);
            }
        }
        return ans;
    }
};
