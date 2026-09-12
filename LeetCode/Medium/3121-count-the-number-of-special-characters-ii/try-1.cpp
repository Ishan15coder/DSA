/*
 * Problem #3121: Count the Number of Special Characters II
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 9/12/2026, 7:47:13 PM
 * Link: https://leetcode.com/problems/count-the-number-of-special-characters-ii/
 */

class Solution {
public:
    int numberOfSpecialChars(string word) {
     set<char>s;
        vector<pair<int,int>>greninja(26, {-1,-1});
        for(int i=0;i<word.length();i++){
            if(word[i]>='a'&&word[i]<='z'){
                greninja[word[i]-'a'].first=i;
            }
            else{
                char p=tolower(word[i]);
                if(greninja[p-'a'].second==-1)greninja[p-'a'].second=i;
            }
        }
        int ans=0;
        for(int i=0;i<word.length();i++)s.insert(word[i]);
        for(auto it:s){
            if(it>='a'&&it<='z'){
                if(greninja[it-'a'].first<greninja[it-'a'].second&&greninja[it-'a'].first!=-1){
                    greninja[it-'a'].second=-1;
                    ans++;
                }
            }
            else{
                char p=tolower(it);
                if(greninja[p-'a'].first<greninja[p-'a'].second&&greninja[p-'a'].first!=-1){
                    greninja[p-'a'].second=-1;
                    ans++;
                }
            }
    }
    return ans;
    }

};
