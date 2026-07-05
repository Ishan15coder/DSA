/*
 * Problem : GCD Partition
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 3/27/2026, 9:47:09 AM
 * Link: https://codeforces.com/contest/1780/problem/B
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
        vector<ll>pre(n);
        pre[0]=a[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+a[i];
        }
        ll ans=-1;
        for(int i=0;i<n-1;i++){
            ll g=gcd(pre[i],(pre[n-1]-pre[i]));
            ans=max(g,ans);
        }
        cout<<ans<<endl;
    }



    return 0;
}
