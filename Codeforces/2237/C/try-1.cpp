/*
 * Problem : Duck Surplus
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 6/18/2026, 8:31:56 PM
 * Link: https://codeforces.com/contest/2237/problem/C
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
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                a[i+1]+=a[i];
            }
        }
        ll ma=INT_MIN;
        for(int i=0;i<n;i++){
            ma=max(a[i],ma);
        }
        cout<<ma<<endl;
    }



    return 0;
}
