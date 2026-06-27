/*
 * Problem #2942: Find Words Containing Character
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 2/15/2025, 7:04:58 PM
 * Link: https://leetcode.com/problems/find-words-containing-character/
 */

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int k=words.size();
        vector<int>ans;
        for(int i=0;i<k;i++){
            int n=words[i].length();
            for(int j=0;j<n;j++){
                if(words[i][j]==x){
                    ans.push_back(i);
                  break;
                }
            }
        }
        return ans;
    }
};
