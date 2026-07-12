/*
 * Problem : Make AP
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/28/2025, 7:15:35 PM
 * Link: https://codeforces.com/contest/1624/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        bool ok = false;

        // Case 1: multiply a
        if ((2*b - c) > 0 && (2*b - c) % a == 0) ok = true;

        // Case 2: multiply b
        if ((a + c) % (2*b) == 0) ok = true;

        // Case 3: multiply c
        if ((2*b - a) > 0 && (2*b - a) % c == 0) ok = true;

        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}
