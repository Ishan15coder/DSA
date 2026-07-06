/*
 * Problem : The 67th Permutation Problem
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/6/2026, 9:49:33 AM
 * Link: https://codeforces.com/contest/2218/problem/C
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
        n=n*3;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            a[i]=i+1;
        }
        vector<ll>p;
        ll j=0;
        for(int i=n-1;i>0;i=i-2){
            p.push_back(a[i]);
            p.push_back(a[i-1]);
            p.push_back(a[j]);
            if(j+1==i)break;
            j++;
        }
        for(int i=0;i<n;i++)cout<<p[i]<<" ";
        cout<<endl;
    }



    return 0;
}
