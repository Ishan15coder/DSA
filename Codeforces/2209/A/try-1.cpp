/*
 * Problem : Flip Flops
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 3/24/2026, 11:54:11 AM
 * Link: https://codeforces.com/contest/2209/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,c,k;
        cin>>n>>c>>k;
        vector<ll>a(n);
        v(a,n);
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]==c)c+=c;
            else if(a[i]<c){
                if(k>0){
                ll g=c-a[i];
                g= min(g,k);
                k-=g;
                a[i]+=g;
            }

                c+=a[i];
            }
            else break;
        }
        cout<<c<<endl;
    }



    return 0;
}
