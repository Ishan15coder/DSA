/*
 * Problem #796: Rotate String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/11/2025, 9:23:12 PM
 * Link: https://leetcode.com/problems/rotate-string/
 */

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())return false;
        
        int n=s.length();
        for(int i=0;i<=n;i++){
            rotate(s.begin(),s.begin()+1,s.end());
            if(s==goal)return true;
        }
        return false;
    }
};
