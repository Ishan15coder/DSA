/*
 * Problem #3839: Number of Prefix Connected Groups
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/14/2026, 8:43:56 PM
 * Link: https://leetcode.com/problems/number-of-prefix-connected-groups/
 */

class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        sort(words.begin(),words.end());
        int l=0;
        int r=1;
        int n=words.size();
        int ans=0;
        int cnt=0;
        while(r<n){
            int ch=0;
            if(words[r].size()<k)ch=1;
            else{
            for(int i=0;i<k;i++){
                if(words[l][i]!=words[r][i]){
                    ch=1;
                    break;
                }
            }
            }
            if(ch){
                if(cnt){
                    ans++;
                    cnt=0;
                }
                l=r;
            }
            else cnt++;
            r++;
        }
        if(cnt){
                    ans++;
                    cnt=0;
        }
        return ans;
    }
};
