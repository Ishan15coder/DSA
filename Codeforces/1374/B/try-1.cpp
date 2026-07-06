/*
 * Problem : Multiply by 2, divide by 6
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 12/31/2025, 2:19:59 PM
 * Link: https://codeforces.com/contest/1374/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        if(n==1)cout<<0<<endl;
        else{
        if(n%6!=0){
            cnt++;
            n=n*2;
        }
        while(n%6==0){
            n=n/6;
            cnt++;
            if(n%6!=0&&n!=1){
                cnt++;
                n=n*2;
            }
        }
        if(n==1)cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
    }





    return 0;
}
