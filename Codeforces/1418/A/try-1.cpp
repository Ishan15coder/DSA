/*
 * Problem : Buying Torches
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/10/2026, 6:51:58 PM
 * Link: https://codeforces.com/contest/1418/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long q;
    cin>>q;
    while(q--){
    long long x,y,k;
    cin>>x>>y>>k;
    long long sr=k;
    long long t=0;
    long long co=0;
    long long sc=y*k;
    long long fs=sr+sc;
    long long st=1;
    
    // while(st<fs){
    //     st-=1;
    //     st+=x;
    //     t++;
    // }
    if((fs-1)%(x-1)==0){
        t+=(fs-1)/(x-1);
    }
    else t+=((fs-1)/(x-1))+1;
    t+=k;
    cout<<t<<endl;
}
    return 0;
}
