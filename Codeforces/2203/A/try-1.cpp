/*
 * Problem : Towers of Boxes
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/25/2026, 8:15:44 PM
 * Link: https://codeforces.com/contest/2203/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,d;
        cin>>n>>m>>d;
        if(m>d)cout<<n<<endl;
        else{
            ll k=d/m;
            ll ans=0;
            k++;
            while(n>0){
                n-=k;
                ans++;
            }
            cout<<ans<<endl;
        }

    }



    return 0;
}
