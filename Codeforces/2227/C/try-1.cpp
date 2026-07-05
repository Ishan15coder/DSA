/*
 * Problem : Snowfall
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/30/2026, 9:18:25 PM
 * Link: https://codeforces.com/contest/2227/problem/C
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
        vector<ll>ev;
        vector<ll>od;
       for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%6==0)ev.push_back(a[i]);
        else if(a[i]%3==0)od.push_back(a[i]);
       }
        for(int i=0;i<n;i++){
            if(a[i]%6==0)continue;
            else if(a[i]%3==0)continue;
            else if(a[i]%2==0){
                ev.push_back(a[i]);
            }
            else od.push_back(a[i]);
        }
        reverse(od.begin(),od.end());
        for(int i=0;i<od.size();i++){
            ev.push_back(od[i]);
        }
        for(int i=0;i<ev.size();i++){
            cout<<ev[i]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
