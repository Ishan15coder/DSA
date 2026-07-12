/*
 * Problem : ezraft and Array
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 7/12/2026, 8:26:02 PM
 * Link: https://codeforces.com/contest/2246/problem/B
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
        if(n==1)cout<<1<<endl;
        else if(n==2){
            cout<<-1<<endl;
        }
        else{
            a[0]=1;
            a[1]=2;
            a[2]=3;
            ll s=6;
            for(int i=3;i<n;i++){
                a[i]=s;
                s+=s;
            }
            for(int i=0;i<n-1;i++)cout<<a[i]<<" ";
            cout<<a[n-1]<<endl;
        }
    }



    return 0;
}
