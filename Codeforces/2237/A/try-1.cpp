/*
 * Problem : Destroying Towers
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 6/18/2026, 8:14:08 PM
 * Link: https://codeforces.com/contest/2237/problem/A
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
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]<a[j])a[j]=a[i];
            }
        }
        ll s=0;
        for(int i=0;i<n;i++)s+=a[i];
        cout<<s<<endl;
    }



    return 0;
}
