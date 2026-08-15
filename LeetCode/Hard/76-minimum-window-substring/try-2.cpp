/*
 * Problem #76: Minimum Window Substring
 * Difficulty: Hard
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 8/15/2026, 3:34:43 PM
 * Link: https://leetcode.com/problems/minimum-window-substring/
 */

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>k;
        unordered_map<char,int>g;
        for(int i=0;i<t.length();i++)g[t[i]]++;
        long long n=s.length();
        int l=0;
        int r=0;
        string ans="";
          int start=0;
        int len=INT_MAX;

         bool valid=true;
           

        while(r<n){
            k[s[r]]++;
          valid=true;
           for(auto x:g){
                    if(k[x.first]<x.second){
                        valid=false;
                        break;
                    }
                }
             while(r-l+1>=t.length() && valid){
                  if(len>r-l+1){
                    start=l;
                    len=r-l+1;
                  }
                k[s[l]]--;
                l++;
                 valid=true;

                for(auto x:g){
                    if(k[x.first]<x.second){
                        valid=false;
                        break;
                    }
                }
            }
            r++;
        }
        if(len==INT_MAX)
            return "";
        return s.substr(start,len);
    }
};
