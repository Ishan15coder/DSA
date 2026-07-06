/*
 * Problem : Fair Numbers
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/20/2026, 12:53:46 AM
 * Link: https://codeforces.com/contest/1411/problem/B
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        while(true){
            ll temp = n;
            bool ok = true;

            while(temp > 0){
                int d = temp % 10;
                if(d != 0 && n % d != 0){
                    ok = false;
                    break;
                }
                temp /= 10;
            }

            if(ok) break;
            n++;
        }

        cout << n << '\n';
    }
    return 0;
}
