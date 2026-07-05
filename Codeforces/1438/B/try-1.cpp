/*
 * Problem : Valerii Against Everyone
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/17/2026, 7:00:15 PM
 * Link: https://codeforces.com/contest/1438/problem/B
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
        vector<ll>b(n);
        v(b,n);
        unordered_set<int>s;
        for(int i=0;i<b.size();i++){
            s.insert(b[i]);
        }
        if(s.size()<n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }



    return 0;
}
