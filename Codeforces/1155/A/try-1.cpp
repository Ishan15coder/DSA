/*
 * Problem : Reverse a Substring
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 2/18/2026, 10:11:18 AM
 * Link: https://codeforces.com/contest/1155/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
   
        ll n;
        cin>>n;
        string s;
        cin>>s;
        int ch=0;
        int ans1=-1;
        int ans2=-1;
        for(int i=1;i<n;i++){
            if(s[i-1]-'a'>s[i]-'a'){
                ch=1;
                ans1=i;
                ans2=i+1;
                break;
            }
        }
        if(ch){
            cout<<"YES"<<endl;
            cout<<ans1<<" "<<ans2;
        }
        else cout<<"NO"<<endl;

    return 0;
}
