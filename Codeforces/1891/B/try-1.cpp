/*
 * Problem : Deja Vu
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 3/16/2026, 10:08:12 PM
 * Link: https://codeforces.com/contest/1891/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(ll i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll>a(n);
        vector<ll>x(q);
        v(a,n);
        v(x,q);

        ll prev=31;
        
        for(ll i=0;i<q;i++){
            if(x[i]>=prev)continue;
            ll val=pow(2,x[i]);
            for(ll j=0;j<n;j++){
                if(a[j]%val==0){
                    a[j]+=val/2;
                }
            }
            prev=x[i];
        }
          
        for(ll i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }



    return 0;
}
