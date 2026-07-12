/*
 * Problem : Simple Strings
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 7/5/2026, 9:55:04 AM
 * Link: https://codeforces.com/contest/665/problem/C
 */

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();

    for(int i = 1; i < n; i++) {
        if(s[i] == s[i-1]) {
            for(char c = 'a'; c <= 'z'; c++) {
                if(c != s[i-1] && (i == n-1 || c != s[i+1])) {
                    s[i] = c;
                    break;
                }
            }
        }
    }

    cout << s << '\n';
    return 0;
}
