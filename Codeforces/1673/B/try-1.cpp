/*
 * Problem : A Perfectly Balanced String?
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/6/2026, 7:33:58 PM
 * Link: https://codeforces.com/contest/1673/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        set<char> st;
        int k = 0;

       
        for (; k < n; k++) {
            if (st.count(s[k])) break;
            st.insert(s[k]);
        }

        bool ok = true;

        for (int i = k; i < n; i++) {
            if (s[i] != s[i - k]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
