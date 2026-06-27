/*
 * Problem #451: Sort Characters By Frequency
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 5/12/2025, 4:19:31 PM
 * Link: https://leetcode.com/problems/sort-characters-by-frequency/
 */

class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int>hash;
        for(int i=0;i<s.length();i++){
            hash[s[i]]++;
        }
        while (!hash.empty()) {
            auto maxElement = max_element(
                hash.begin(), hash.end(),
                [](const pair<char,int>& a, const pair<char,int>& b) {
                    return a.second < b.second;
                });
            ans.append(maxElement->second, maxElement->first);
            hash.erase(maxElement);
        }
        return ans;
    }
};
