/*
 * Problem : Permutation Swap
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/29/2025, 3:37:33 PM
 * Link: https://codeforces.com/contest/1828/problem/B
 */

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int g = 0;
        for (int i = 1; i <= n; i++) {
            g = gcd(g, abs(a[i] - i));
        }

        cout << g << "\n";
    }
    return 0;
}
