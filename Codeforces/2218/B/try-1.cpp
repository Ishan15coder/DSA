/*
 * Problem : The 67th 6-7 Integer Problem
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/6/2026, 9:35:28 AM
 * Link: https://codeforces.com/contest/2218/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        
        vector<ll>a(7);
        v(a,7);
        sort(a.begin(),a.end());
        ll s=0;
        for(int i=0;i<6;i++){
            s-=a[i];
        } 
        s+=a[6];
        cout<<s<<endl;
    }



    return 0;
}
