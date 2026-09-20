/*
 * Problem : CSES Task 1630
 * Difficulty: Unknown
 * Submission: Try 1
 * status: Accepted
 * Language: C++
 * Date: 9/20/2026, 7:45:51 PM
 * Link: https://cses.fi/problemset/task/1630
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>a;
   for(ll i=0;i<n;i++){
        ll du,de;
        cin>>du>>de;
        a.push_back({du,de});
    }
    sort(a.begin(),a.end());
    ll t=0;
    ll ans=0;
    for(ll i=0;i<n;i++){
        t+=a[i].first;
        ans+=a[i].second-t;
    }
    cout<<ans<<endl;



    return 0;
}
