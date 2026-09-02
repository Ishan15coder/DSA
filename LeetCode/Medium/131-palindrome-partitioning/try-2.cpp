/*
 * Problem #131: Palindrome Partitioning
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 9/1/2026, 10:44:48 AM
 * Link: https://leetcode.com/problems/palindrome-partitioning/
 */

class Solution {
public:
vector<vector<string>>ans;
vector<string>cur;
bool palc(string s){
    string l=s;
    reverse(l.begin(),l.end());
  
    return (s==l);
}
void gen(string s,int idx){
    if(idx==s.size()){
        ans.push_back(cur);
        return;
    }
    string t="";
    for(int i=idx;i<s.size();i++){
        t+=s[i];
        if(palc(t)){
            cur.push_back(t);
            gen(s,i+1);
            cur.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {

        gen(s,0);
        return ans;
    }
};
