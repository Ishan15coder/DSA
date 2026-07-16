/*
 * Problem : Delete and Concatenate
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 7/16/2026, 9:10:43 PM
 * Link: https://codeforces.com/contest/2245/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<ll>a(n);
        v(a,n);
        // ll as=0;
        // ll ans=0;
    
        //     for(int i=0;i<n;i++){
        //         as+=a[i];
        //         as-=c;
        //     }
        //     // cout<<ans<<endl;
        
        
            sort(a.begin(),a.end());
            reverse(a.begin(),a.end());
                   vector<ll>pref(n+1,0);
        for(int i=1;i<=n;i++){
            pref[i]=pref[i-1]+a[i-1];
        }

        ll ans=LLONG_MIN;

        for(ll m=(n+1)/2;m<=n;m++){
            ans=max(ans,pref[m]-m*c);
        }

            cout<<ans<<endl;
    
    }



    return 0;
}
