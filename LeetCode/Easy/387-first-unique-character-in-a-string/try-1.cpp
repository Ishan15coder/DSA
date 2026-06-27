/*
 * Problem #387: First Unique Character in a String
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/5/2025, 11:26:01 AM
 * Link: https://leetcode.com/problems/first-unique-character-in-a-string/
 */

class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        queue<char>q;
        int freq[26]={0};
        for(int i=0;i<n;i++){
            char ch=s[i];
            q.push(ch);
            freq[ch-'a']++;
            while(!q.empty()&&freq[q.front()-'a']>1){
                q.pop();
            }
        }
        if(!q.empty()){
            int ans=0;
            for(int i=0;i<n;i++){
                if(q.front()==s[i]){
                    ans=i;
                    break;
                }
            }
            return ans;
        }
        return -1;
    }
};
