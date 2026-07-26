/*
 * Problem : Threshold Movement
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 7/26/2026, 8:40:15 PM
 * Link: https://codeforces.com/contest/2250/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define v(a,n) for(int i=0;i<n;i++) cin>>a[i];

int main() {
    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> a(n+1);
        for(int i = 1; i <= n; i++)cin>>a[i];

        if(n%2!=0)cout<<"NO"<<endl;
        
else {
        ll ma = LLONG_MIN;
        ll mi = LLONG_MAX;
        for(int i = 1; i <= n; i++){
            if(i % 2 == 0) ma = max(ma, a[i]);
            else mi = min(mi, a[i]);
        }

        if(mi-ma>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;}
    }

    return 0;
}
