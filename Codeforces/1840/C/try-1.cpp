/*
 * Problem : Ski Resort
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 1/19/2026, 11:09:44 AM
 * Link: https://codeforces.com/contest/1840/problem/C
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>q)a[i]=0;
            else a[i]=1;
        }
        long long c=0;
        long long ans=0;
        for(long long i=0;i<n;i++){
            if(a[i]==1)c++;
            else{
                if(c>=k){
                    long long d;
                    d=c-k+1;
                    ans+=(d*(d+1))/2;
                }
                c=0;
            }
        }
        if(c>=k){
                    long long d;
                    d=c-k+1;
                    ans+=(d*(d+1))/2;
                }
        cout<<ans<<endl;
    }





    return 0;
}
