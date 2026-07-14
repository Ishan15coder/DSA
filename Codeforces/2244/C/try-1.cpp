/*
 * Problem : Stepan and Permutation
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 7/14/2026, 9:31:45 PM
 * Link: https://codeforces.com/contest/2244/problem/C
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll>a(n);
        v(a,n);
        // vector<ll>b=a;
        // sort(b.begin(),b.end());
           ll gc= __gcd(x, y);
        ll ch=0;
                for(int i=0;i<n;i++){
                    if((a[i]-1)%gc!=i%gc){
                        ch=1;
                        break;
                    }
                }
                if(ch)cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
           
    }


    return 0;
}
