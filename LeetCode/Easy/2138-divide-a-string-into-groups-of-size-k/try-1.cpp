/*
 * Problem #2138: Divide a String Into Groups of Size k
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 6/22/2025, 11:20:29 AM
 * Link: https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/
 */

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        string p="";
        for(int i=0;i<s.length();i++){
            if(p.length()==k){
                ans.push_back(p);
                p="";
            }
            p+=s[i];
        }
        if(p.size()==k){
            ans.push_back(p);
        }
        else if(p.length()!=0){
        int j=k-p.length();
        for(int i=0;i<j;i++){
            p+=fill;
        }
                ans.push_back(p);
        }
        return ans;
    }
};
