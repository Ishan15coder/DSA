/*
 * Problem #1358: Number of Substrings Containing All Three Characters
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/18/2025, 9:38:26 PM
 * Link: https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/
 */

class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt=0;
        int ls[3]={-1,-1,-1};
        for(int i=0;i<s.length();i++){
            ls[s[i]-'a']=i;
            if(ls[0]!=-1&&ls[1]!=-1&&ls[2]!=-1){
                cnt+=min(min(ls[0],ls[1]),ls[2])+1;
            }
        }
        return cnt;
    }
};
