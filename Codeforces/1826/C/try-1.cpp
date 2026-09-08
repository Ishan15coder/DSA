/*
 * Problem : Dreaming of Freedom
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/8/2026, 7:10:08 PM
 * Link: https://codeforces.com/contest/1826/problem/C
 */

#include<bits/stdc++.h>

using namespace std;

using ll=long long;

#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){

    ll t;
    cin>>t;

    vector<int> spf(1000001);

    for(int i=1;i<=1000000;i++) spf[i]=i;

    for(int i=2;i*i<=1000000;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=1000000;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }

    while(t--){

        ll n,k;
        cin>>n>>k;

        if(n==1||k==1) cout<<"YES"<<endl;
        else{
            if(spf[n]<=k) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }

    return 0;
}
