/*
 * Problem : Divisible Permutation
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/5/2026, 11:56:52 PM
 * Link: https://codeforces.com/contest/2188/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int mid;
        if(n%2 == 0){
            mid=n/2 - 1;
        }else{
            mid=n/2;
        }
        
        for(int i=mid;i>=0;i--){
            if(i == mid && n%2 == 1){
                cout<<i+1<<" ";
            }
            else{
                cout<<i+1<<" "<<n-i<<" ";
            }
        }
        cout<<endl;
    }
}
