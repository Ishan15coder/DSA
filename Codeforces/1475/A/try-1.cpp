/*
 * Problem : Odd Divisor
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 12/29/2025, 1:42:00 AM
 * Link: https://codeforces.com/contest/1475/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        
        long long c=0;
        while(a%2==0){
            a=a/2;
           
        }
        if(a>1)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
}
    



    return 0;
}
