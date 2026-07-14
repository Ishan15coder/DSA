/*
 * Problem : Nikita and Books
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 7/14/2026, 8:54:09 PM
 * Link: https://codeforces.com/contest/2244/problem/B
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
        ll k=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>i+1){
                ll b=a[i]-(i+1);
                a[i+1]+=b;
                a[i]-=b;
                k++;
            }
            else if(a[i]<i+1){
                 break;
            }
         
        }
        ll ch=0;
       for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            ch=1;
        }
       }
       if(ch)cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }




    return 0;
}
