/*
 * Problem : Homework
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 8/21/2025, 8:14:07 PM
 * Link: https://codeforces.com/contest/2132/problem/A
 */

#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int m;
        cin>>m;
        string b;
        cin>>b;
        string c;
        cin>>c;
        string ans="";
        for(int i=0;i<m;i++){
            if(c[i]=='D'){
                a+=b[i];
            }
            else{
                ans="";
                ans+=b[i];
                ans+=a;
                a=ans;
            }
        }
        cout<<a<<endl;
    }
}
