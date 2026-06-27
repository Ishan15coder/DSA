/*
 * Problem #678: Valid Parenthesis String
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 8/24/2025, 6:51:48 PM
 * Link: https://leetcode.com/problems/valid-parenthesis-string/
 */

class Solution {
public:
    bool checkValidString(string s) {
        stack<int> p;     // for '(' positions
        stack<int> star;  // for '*' positions

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                p.push(i);
            }
            else if (s[i] == '*') {
                star.push(i);
            }
            else { // ')'
                if (!p.empty()) {
                    p.pop();
                }
                else if (!star.empty()) {
                    star.pop();
                }
                else {
                    return false;
                }
            }
        }

        while (!p.empty() && !star.empty()) {
            if (p.top() > star.top()) return false;
            p.pop();
            star.pop();
        }

        return p.empty();
    }
};

