/*
 * Problem : 3-palindrome
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/24/2025, 10:11:00 AM
 * Link: https://codeforces.com/contest/805/problem/B
 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==2){
        cout<<"aa";
    }
    else {
        string s="";
        int cnt=0;
        char k='a';
        
        while(s.length()!=n){
           if(n-s.length()==1){
               if(cnt==0){
                   s+="a";
                   cnt=1;
               }
               else{
                   s+="b";
                   cnt=0;
               }
           }
           else{
            if(cnt==0){
                s+="aa";
                cnt=1;
            }
            else{
                s+="bb";
                cnt=0;
            }
           }
        }
        
        cout<<s;
    }

    return 0;
}
