/*
 * Problem : Way Too Long Words
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 4/4/2025, 1:52:17 PM
 * Link: https://codeforces.com/contest/71/problem/A
 */

#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int p=s.length();
        if(p>10){
            cout<<s[0]<<p-2<<s[p-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}
