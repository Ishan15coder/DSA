/*
 * Problem : Yet Another Array Problem
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 10/28/2025, 9:28:49 PM
 * Link: https://codeforces.com/contest/2167/problem/D
 */

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        long long ma=-1;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            ma=max(ma,a[i]);
        }
        long long ans=-1;
        if(ma==1)ma=3;
        for(long long j=2;j<1000000;j++){
        for(long long i=0;i<n;i++){
            if(__gcd(a[i],j)==1){
                ans=j;
                break;
            }
        }
        if(ans!=-1)break;
    }
    cout<<ans<<endl;
    }



    return 0;
}
