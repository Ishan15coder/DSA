/*
 * Problem #14: Longest Common Prefix
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/11/2025, 8:38:03 PM
 * Link: https://leetcode.com/problems/longest-common-prefix/
 */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int t=strs.size();
        int n=strs[0].length();
        int m=strs[t-1].length();
        string ans="";
        for (int i = 0, j = 0; i < n && j < m; i++, j++){
            if(strs[0][i]==strs[t-1][j]){
                ans+=strs[0][i];
            }
            else{
                return ans;
                break;
            }
        }
        return ans;
    }
};
