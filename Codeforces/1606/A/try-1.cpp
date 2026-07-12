/*
 * Problem : AB Balance
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/29/2025, 6:38:51 PM
 * Link: https://codeforces.com/contest/1606/problem/A
 */

#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]!=s[s.length()-1]){
            s[0]=s[s.length()-1];
        }
        cout<<s<<endl;
    }


    return 0;
}
