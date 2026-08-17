/*
 * Problem : Gigantomachy
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/17/2026, 9:50:49 PM
 * Link: https://codeforces.com/contest/2257/problem/B
 */

#include <bits/stdc++.h>
using namespace std;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];
using ll = long long;

int main() {


    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<ll> a(n), b(m);

       v(a,n);
       v(b,m);

        ll cnt1 = a[n - 1];
        ll cnt2 = b[m - 1];

        for (int i = 0; i < n - 1; i++) {
            cnt1 += a[i] - a[i + 1] + 1;
        }

        for (int i = 0; i < m - 1; i++) {
            cnt2 += b[i] - b[i + 1] + 1;
        }

        if (cnt1 >= cnt2)
            cout << 1 <<endl;
        else
            cout << 2 <<endl;
    }

    return 0;
}
