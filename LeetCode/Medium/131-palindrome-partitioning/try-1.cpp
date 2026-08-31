/*
 * Problem #131: Palindrome Partitioning
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/30/2026, 10:44:19 PM
 * Link: https://leetcode.com/problems/palindrome-partitioning/
 */

class Solution {
public:
    vector<vector<string>> se;
    vector<string> cr;

    bool palc(string t) {
        string k = t;
        reverse(k.begin(), k.end());
        return k == t;
    }

    void gen(string s, int idx) {

        
        if (idx == s.length()) {
            se.push_back(cr);
            return;
        }
        string t = "";
        for (int i = idx; i < s.length(); i++) {
            t += s[i];
            if (palc(t)) {
                cr.push_back(t);
                gen(s, i + 1);
                cr.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        gen(s, 0);
        return se;
    }
};
