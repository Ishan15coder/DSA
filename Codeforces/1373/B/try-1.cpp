/*
 * Problem : 01 Game
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 12/31/2025, 2:05:29 PM
 * Link: https://codeforces.com/contest/1373/problem/B
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int z=0,o=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')z++;
            else o++;
        }
        int mi=min(z,o);
        if(mi%2==0)cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }



    return 0;    
}
