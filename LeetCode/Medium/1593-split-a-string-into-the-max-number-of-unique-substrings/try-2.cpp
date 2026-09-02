/*
 * Problem #1593: Split a String Into the Max Number of Unique Substrings
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 9/1/2026, 5:02:40 PM
 * Link: https://leetcode.com/problems/split-a-string-into-the-max-number-of-unique-substrings/
 */

class Solution {
public:
    set<vector<string>>ans;
    vector<string>se;
    void gen(string s,int idx){
        if(idx==s.length()){
            // set<string>st;
            // for(auto it:se){
            //     st.insert(it);
            // }
            ans.insert(se);
            return;
        }
        string t="";
        for(int i=idx;i<s.length();i++){
            t+=s[i];
            int ch=0;
            if(find(se.begin(), se.end(), t)==se.end()){
                se.push_back(t);
               
            gen(s,i+1);
                    se.pop_back();
                }
        }
    }
    int maxUniqueSplit(string s) {
        gen(s,0);
        int ma=0;
        for(auto it:ans){
            int k=it.size();
            ma=max(ma,k);
        }
        return ma;
    }
};
