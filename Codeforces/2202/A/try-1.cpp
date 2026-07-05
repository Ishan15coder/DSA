/*
 * Problem : Parkour Design
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/23/2026, 9:25:14 PM
 * Link: https://codeforces.com/contest/2202/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
         ll x,y;
    cin>>x>>y;

ll d=x-2LL*y;

 if(d<0 || d%3!=0){
cout<<"NO\n";
    continue;
 }

   ll k=d/3;
 ll lower=max(0LL,-y);
   ll upper=k/2;

if(lower<=upper)
   cout<<"YES\n";
 else
cout<<"NO\n";
    }



    return 0;
}
