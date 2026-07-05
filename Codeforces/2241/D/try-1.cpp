/*
 * Problem : An Alternative Way
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 6/30/2026, 10:00:50 PM
 * Link: https://codeforces.com/contest/2241/problem/D
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
        vector<ll>b(n);
        vector<ll>c(n);
        v(a,n);
        v(b,n);
        int k=0;
        for(int i=0;i<n;i++){
            c[i]=b[i]-a[i];
        }
        ll s=0;
        ll ch=0;

        for(int i=0;i<n-1;i++){
            s+=c[i];
            if(s<0){
                ch=1;
                break;
            }
        }
        if(!ch){
            if(s+c[n-1]<0)ch=1;
        }
        if(!ch)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }



    return 0;
}
