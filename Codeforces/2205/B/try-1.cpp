/*
 * Problem : Simons and Cakes for Success
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/26/2026, 9:47:34 PM
 * Link: https://codeforces.com/contest/2205/problem/B
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
             
            ll k=n;
            ll ans=1;
            for(ll i=2;i*i<=k;i++){
                if(k%i==0){
                    ans *= i;
                while(k % i == 0)
                       k/= i;
                  }

                }
            
            if(k>1)ans*=k;
            cout<<ans<<endl;


        }



        return 0;
    }
