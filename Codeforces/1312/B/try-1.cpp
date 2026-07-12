/*
 * Problem : Bogosort
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/19/2026, 12:11:21 PM
 * Link: https://codeforces.com/contest/1312/problem/B
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
        // vector<ll>b(n);
        // vector<ll>c(n);
        v(a,n);
        // b=a;


        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        // sort(c.begin(),c.end());
        // reverse(c.begin(),c.end());

        
        
        // for(int i=0;i<n-2;i+=2){
        //     if(i+2<n){
        //     swap(a[i],a[i+2]);
        //     }
        // }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
