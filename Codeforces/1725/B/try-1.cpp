/*
 * Problem : Basketball Together
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 1/28/2026, 7:34:57 PM
 * Link: https://codeforces.com/contest/1725/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long d;
    cin>>d;
    vector<long long>a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    long long ans=0;
    // long long j=0;
    long long p=n;
    for(long long i=0;i<n;i++){
        long long k=ceil((double)d/a[i]);
        if(a[i]*k<=d)k++;
        if(p-k<0)break;
        // j+=k;
        p-=k;
        ans++;
    }
    cout<<ans<<endl;

    
    return 0;
}
