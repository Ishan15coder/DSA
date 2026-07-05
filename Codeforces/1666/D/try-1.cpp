/*
 * Problem : Deletive Editing
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/21/2025, 12:51:06 PM
 * Link: https://codeforces.com/contest/1666/problem/D
 */

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s,t;
        cin>>s>>t;
        unordered_map<char,int>h;
        
            for(int k=0;k<t.length();k++){
                    h[t[k]]++;
                }
            
            
        for(int j=s.length()-1;j>=0;j--){
            if(h[s[j]]>0){
                h[s[j]]--;
            }
            else s[j]='.';
        }
        string fi="";
        for(int j=0;j<s.length();j++){
            if(s[j]!='.'){
                fi+=s[j];
            }
        }
        if(fi==t)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
