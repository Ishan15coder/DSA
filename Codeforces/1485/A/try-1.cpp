/*
 * Problem : Add and Divide
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/24/2026, 7:04:40 PM
 * Link: https://codeforces.com/contest/1485/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll na=a;
        ll nb=b;
        ll ans=0;
        if(a==b)cout<<2<<endl;
        else if(a<b)cout<<1<<endl;
        else{
            ll ans=INT_MAX;
            int ch=0;
            if(b==1){
                ch=1;
                b++;
            nb++;
            }
            for(int i=0;i<32;i++){
                a=na;
                b=nb;
                ll ops=0;
                if(ch)ops=1;
                b+=i;
                ops+=i;
                while(a>0){
                    a=a/b;
                    ops++;
                }
                ans=min(ops,ans);
            }
            cout<<ans<<endl;
        }
    }



    return 0;
}
