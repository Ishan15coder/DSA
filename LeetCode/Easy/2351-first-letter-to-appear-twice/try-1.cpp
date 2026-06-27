/*
 * Problem #2351: First Letter to Appear Twice
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/5/2025, 11:35:12 AM
 * Link: https://leetcode.com/problems/first-letter-to-appear-twice/
 */

class Solution {
public:
    char repeatedCharacter(string s) {
        int freq[26]={0};
        int n=s.length();char ans;
        int flag=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            freq[ch-'a']++;
            if(freq[ch-'a']==2){
                ans=s[i];
                flag=1;
                break;
            }
        }
        if(flag){
            return ans;
        }
        return -1;
    }
};
