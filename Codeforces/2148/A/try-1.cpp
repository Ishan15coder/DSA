/*
 * Problem : Sublime Sequence
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/13/2025, 8:07:05 PM
 * Link: https://codeforces.com/contest/2148/problem/A
 */

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        if(n%2==0)cout<<0<<endl;
        else cout<<x<<endl;
    }



    return 0;
}
