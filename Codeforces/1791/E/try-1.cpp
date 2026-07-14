/*
 * Problem : Negatives and Positives
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 3/17/2026, 6:34:54 PM
 * Link: https://codeforces.com/contest/1791/problem/E
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
        ll nev=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                a[i]=abs(a[i]);
                nev++;
            }
        }
        ll s=0;
        sort(a.begin(),a.end());
        if(nev%2!=0){
            a[0]=-a[0];
        }
        for(int i=0;i<n;i++){
            s+=a[i];
            // cout<<a[i]<<" ";
        }
        cout<<s<<endl;
        // cout<<endl;
    }



    return 0;
}
