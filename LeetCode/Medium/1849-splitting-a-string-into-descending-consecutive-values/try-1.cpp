/*
 * Problem #1849: Splitting a String Into Descending Consecutive Values
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/1/2026, 6:39:23 PM
 * Link: https://leetcode.com/problems/splitting-a-string-into-descending-consecutive-values/
 */

class Solution {
public:
      vector<vector<__int128>> ans;
vector<__int128> c;
  
    bool check(vector<__int128>&c){
     
        if(c.size()>=2)return true;
        
        
            return false;
    }
    void gen(string s,long long idx){
        if(idx==s.length()){
            if(check(c)){
                ans.push_back(c);
            }
            return;
        }
        string t="";
        for (int i = idx; i < s.length(); i++) {

            t += s[i];

           

            __int128 k = 0;

           
            for (char ch : t)
                k = k * 10 + (ch - '0');

            if (c.empty() || c.back() - k == 1) {

                c.push_back(k);

                gen(s, i + 1);

                c.pop_back();
            }
        }
    }
    bool splitString(string s) {
        gen(s,0);
        if(ans.size()>0)return true;
        return false;
    }

};
