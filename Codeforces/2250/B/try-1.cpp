/*
 * Problem : String Construction
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 7/26/2026, 8:53:42 PM
 * Link: https://codeforces.com/contest/2250/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;

    while(t--) {
        ll n, k;
        cin >> n >> k;

        if(k == n-1){
            cout << -1 << "\n";
            continue;
        }

        ll m = n - k;
        ll S = k;

        ll addA = S/2;
        ll addB = S - addA;

        vector<ll> len(m, 1);
        len[0] += addA;
        len[1] += addB;

        string s;
        s.reserve(n);
        char c = '0';
        for(int i = 0; i < m; i++){
            s += string(len[i], c);
            c = (c == '0') ? '1' : '0';
        }

        cout << s << "\n";
    }

    return 0;
}
