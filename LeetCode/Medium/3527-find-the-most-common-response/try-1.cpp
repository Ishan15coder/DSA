/*
 * Problem #3527: Find the Most Common Response
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 4/26/2025, 8:27:45 PM
 * Link: https://leetcode.com/problems/find-the-most-common-response/
 */

class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        vector<string> ans;
        
        for (int i = 0; i < responses.size(); i++) {
            unordered_set<string> unique;
            for (int j = 0; j < responses[i].size(); j++) {
                unique.insert(responses[i][j]);
            }
            for (auto& s : unique) {
                ans.push_back(s);
            }
        }
        
        unordered_map<string, int> freq;
        for (auto& s : ans) {
            freq[s]++;
        }
        
        string res = "";
        int maxFreq = 0;
        for (auto& [s, count] : freq) {
            if (count > maxFreq || (count == maxFreq && s < res)) {
                maxFreq = count;
                res = s;
            }
        }
        return res;
    }
};

