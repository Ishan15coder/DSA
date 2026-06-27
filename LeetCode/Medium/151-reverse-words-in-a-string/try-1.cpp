/*
 * Problem #151: Reverse Words in a String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 7/11/2025, 8:00:59 PM
 * Link: https://leetcode.com/problems/reverse-words-in-a-string/
 */

class Solution {
public:
    string reverseWords(string s) {
        vector<string>p;
            string a="";
            string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                a+=s[i];
            }
            else{
                if(a!=""){
                p.push_back(a);
                a="";
                }
            }
        }
        if(!a.empty()){
            p.push_back(a);
        }
        
        for(int i=p.size()-1;i>=0;i--){

            ans+=p[i];
            if(i!=0){
            ans+=" ";
            }
        }

        return ans;
    }
};
