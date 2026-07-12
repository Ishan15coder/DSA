/*
 * Problem : Pashmak and Flowers
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/9/2026, 2:44:52 PM
 * Link: https://codeforces.com/contest/459/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    
        ll n;
        cin>>n;
        vector<ll>a(n);
        v(a,n);
        unordered_map<ll,ll>m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        sort(a.begin(),a.end());
        ll ans=a[n-1]-a[0];
        if(a.size()==m[a[0]]){
            ll s=0;
            for(int i=1;i<n;i++){
                s+=i;
            }
            cout<<0<<" "<<s;
        }

        else cout<<ans<<" "<<m[a[0]]*m[a[n-1]];



    return 0;
};
