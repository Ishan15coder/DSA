/*
 * Problem : Snowball
 * Difficulty: Easy
 * Submission: Try 1
 * status: Accepted
 * Language: C++23 (GCC 14-64, msys2)
 * Date: 9/9/2025, 10:45:59 AM
 * Link: https://codeforces.com/contest/1099/problem/A
 */

#include<iostream>
using namespace std;
int main(){
    int sw,sh,w1,h1,w2,h2;
    cin>>sw>>sh;
    cin>>w1>>h1;
    cin>>w2>>h2;
    while(sh>0){
        sw+=sh;
        if(sh==h1)sw-=w1;
        if(sh==h2)sw-=w2;
        if(sw<0)sw=0;
        sh--;
    }
    
    if(sw<0)sw=0;
    cout<<sw;
    return 0;
}
