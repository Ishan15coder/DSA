/*
 * Problem : Bit++
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++20 (GCC 13-64)
 * Date: 4/6/2025, 7:52:28 PM
 * Link: https://codeforces.com/contest/282/problem/A
 */

#include<iostream>
using namespace std;
int main(){
    int x=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int p=s.length();
        for(int i=0;i<p;i++){
            if(s[i]=='+'&&s[i+1]=='+'){
                x++;
                break;
            }
            if(s[i]=='-'&&s[i+1]=='-'){
                x--;
                break;
            }
        }
    }
    cout<<x;



    return 0;
}
