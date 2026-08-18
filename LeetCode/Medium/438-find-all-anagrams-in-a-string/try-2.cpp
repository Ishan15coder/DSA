/*
 * Problem #438: Find All Anagrams in a String
 * Difficulty: Medium
 * Submission: Try 2
 * status: Accepted
 * Language: cpp
 * Date: 8/18/2026, 12:58:01 PM
 * Link: https://leetcode.com/problems/find-all-anagrams-in-a-string/
 */

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int c[256] = {0};
        int d[256] = {0};

        for (int i = 0; i < p.length(); i++) {
            c[(unsigned char)p[i]]++;
        }

        int m = p.length();
        int n = s.length();

        if (n < m) return ans;

        int l = 0;
        int r = 0;

        while (r < n) {
            d[(unsigned char)s[r]]++;

            if (r - l + 1 == m) {

                bool same = true;

                for (int i = 0; i < 256; i++) {
                    if (c[i] != d[i]) {
                        same = false;
                        break;
                    }
                }

                if (same) {
                    ans.push_back(l);
                }

                d[(unsigned char)s[l]]--;
                l++;
            }

            r++;
        }

        return ans;
    }
};
