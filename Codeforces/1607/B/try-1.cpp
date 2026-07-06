/*
 * Problem : Odd Grasshopper
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/28/2025, 7:41:59 PM
 * Link: https://codeforces.com/contest/1607/problem/B
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, n;
        cin >> x >> n;
        long long add;
        if (n % 4 == 0) add = 0;
        else if (n % 4 == 1) add = -n;
        else if (n % 4 == 2) add = 1;
        else add = n + 1;

        if (x % 2 == 0) cout << x + add << "\n";
        else cout << x - add << "\n";
    }
    return 0;
}
