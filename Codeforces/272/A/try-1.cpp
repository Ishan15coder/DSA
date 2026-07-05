/*
 * Problem : Dima and Friends
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 6/25/2025, 9:30:39 PM
 * Link: https://codeforces.com/contest/272/problem/A
 */

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>f(n);
    int s=0;
    for(int i=0;i<n;i++){
        cin>>f[i];
        s+=f[i];
    }
    int ans=0;
    

    int j=n+1;
    for(int i=1;i<=5;i++){
        int p=s+i;
        if(p%j!=1)ans++;
    }
    cout<<ans;

    return 0;
}
