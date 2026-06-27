/*
 * Problem #3838: Weighted Word Mapping
 * Difficulty: Easy
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 2/14/2026, 8:24:05 PM
 * Link: https://leetcode.com/problems/weighted-word-mapping/
 */

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        vector<char>alpha={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        for(int i=0;i<words.size();i++){
        int s=0;
            for(int j=0;j<words[i].size();j++){
                int idx=words[i][j]-'a'+1;
                s+=weights[idx-1];
            }
            int h=s%26;
            int k=26-h-1;
            ans+=alpha[k];
        }
        return ans;
    }
};
