/*
 * Problem : farmpiggie and Subset Sum
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 7/12/2026, 8:16:03 PM
 * Link: https://codeforces.com/contest/2246/problem/A
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
        ll k=n;
        for(int i=0;i<n;i++){
            a[i]=k;
            k--;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }



    return 0;
}
