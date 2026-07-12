/*
 * Problem : Buying Shovels
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/14/2026, 10:16:31 PM
 * Link: https://codeforces.com/contest/1360/problem/D
 */

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll largest_divisor(ll n, ll m){
    ll d = 1;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            if(i <= m) d = max(d, i);
            if(n / i <= m) d = max(d, n / i);
        }
    }
    return d;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;

        ll d = largest_divisor(n, k);
        cout << n / d << endl;
    }
    return 0;
}
