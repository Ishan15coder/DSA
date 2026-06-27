/*
 * Problem #1768: Merge Strings Alternately
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/9/2025, 11:39:05 PM
 * Link: https://leetcode.com/problems/merge-strings-alternately/
 */

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        stack<char>s1;
        stack<char>s2;
        string ans;
        for(int i=word1.length()-1;i>=0;i--){
            s1.push(word1[i]);
        }
        for(int i=word2.length()-1;i>=0;i--){
            s2.push(word2[i]);
        }
        int n=word1.length()+word2.length();
        int i=0;
        while(!s1.empty()||!s2.empty()){
            if(i%2==0&&!s1.empty()){
                ans.push_back(s1.top());
                s1.pop();
            }
            if(i%2!=0&&!s2.empty()){
                ans.push_back(s2.top());
                s2.pop();
            }
            i++;
        }
        return ans;
    }
};
