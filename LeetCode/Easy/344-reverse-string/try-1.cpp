/*
 * Problem #344: Reverse String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/10/2025, 10:10:29 PM
 * Link: https://leetcode.com/problems/reverse-string/
 */

class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>ans;
        for(int i=0;i<s.size();i++){
            ans.push(s[i]);
        }
        for(int i=0;i<s.size();i++){
            char p=ans.top();
            s[i]=p;
            ans.pop();
        }
       
        

    }
};
