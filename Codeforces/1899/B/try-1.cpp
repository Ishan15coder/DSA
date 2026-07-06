/*
 * Problem : 250 Thousand Tons of TNT
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/7/2026, 10:48:47 AM
 * Link: https://codeforces.com/contest/1899/problem/B
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
        vector<ll>b=a;
        sort(b.begin(),b.end());
        ll ans = b[n-1] - b[0];

for(int i = 2; i <= n; i++){
    if(n % i == 0){
        int k = i;
        int to = n / k;

        vector<ll> c(to, 0);
        int p = 0;

        for(int x = 0; x < to; x++){
            for(int l = p; l < p + k; l++){
                c[x] += a[l];
            }
            p += k;
        }

        sort(c.begin(), c.end());
        ans = max(ans, c[to-1] - c[0]);
    }
}
        
       
        cout<<ans<<endl;
    }



    return 0;
}
