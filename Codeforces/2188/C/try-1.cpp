/*
 * Problem : Restricted Sorting
 * Difficulty: Medium
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/6/2026, 6:23:57 PM
 * Link: https://codeforces.com/contest/2188/problem/C
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        long long ans=INT_MAX;
        vector<long long>b=a;
        sort(b.begin(),b.end());
        for(long long i=0;i<n;i++){
                if(a[i]!=b[i]){
                    long long v=max(a[i]-b[0],b[n-1]-a[i]);
                    ans=min(ans,v);
            }
        }
        if(ans==INT_MAX)ans=-1;
        cout<<ans<<endl;
    }
 
}
