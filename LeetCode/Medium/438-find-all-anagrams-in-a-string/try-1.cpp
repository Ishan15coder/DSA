/*
 * Problem #438: Find All Anagrams in a String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/23/2025, 7:12:16 PM
 * Link: https://leetcode.com/problems/find-all-anagrams-in-a-string/
 */

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
         if(s.size()<p.size())return {};
        vector<int>pash(26,0);
        vector<int>sash(26,0);





        vector<int>an;
        for(int i=0;i<p.size();i++)
        {
            pash[p[i]-'a']++;



            sash[s[i]-'a']++;
        }
       
        if(pash==sash)an.push_back(0);
        


        
        for(int i=p.size();i<s.size();i++)
        {
             sash[s[i]-'a']++;




             sash[s[i-p.size()]-'a']--;




             if(pash==sash)an.push_back(i+1-p.size());
        }
        
        return an;
    }
};
