/*
 * Problem : Strange Partition
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 12/30/2025, 12:37:59 AM
 * Link: https://codeforces.com/contest/1471/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<long long>a(n);
        long long s=0;
        long long s2=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
            s2+=ceil((a[i]*1.0)/x);
        }
        s=ceil((s*1.0)/x);
        cout<<s<<" "<<s2<<endl;
    }



    return 0;
}
