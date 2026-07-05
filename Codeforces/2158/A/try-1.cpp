/*
 * Problem : Suspension
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 11/29/2025, 8:14:57 PM
 * Link: https://codeforces.com/contest/2158/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int y,r;
        cin>>y>>r;
        int nv=r;
        if(y>=2){
            nv+=floor(y/2);
        }
        if(nv>n)nv=n;
        cout<<nv<<endl;
    }



    return 0;
}
