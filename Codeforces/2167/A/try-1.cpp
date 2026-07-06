/*
 * Problem : Square?
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 10/28/2025, 8:09:22 PM
 * Link: https://codeforces.com/contest/2167/problem/A
 */

#include<iostream>
using namespace std;
int main(){ 
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b&&b==c&&c==d)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }




    return 0;
}
