/*
 * Problem : The Equalizer
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/7/2026, 8:24:04 PM
 * Link: https://codeforces.com/contest/2217/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        v(a,n);
        int s=0;
        for(int i=0;i<n;i++){
            s+=a[i];
        }
        if(s%2!=0)cout<<"YES"<<endl;
        else{
            if((n*k)%2==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }



    return 0;
}
