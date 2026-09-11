/*
 * Problem #2559: Count Vowel Strings in Ranges
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/11/2026, 7:57:07 PM
 * Link: https://leetcode.com/problems/count-vowel-strings-in-ranges/
 */

class Solution {
public:
    bool fbc(string s){
        int n=s.length();
        if((s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u')&&(s[n-1]=='a'||s[n-1]=='e'||s[n-1]=='i'||s[n-1]=='o'||s[n-1]=='u')){
            return true;
        }
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int>pre(n);
        if(fbc(words[0]))pre[0]=1;
        else pre[0]=0;
        for(int i=1;i<n;i++){
           if(fbc(words[i]))pre[i]=pre[i-1]+1;
           else pre[i]=pre[i-1]; 
        }
        int k=queries.size();
        vector<int>ans(k);
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
            int r=queries[i][1];
           
            if(l>0)ans[i]=pre[r]-pre[l-1];
            else ans[i]=pre[r];
        
        }
        return ans;
    }
};
