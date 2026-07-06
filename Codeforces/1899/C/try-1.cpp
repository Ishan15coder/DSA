/*
 * Problem : Yarik and Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 3/17/2026, 10:13:29 AM
 * Link: https://codeforces.com/contest/1899/problem/C
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        v(a,n);
      

        ll curr = a[0], ans = a[0];

for(ll i = 1; i < n; i++) {
    if((abs(a[i]) % 2) != (abs(a[i-1]) % 2)) {
        curr = max(a[i], curr + a[i]);
    } else {
        curr = a[i];
    }
    ans = max(ans, curr);
}
        cout<<ans<<endl;
    }



    return 0;
}
