/*
 * Problem : Helmets in Night Light
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 1/3/2026, 7:35:10 PM
 * Link: https://codeforces.com/contest/1876/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,c;
        cin>>n>>c;
        vector<long long>a(n);
        vector<long long>b(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        for(long long i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<long long,long long>>p;
        for(long long i=0;i<n;i++){
            p.push_back({b[i],a[i]});
        }
        sort(p.begin(),p.end(),[](const pair<long long,long long>& ab,const pair<long long,long long>& ba){
             return ab.first<ba.first;
        });
        long long comp=0,cos=0;
        cos+=c;
        comp+=1;
        for(auto x:p){
            if(comp==n)break;
            if(comp==n)break;
            if(x.first >= c) {
        // remaining all paid by c
        cos += (n - comp) * c;
        break;
    }
            long long j=x.second;
            if(comp+j>n){
                j=n-comp;
            }
            comp+=j;
            cos+=j*x.first;
        }
        cout<<cos<<endl;
    }




    return 0;
}
