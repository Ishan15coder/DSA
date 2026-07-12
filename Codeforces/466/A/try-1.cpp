/*
 * Problem : Cheap Travel
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/6/2026, 10:10:03 PM
 * Link: https://codeforces.com/contest/466/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans1=n*a;
    int ans2=(n/m)*b;
     ans2+=min((n%m)*a,b);
    cout<<min(ans1,ans2)<<endl;


    return 0;
}
