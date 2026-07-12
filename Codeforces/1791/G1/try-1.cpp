/*
 * Problem : Teleporters (Easy Version)
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 3/23/2026, 11:32:58 AM
 * Link: https://codeforces.com/contest/1791/problem/G1
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];
bool cmp(const pair<ll,ll> &a, const pair<ll,ll> &b) {
    return (a.first+a.second) > (b.first+b.second);
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<pair<ll,ll>>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i+1;
        }
        
        ll cnt=0;
        sort(a.begin(),a.end(),cmp);
       reverse(a.begin(),a.end());
        for(int i=0;i<n;i++ &&c>0){
            if(c>=(a[i].second+a[i].first)){
            c-=a[i].second;
            c-=a[i].first;
            cnt++;
        }   
        }
        
        cout<<cnt<<endl;
    }



    return 0;
}
