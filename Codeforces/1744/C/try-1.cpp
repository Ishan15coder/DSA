/*
 * Problem : Traffic Light
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/2/2026, 10:09:03 AM
 * Link: https://codeforces.com/contest/1744/problem/C
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        char p;
        cin>>p;
        string s;
        cin>>s;
        s+=s;
        long long ans=0;
        if(p=='g')cout<<0<<endl;
        else{
            long long pg=-1;
        for(long long i=s.length()-1;i>0;i--){
            if(s[i]=='g'){
                 pg=i;
            }
            if(s[i]==p&&pg!=-1){
              ans=max(pg-i,ans);
            }
            
        }
        
        cout<<ans<<endl;
        }
    }

    return 0;
}
