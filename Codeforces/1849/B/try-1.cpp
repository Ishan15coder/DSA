/*
 * Problem : Monsters
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 1/4/2026, 10:59:57 PM
 * Link: https://codeforces.com/contest/1849/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        vector<pair<long long,long long>>op;
        for(long long i=0;i<n;i++){
            op.push_back({a[i],i+1});
        }
        sort(op.begin(),op.end(),[k](const pair<long long,long long>&a,const pair<long long,long long>&b){
            long long i=a.first%k;
            if(i==0)i=k;
            long long j=b.first%k;
            if(j==0)j=k;
            if(i==j)return a.second<b.second;
            return i>j;
        });
        for(long long i=0;i<n;i++){
            cout<<op[i].second<<" ";
        }
        cout<<endl;

    }



}
