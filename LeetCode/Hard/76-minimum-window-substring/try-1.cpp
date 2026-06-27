/*
 * Problem #76: Minimum Window Substring
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/20/2025, 6:45:42 PM
 * Link: https://leetcode.com/problems/minimum-window-substring/
 */

class Solution { 
public:
    string minWindow(string s, string t) {
        int hash[256] = {0};
        for (int i = 0; i < t.size(); i++) {
            hash[t[i]]++;
        }

        int cnt = 0;
        int n = s.size();
        int m = t.size();
        int l = 0;
        int si = -1;
        int minlength = INT_MAX;

        while (l < n && hash[s[l]] < 0) { 
            l++;
        }

        for (int r = 0; r < n; r++) {
            if (hash[s[r]] > 0) cnt++;
            hash[s[r]]--;

            while (cnt == m) {
                if (r - l + 1 < minlength) {
                    minlength = r - l + 1;
                    si = l;
                }
                hash[s[l]]++;
                if (hash[s[l]] > 0) cnt--;
                l++;
            }
        }

        if (si == -1) return "";
        return s.substr(si, minlength);
    }
};

