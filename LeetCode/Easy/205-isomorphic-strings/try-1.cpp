/*
 * Problem #205: Isomorphic Strings
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/11/2025, 9:00:01 PM
 * Link: https://leetcode.com/problems/isomorphic-strings/
 */

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>hash;
        unordered_map<char,char>has;
        
        if(s.length()!=t.length()){
            return false;
        }
       for(int i=0;i<s.length();i++){
        char a=s[i];
        char b=t[i];
        if(hash.count(a)){
            if(hash[a]!=b)return false;
        }
        else hash[a]=b;

        if(has.count(b)){
            if(has[b]!=a)return false;
        }
        else has[b]=a;

       }
       return true;
    }
};
