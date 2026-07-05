/*
 * Problem : Shizuku Hoshikawa and Farm Legs
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 11/20/2025, 8:19:44 PM
 * Link: https://codeforces.com/contest/2171/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==1)cout<<0<<endl;
        else{
            if(n%4==0)cout<<n/4+1<<endl;
            else{
                int i=n%4;
                n=n-i;
                cout<<n/4+1<<endl;
            }
        }
    }



    return 0;
}
