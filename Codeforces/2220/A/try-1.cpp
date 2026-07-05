/*
 * Problem : Blocked
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/13/2026, 8:11:32 PM
 * Link: https://codeforces.com/contest/2220/problem/A
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
        unordered_map<ll,ll>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        int ch=0;
        for(auto it:mp){
            if(it.second>=2){
                ch=1;
            }
        }
        if(ch)cout<<-1<<endl;
        else{
            sort(a.begin(),a.end());
            reverse(a.begin(),a.end());
             for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
        }
        cout<<endl;
        }
    }



    return 0;
}
