/*
 * Problem : Different Divisors
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/20/2026, 10:13:18 PM
 * Link: https://codeforces.com/contest/1474/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];
bool prime(ll n){
    int ch=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            ch=1;
            break;
        }
    }
    if(ch)return false;
    return true;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=1;
        ll mul=1;
        for(int i=0;i<3;i++){
            while(!prime(mul)){
                mul++;
            }
            ans*=mul;
            mul+=n;
        }
        cout<<ans<<endl;
    }



    return 0;
}
