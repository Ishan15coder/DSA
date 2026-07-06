/*
 * Problem : Chewbaсca and Number
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 4/8/2026, 11:33:40 AM
 * Link: https://codeforces.com/contest/514/problem/A
 */

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define v(a,n) for(int i=0;i<n;i++)cin>>a[i];

int main(){
    
        ll n;
        cin>>n;
        string s=to_string(n);
        int ch=-1;
        
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                ch=i;
                break;
            }
        }
        if(ch==-1)cout<<9<<endl;
        else {
            string m="";
        for(int i=ch;i<s.length();i++){
           m+=s[i];
        }
        s=m;
        
        string k="";
        for(int i=0;i<s.length();i++){
            int num=s[i]-'0';
            if(i==0 &&num==9){
                k+=s[i];
            }
            else if(num>9-num){
                k+=char((9-num)+'0');
            }
            else{
                k+=s[i];
            }
        }
        cout<<k;
        }
    


    return 0;
}
