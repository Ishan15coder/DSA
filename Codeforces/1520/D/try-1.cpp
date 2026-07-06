/*
 * Problem : Same Differences
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 6/17/2026, 11:06:27 AM
 * Link: https://codeforces.com/contest/1520/problem/D
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
vector<ll>ans;
        int cnt=0;
        for(int i=0;i<n;i++){
           ans.push_back(a[i]-i);
        }
        unordered_map<int,int>mp;
        for(int i=0;i<ans.size();i++){
            mp[ans[i]]++;
        }
        ll an=0;
        for(auto it:mp){
            if(it.second>=2){
                ll k=it.second;
                k--;
                an+=(k*(k+1))/2;
            }
        }
        cout<<an<<endl;

    }



    return 0;
}
