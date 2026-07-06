/*
 * Problem : Playing in a Casino
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 7/3/2026, 5:54:17 PM
 * Link: https://codeforces.com/contest/1808/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>>a(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ll k;
                cin>>k;
                a[i].push_back(k);
            }
        }
        sort(a.begin(),a.end());
    
        vector<vector<ll>>b(m);
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[i].push_back(a[j][i]);            
        }
        }
        ll ans=0;
        for(int i=0;i<m;i++){
            ll pref=0;
            sort(b[i].begin(),b[i].end());
        for(int j=0;j<n;j++){
            ans += b[i][j] * j - pref;
            pref += b[i][j];
        }
        }
        
        cout<<ans<<endl;
    }



    return 0;
}
